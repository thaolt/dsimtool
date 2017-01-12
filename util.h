char* sp_transport_type_to_str(char t) {
	if (t == SP_TRANSPORT_NATIVE) return "native";
	if (t == SP_TRANSPORT_USB) return "usb";
	if (t == SP_TRANSPORT_BLUETOOTH) return "bluetooth";
}