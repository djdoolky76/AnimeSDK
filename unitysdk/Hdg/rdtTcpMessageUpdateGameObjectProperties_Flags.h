#pragma once
#include "unitysdk/unitysdk.h"

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageUpdateGameObjectProperties_Flags_TypeDefinitionIndex = 48018;

	enum class rdtTcpMessageUpdateGameObjectProperties_Flags : ::System::Int32
	{
		UpdateEnabled = 1,
		UpdateTag = 2,
		UpdateLayer = 4,
	};
}
