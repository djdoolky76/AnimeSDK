#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UISymbolFilterType : ::System::Int32
	{
		Letter = 2,
		Number = 4,
		CJKUnifiedIdeographs = 8,
	};
}
