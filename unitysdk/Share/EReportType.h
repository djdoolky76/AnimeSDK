#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EReportType_TypeDefinitionIndex = 12576;

	enum class EReportType : ::System::Int16
	{
		Task = 2,
		DialogInFairy = 3,
		Fairy = 0,
		Dialog = 1,
	};
}
