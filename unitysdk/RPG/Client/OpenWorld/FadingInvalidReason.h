#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class FadingInvalidReason : ::System::Int32
	{
		None = 0,
		InstanceDisposed = 1,
		OwnerInvalid = 2,
		WorldDisposed = 3,
	};
}
