#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LookController_FaceDir_TypeDefinitionIndex = 36940;

	enum class LookController_FaceDir : ::System::Byte
	{
		Left = 1,
		None = 0,
		Right = 2,
	};
}
