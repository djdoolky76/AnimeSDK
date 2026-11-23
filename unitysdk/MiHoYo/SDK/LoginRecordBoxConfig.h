#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_LOGINRECORDBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3946D30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoginRecordBoxConfig_TypeDefinitionIndex = 12408;

	class LoginRecordBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean is_checked; // 0x10
		::System::Boolean enable_account_list_decode_opt; // 0x11

		::System::Void _ctor(::System::String* E38AC34CA582739D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOGINRECORDBOXCONFIG__CTOR_OFFSET))(this, E38AC34CA582739D);
		}
	};
}
