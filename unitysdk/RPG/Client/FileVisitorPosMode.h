#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FileVisitorPosMode : ::System::Int32
	{
		StreamAsset = 0,
		FirstPersistAndSecondStreamAsset = 1,
	};
}
