#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowProfileCardResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAFA0670)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS11_0__ONSHOWPROFILECARDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAFA1850)

namespace MiHoYo::SDK
{
	class HoYoChannelSystemFunctions___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnShowProfileCardCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS11_0__ONSHOWPROFILECARDCALLBACK_B__0_OFFSET))(this);
		}

	};
}
