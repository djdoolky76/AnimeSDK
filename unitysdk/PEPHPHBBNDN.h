#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PEPHPHBBNDN_TypeDefinitionIndex = 90227;

enum class PEPHPHBBNDN : ::System::Byte
{
	FeedbackOnResultFinished = 5,
	Done = 6,
	FeedbackOnResultException = 4,
	None = 0,
	ClientPerformFinished = 2,
	ClientPerforming = 1,
	FeedbackOnResultStarted = 3,
};
