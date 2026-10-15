#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AutoMappingAttachPointType : ::System::Int32
	{
		ModifierPhase = 0,
		LookAtAvatarOnReadyCamera = 1,
		CharacterFormationRule = 2,
	};
}
