#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ShadowSettings_MainLightShadow.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SHADOWSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC78910)

namespace RPG::CustomRP
{
	class ShadowSettings : public ::System::Object
	{
	public:
		::System::Single DistanceFade; // 0x10
		::System::Single Strength; // 0x14
		::System::Boolean PerObjectShadows; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::CustomRP::ShadowSettings_MainLightShadow MainLight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWSETTINGS_CTOR_OFFSET))(this);
		}

	};
}
