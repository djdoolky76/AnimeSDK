#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FateRinPreviewDirtyFlag : ::System::Byte
	{
		None = 0,
		BaseConfig = 1,
		Modifier = 2,
		Property = 4,
		Full = 255,
	};
}
