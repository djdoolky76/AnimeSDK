#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EGenericGroupCreateFailReason_TypeDefinitionIndex = 58900;

	enum class EGenericGroupCreateFailReason : ::System::Int32
	{
		NotGenericType = 1,
		None = 0,
		SuiteVersionNotV1 = 2,
		SceneNotReady = 5,
		GroupLoadSkipped = 8,
		NotInCurrentFloor = 3,
		InMultiplayerMode = 6,
		FullCleanupInProgress = 7,
		AlreadyExists = 4,
	};
}
