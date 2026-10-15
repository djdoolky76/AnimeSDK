#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NamedCurve; }

#define RPG_CLIENT_HITTIMESLOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD330380)

namespace RPG::Client
{
	class HitTimeSlowConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::HitTimeSlowType Type; // 0x10
		::RPG::GameCore::HitTimeSlowIntensity Intensity; // 0x14
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::NamedCurve* Curve; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HITTIMESLOWCONFIG_CTOR_OFFSET))(this);
		}

	};
}
