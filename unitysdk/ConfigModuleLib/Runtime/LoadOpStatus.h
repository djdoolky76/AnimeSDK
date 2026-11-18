#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOpStatus_TypeDefinitionIndex = 8593;

	enum class LoadOpStatus : ::System::Int32
	{
		Failed = 3,
		None = 0,
		Loading = 1,
		Disposed = 4,
		Succeeded = 2,
	};
}
