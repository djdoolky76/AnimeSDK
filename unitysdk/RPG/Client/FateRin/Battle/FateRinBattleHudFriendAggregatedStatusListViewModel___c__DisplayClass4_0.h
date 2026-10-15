#pragma once
#include "unitysdk/unitysdk.h"
class AOFHFKPKKJI;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudFriendAggregatedStatusListViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass4_0_TypeDefinitionIndex = 80916;

	struct alignas(8) FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass4_0
	{
		::RPG::Client::FateRin::Battle::FateRinBattleHudFriendAggregatedStatusListViewModel* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::AOFHFKPKKJI*, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* oldMap; // 0x18
	};
}
