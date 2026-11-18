#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParamMode_TypeDefinitionIndex = 29640;

	enum class ParamMode : ::System::Int32
	{
		In = 1,
		Undefined = 0,
		Ref = 3,
		Result = 6,
		Out = 2,
		Instance = 4,
	};
}
