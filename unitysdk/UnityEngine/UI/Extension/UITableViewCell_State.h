#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_State_TypeDefinitionIndex = 54523;

	enum class UITableViewCell_State : ::System::Int32
	{
		Normal = 0,
		Disabled = 3,
		Dimmed = 1,
		Selected = 2,
	};
}
