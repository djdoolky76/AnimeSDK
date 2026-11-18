#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AGIDDFIANOI_TypeDefinitionIndex = 67752;

enum class AGIDDFIANOI : ::System::Int32
{
	OnOtherCardPlayedMatchTag = 105,
	OnCardPlayed = 102,
	OnAttrIncreased = 108,
	OnBuffAddCheckSelectorCardInfo = 110,
	None = 0,
	OnDoDamage = 101,
	OnBuffAddCheckAttr = 106,
	OnAbilityAddBuff = 104,
	OnBuffAdd = 3,
	OnDealDamage = 107,
	OnBuffAddCheckFirstOrLast = 109,
	OnEffectTriggerMatchAbilityTag = 111,
	OnPropertyChanged = 4,
	OnAfterDamageAndBuffAdd = 103,
	OnEffectTrigger = 5,
};
