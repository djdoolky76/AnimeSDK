#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	enum class UniverseData_SubNavMapCreateState : ::System::Int32
	{
		Pending = 0,
		Creating = 1,
		Created = 2,
		Invalid = 3,
	};
}
