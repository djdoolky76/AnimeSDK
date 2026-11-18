#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_FadeFlag_TypeDefinitionIndex = 55820;

	enum class UIBaseController_FadeFlag : ::System::Int32
	{
		Start = 1,
		FadeOut = 3,
		Other = 4,
		None = 0,
		Close = 2,
		FadeIn = 5,
	};
}
