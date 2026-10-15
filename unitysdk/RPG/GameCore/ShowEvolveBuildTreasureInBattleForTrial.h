#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowEvolveBuildTreasureInBattleForTrial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADC080)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADC090)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADC050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildTreasureInBattleForTrial_TypeDefinitionIndex = 22515;

	class ShowEvolveBuildTreasureInBattleForTrial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetGearID; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* LevelMap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
