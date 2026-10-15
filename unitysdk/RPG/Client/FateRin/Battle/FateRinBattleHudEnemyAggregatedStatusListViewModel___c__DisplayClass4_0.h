#pragma once
#include "unitysdk/unitysdk.h"
class AOFHFKPKKJI;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudEnemyAggregatedStatusListViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0_TypeDefinitionIndex = 80906;

	struct alignas(8) FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0
	{
		::RPG::Client::FateRin::Battle::FateRinBattleHudEnemyAggregatedStatusListViewModel* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::AOFHFKPKKJI*, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* oldMap; // 0x18
	};
}
