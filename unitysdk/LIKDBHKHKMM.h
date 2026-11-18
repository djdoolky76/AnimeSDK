#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LIKDBHKHKMM_TypeDefinitionIndex = 65959;

enum class LIKDBHKHKMM : ::System::Int32
{
	ToDo = 10,
	None = 0,
	EditorOnly = 1,
	ToBeReviewed = 2,
	Iterating = 5,
	Done = 3,
	EditorBuildIn = 1000,
	Abandoned = 4,
};
