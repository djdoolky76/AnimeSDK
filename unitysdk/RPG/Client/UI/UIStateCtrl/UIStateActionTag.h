#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int UIStateActionTag_TypeDefinitionIndex = 76210;

	enum class UIStateActionTag : ::System::Int32
	{
		None = 0,
		Collectable = 1,
		ShowOrHide = 2,
		Color = 4,
		Image = 8,
	};
}
