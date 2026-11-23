#pragma once
#include "unitysdk/unitysdk.h"

namespace E4142FE5654C4F0E
{
	inline static constexpr unsigned int A3344FAA4D686F1B_TypeDefinitionIndex = 11024;

	enum class A3344FAA4D686F1B : ::System::Int32
	{
		None = 0,
		PreferFairness = 1,
		LongRunning = 2,
		AttachedToParent = 4,
		DenyChildAttach = 8,
		HideScheduler = 16,
		LazyCancellation = 32,
		RunContinuationsAsynchronously = 64,
		NotOnRanToCompletion = 65536,
		NotOnFaulted = 131072,
		NotOnCanceled = 262144,
		OnlyOnRanToCompletion = 393216,
		OnlyOnFaulted = 327680,
		OnlyOnCanceled = 196608,
		ExecuteSynchronously = 524288,
	};
}
