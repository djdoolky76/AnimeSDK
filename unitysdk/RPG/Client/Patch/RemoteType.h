#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Patch
{
	enum class RemoteType : ::System::UInt16
	{
		None = 0,
		Source = 1,
		Block = 2,
		Zip = 4,
		Patch = 8,
	};
}
