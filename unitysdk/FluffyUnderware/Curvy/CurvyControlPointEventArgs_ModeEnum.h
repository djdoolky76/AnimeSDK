#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControlPointEventArgs_ModeEnum_TypeDefinitionIndex = 37711;

	enum class CurvyControlPointEventArgs_ModeEnum : ::System::Int32
	{
		AddAfter = 2,
		None = 0,
		Delete = 3,
		AddBefore = 1,
	};
}
