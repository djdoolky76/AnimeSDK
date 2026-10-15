#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	enum class BindingSourceRejectionType : ::System::Int32
	{
		None = 0,
		DuplicateBindingOnAction = 1,
		DuplicateBindingOnActionSet = 2,
	};
}
