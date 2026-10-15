#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Expression
{
	enum class Precedence : ::System::Int32
	{
		None = 0,
		Assigment = 1,
		Ternary = 2,
		Equality = 3,
		Relational = 4,
		Term = 5,
		Factor = 6,
		Unary = 7,
		Call = 8,
	};
}
