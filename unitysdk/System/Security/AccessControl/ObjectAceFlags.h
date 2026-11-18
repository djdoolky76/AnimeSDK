#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int ObjectAceFlags_TypeDefinitionIndex = 994;

	enum class ObjectAceFlags : ::System::Int32
	{
		None = 0,
		ObjectAceTypePresent = 1,
		InheritedObjectAceTypePresent = 2,
	};
}
