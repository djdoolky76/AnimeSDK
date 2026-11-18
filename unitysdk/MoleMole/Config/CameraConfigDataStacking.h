#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraConfigDataStacking_TypeDefinitionIndex = 39053;

	enum class CameraConfigDataStacking : ::System::Int32
	{
		Mutiple = 2,
		Unique_UseZeroValue = 1,
		Unique_UseCurValue = 0,
	};
}
