#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildTreasureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowEvolveBuildTreasureInBattle; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAE650)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAE660)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAE620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildTreasureInBattle_TypeDefinitionIndex = 22514;

	class ShowEvolveBuildTreasureInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EvolveBuildTreasureType TreasureType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
