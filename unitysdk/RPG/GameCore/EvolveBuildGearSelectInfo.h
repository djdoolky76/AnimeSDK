#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EvolveGearConfig; }

#define RPG_GAMECORE_EVOLVEBUILDGEARSELECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE688D10)

namespace RPG::GameCore
{
	class EvolveBuildGearSelectInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveGearConfig* GearConfig; // 0x10
		::System::Boolean IsLost; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARSELECTINFO_CTOR_OFFSET))(this);
		}

	};
}
