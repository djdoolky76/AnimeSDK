#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_RewardEntry_TypeDefinitionIndex = 79641;

	struct alignas(4) UIBossChallengeRewardItemWidgetController_RewardEntry
	{
		::DEDDPKGLKHI_LODLFMBCLAH Item; // 0x10
		::System::Boolean IsInstant; // 0x20
	};
}
