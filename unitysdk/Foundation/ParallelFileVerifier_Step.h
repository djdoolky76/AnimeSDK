#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_Step_TypeDefinitionIndex = 50671;

	enum class ParallelFileVerifier_Step : ::System::Int32
	{
		FileHash = 2,
		Pre = 1,
		Finish = 4,
		Init = 0,
		CheckResult = 3,
	};
}
