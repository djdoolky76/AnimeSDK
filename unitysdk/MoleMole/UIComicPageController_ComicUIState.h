#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_ComicUIState_TypeDefinitionIndex = 84238;

	enum class UIComicPageController_ComicUIState : ::System::Byte
	{
		SwitchScenePlaying = 2,
		FadeOut = 5,
		Playing = 3,
		TurnPage = 4,
		FadeIn = 1,
		None = 0,
	};
}
