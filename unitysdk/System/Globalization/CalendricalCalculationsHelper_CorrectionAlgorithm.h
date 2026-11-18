#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CalendricalCalculationsHelper_CorrectionAlgorithm_TypeDefinitionIndex = 697;

	enum class CalendricalCalculationsHelper_CorrectionAlgorithm : ::System::Int32
	{
		Default = 0,
		Year1988to2019 = 1,
		Year1900to1987 = 2,
		Year1800to1899 = 3,
		Year1700to1799 = 4,
		Year1620to1699 = 5,
	};
}
