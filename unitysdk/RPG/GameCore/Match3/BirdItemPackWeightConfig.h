#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdItemPackWeightConfig; }

#define RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84A810)
#define RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84A720)

namespace RPG::GameCore::Match3
{
	class BirdItemPackWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 Weight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdItemPackWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDITEMPACKWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
