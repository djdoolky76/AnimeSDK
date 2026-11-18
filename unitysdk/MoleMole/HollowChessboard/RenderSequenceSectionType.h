#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceSectionType_TypeDefinitionIndex = 42238;

	enum class RenderSequenceSectionType : ::System::UInt32
	{
		Sound = 3,
		SceneColorModify = 6,
		None = 0,
		UV = 5,
		All = 1,
		ScreenContent = 2,
		Effect = 4,
	};
}
