#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PEKAIPABFMC_TypeDefinitionIndex = 52169;

enum class PEKAIPABFMC : ::System::Int32
{
	String = 1,
	Operator = 4,
	Number = 0,
	Function = 3,
	Variable = 2,
	LeftParen = 5,
	Comma = 7,
	RightParen = 6,
};
