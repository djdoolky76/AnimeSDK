#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int EC382C0040FA77C5_TypeDefinitionIndex = 20820;

	enum class EC382C0040FA77C5 : ::System::UInt16
	{
		RemovedShape = 1,
		RemovedOtherShape = 2,
		ActorPairHasFirstTouch = 4,
		ActorPairLostTouch = 8,
		InternalHasImpulses = 16,
		InternalContactsAreFlipped = 32,
	};
}
