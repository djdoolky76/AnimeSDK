#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueDialogueEventDynamicType : ::System::Int32
	{
		None = 0,
		TeamAvatarBaseType = 1,
		RogueBuffTypeTop3 = 2,
		SelectedAeon = 3,
		RandomFromArg = 4,
	};
}
