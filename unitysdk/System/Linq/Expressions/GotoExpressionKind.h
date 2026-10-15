#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	enum class GotoExpressionKind : ::System::Int32
	{
		Goto = 0,
		Return = 1,
		Break = 2,
		Continue = 3,
	};
}
