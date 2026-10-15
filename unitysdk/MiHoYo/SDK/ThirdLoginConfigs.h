#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class ThirdLoginConfig; }

#define MIHOYO_SDK_THIRDLOGINCONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE2B20)

namespace MiHoYo::SDK
{
	class ThirdLoginConfigs : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ThirdLoginConfig* tw; // 0x10
		::MiHoYo::SDK::ThirdLoginConfig* fb; // 0x18
		::MiHoYo::SDK::ThirdLoginConfig* gl; // 0x20
		::MiHoYo::SDK::ThirdLoginConfig* ap; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THIRDLOGINCONFIGS_CTOR_OFFSET))(this);
		}

	};
}
