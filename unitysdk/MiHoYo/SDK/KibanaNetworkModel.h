#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaBaseModel.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANANETWORKMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaNetworkModel_TypeDefinitionIndex = 12927;

	class KibanaNetworkModel : public ::MiHoYo::SDK::KibanaBaseModel
	{
	public:
		::System::String* network_url; // 0xD0
		::System::Int32 network_status_code; // 0xD8
		::System::Byte _padding0[0x4];
		::System::String* network_data; // 0xE0
		::System::String* net_request_body; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANANETWORKMODEL__CTOR_OFFSET))(this);
		}
	};
}
