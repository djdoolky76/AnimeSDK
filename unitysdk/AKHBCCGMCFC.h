#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AKHBCCGMCFC_TypeDefinitionIndex = 18742;

enum class AKHBCCGMCFC : ::System::Int32
{
	OnArcadeBuffAdd = 2,
	OnFoodBoiled = 10,
	OnDoDamage = 12,
	OnAbilityAddBuff = 14,
	OnBuffAdd = 1,
	OnHotpotSpoonFetched = 11,
	None = 0,
	OnEffectTrigger = 4,
	BeforeArcadeBuffRemove = 3,
	OnHotpotRoundStart = 9,
	OnScaryNightDealDamage = 15,
	OnCardPlayed = 13,
	PreHotpotRoundEnd = 6,
	EntityEvent = 5,
	OnHotpotRoundReady = 8,
	OnScaryNightAttrBaseChanged = 16,
	OnHotpotSpoonFetchedPostViewEffectDone = 7,
};
