#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int UISystemProfilerApi_SampleType_TypeDefinitionIndex = 6037;

	enum class UISystemProfilerApi_SampleType : ::System::Int32
	{
		Layout = 0,
		Render = 1,
	};
}
