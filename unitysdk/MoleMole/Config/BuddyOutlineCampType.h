#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineCampType_TypeDefinitionIndex = 48595;

	enum class BuddyOutlineCampType : ::System::Int32
	{
		Evil = 3,
		Allied = 2,
		Invalid = 10,
		Self = 1,
	};
}
