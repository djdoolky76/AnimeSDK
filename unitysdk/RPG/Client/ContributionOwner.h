#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ContributionOwner : ::System::Int32
	{
		SystemDefault = 0,
		SourceDist = 1,
		ForceOverride = 2,
	};
}
