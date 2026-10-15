#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class BabelfishConfig; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF5BED0)
#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xAF5C420)
#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__1_OFFSET UNITYSDK_OFFSET(0xAF5D210)

namespace MiHoYo::SDK
{
	class BabelfishClient___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* onError; // 0x10
		::System::Action* onSuccess; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetConfig_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetConfig_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__1_OFFSET))(this);
		}

	};
}
