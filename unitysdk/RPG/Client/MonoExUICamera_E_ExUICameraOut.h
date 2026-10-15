#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MonoExUICamera_E_ExUICameraOut : ::System::Int32
	{
		None = 0,
		Left = 1,
		Top = 2,
		Right = 4,
		Bottom = 8,
	};
}
