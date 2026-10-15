#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FateRinKeywordEventType : ::System::Byte
	{
		None = 0,
		DealPlayedHand = 1,
		DealEndActionHand = 2,
		AfterAnyCardPlayed = 4,
		AfterCardEffectFinish = 8,
		AfterAddToHand = 16,
		AfterAddToDiscard = 32,
		AfterAddToDeck = 64,
		AfterAddToExile = 128,
	};
}
