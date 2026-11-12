#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::AudioRecordingAnnotator
{
	inline static constexpr unsigned int AudioRecordingAnnotationDriver_State_TypeDefinitionIndex = 50035;

	enum class AudioRecordingAnnotationDriver_State : ::System::Int32
	{
		Idle = 0,
		Recording = 1,
		Paused = 2,
		Finalizing = 3,
		Done = 4,
	};
}
