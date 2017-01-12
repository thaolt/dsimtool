#include <stdio.h>
#include <libserialport.h>
#include "util.h"

int main (void)
{
	struct sp_port **list_ptr;

	char ret;
	ret = sp_list_ports(&list_ptr);

	if (ret != SP_OK)
		return 1;

	printf("%s\t\t%s\n", "Name", "Transport");
	while (*list_ptr != 0) {
		printf("%s\t%s\n"
			, sp_get_port_name(*list_ptr)
			, sp_transport_type_to_str(sp_get_port_transport(*list_ptr))
		);
		list_ptr++;
	}

	return 0;
}