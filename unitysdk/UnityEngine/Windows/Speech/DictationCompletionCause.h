#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	enum class DictationCompletionCause : ::System::Int32
	{
		Complete = 0,
		AudioQualityFailure = 1,
		Canceled = 2,
		TimeoutExceeded = 3,
		PauseLimitExceeded = 4,
		NetworkFailure = 5,
		MicrophoneUnavailable = 6,
		UnknownError = 7,
	};
}
