#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MoveOffsetCoordType : ::System::Int32
	{
		SourceToTarget = 0,
		OriginalSourceToTarget = 1,
		Source = 2,
		Target = 3,
	};
}
