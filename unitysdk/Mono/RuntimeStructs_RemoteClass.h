#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono
{
	struct alignas(8) RuntimeStructs_RemoteClass
	{
		::System::IntPtr default_vtable; // 0x10
		::System::IntPtr xdomain_vtable; // 0x18
		::PVOID proxy_class; // 0x20
		::System::IntPtr proxy_class_name; // 0x28
		::System::UInt32 interface_count; // 0x30
	};
}
