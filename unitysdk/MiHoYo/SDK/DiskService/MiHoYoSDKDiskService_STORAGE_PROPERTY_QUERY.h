#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::DiskService
{
	struct alignas(8) MiHoYoSDKDiskService_STORAGE_PROPERTY_QUERY
	{
		::System::UInt32 PropertyId; // 0x10
		::System::UInt32 QueryType; // 0x14
		::Il2CppArray<::System::Byte>* AdditionalParameters; // 0x18
	};
}
