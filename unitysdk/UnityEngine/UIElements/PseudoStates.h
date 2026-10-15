#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	enum class PseudoStates : ::System::Int32
	{
		Active = 1,
		Hover = 2,
		Checked = 8,
		Disabled = 32,
		Focus = 64,
		Root = 128,
	};
}
