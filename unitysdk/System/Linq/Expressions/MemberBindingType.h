#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	enum class MemberBindingType : ::System::Int32
	{
		Assignment = 0,
		MemberBinding = 1,
		ListBinding = 2,
	};
}
