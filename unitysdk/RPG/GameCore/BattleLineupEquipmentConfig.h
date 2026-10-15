#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleLineupEquipmentConfig; }

#define RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D460320)
#define RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4601E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupEquipmentConfig_TypeDefinitionIndex = 18122;

	class BattleLineupEquipmentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Id; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 Rank; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleLineupEquipmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleLineupEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
