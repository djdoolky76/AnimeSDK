#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	enum class ErrorType : ::System::Int32
	{
		Unknown = 0,
		IncompleteMessage = 1,
		DuplicateObjectKeys = 2,
		InvalidOrUnexpectedCharacter = 3,
	};
}
