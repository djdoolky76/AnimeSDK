#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_FadeInMode_TypeDefinitionIndex = 84225;

	enum class UIComicPageController_FadeInMode : ::System::Byte
	{
		SpecialBlackMask = 3,
		WhiteMask = 2,
		Normal = 0,
		BlackMask = 1,
	};
}
