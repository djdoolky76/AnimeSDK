#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_UGCINTERFACE_EXCHANGETOKENRESPONSEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4650)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface_ExchangeTokenResponseData_TypeDefinitionIndex = 47458;

	class UGCInterface_ExchangeTokenResponseData : public ::System::Object
	{
	public:
		::System::String* ugc_token; // 0x10
		::System::Int64 expire; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_EXCHANGETOKENRESPONSEDATA_CTOR_OFFSET))(this);
		}

	};
}
