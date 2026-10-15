#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Expression
{
	enum class OpCode : ::System::Byte
	{
		Constant = 0,
		GetGlobal = 1,
		Add = 2,
		Subtract = 3,
		Multiply = 4,
		Divide = 5,
		Modulo = 6,
		Equal = 7,
		NotEqual = 8,
		Less = 9,
		Greater = 10,
		LessOrEqual = 11,
		GreaterOrEqual = 12,
		TernaryCondition = 13,
		Negative = 14,
		Not = 15,
		Call = 16,
		Return = 17,
	};
}
