#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileAction_TypeDefinitionIndex = 3220;

	enum class FileAction : ::System::Int32
	{
		Added = 1,
		Removed = 2,
		Modified = 3,
		RenamedOldName = 4,
		RenamedNewName = 5,
	};
}
