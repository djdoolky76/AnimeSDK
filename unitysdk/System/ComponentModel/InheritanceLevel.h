#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int InheritanceLevel_TypeDefinitionIndex = 3016;

	enum class InheritanceLevel : ::System::Int32
	{
		Inherited = 1,
		InheritedReadOnly = 2,
		NotInherited = 3,
	};
}
