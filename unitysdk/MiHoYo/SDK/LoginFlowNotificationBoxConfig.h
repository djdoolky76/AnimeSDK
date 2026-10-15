#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_LOGINFLOWNOTIFICATIONBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE95BE0)

namespace MiHoYo::SDK
{
	class LoginFlowNotificationBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOGINFLOWNOTIFICATIONBOXCONFIG_CTOR_OFFSET))(this, a1);
		}

	};
}
