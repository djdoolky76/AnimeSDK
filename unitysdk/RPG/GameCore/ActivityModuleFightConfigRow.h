#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityModuleFightConfigRow; }

#define RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36B840)
#define RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D36B750)

namespace RPG::GameCore
{
	class ActivityModuleFightConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 ActivityFightGroupID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityModuleFightConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityModuleFightConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEFIGHTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
