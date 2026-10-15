#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Patch
{
	enum class PatchType : ::System::Int32
	{
		Source = 0,
		HDiff = 1,
	};
}
