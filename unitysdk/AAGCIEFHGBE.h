#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AAGCIEFHGBE_TypeDefinitionIndex = 71353;

enum class AAGCIEFHGBE : ::System::Int32
{
	RemoveBuff = 1,
	ModifyAttrByPercent = 12,
	AddCardToDepot = 15,
	PrependCardEffect = 11,
	ConvertAttrByThreshold = 8,
	TriggerBuffEffectAgain = 4,
	ChangeCoin = 5,
	TransformCard = 10,
	CheckAttrAddBuff = 7,
	Empty = 2,
	None = 0,
	TriggerPlayedCardEffect = 13,
	AddAttrByValue = 9,
	DoDamageTimes = 3,
	RetriggerAbility = 14,
	ReplayLastCard = 6,
};
