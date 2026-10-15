#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions::Interpreter
{
	enum class LabelScopeKind : ::System::Int32
	{
		Statement = 0,
		Block = 1,
		Switch = 2,
		Lambda = 3,
		Try = 4,
		Catch = 5,
		Finally = 6,
		Filter = 7,
		Expression = 8,
	};
}
