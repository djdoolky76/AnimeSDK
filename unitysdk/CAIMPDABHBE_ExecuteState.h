#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int CAIMPDABHBE_ExecuteState_TypeDefinitionIndex = 71119;

	enum class CAIMPDABHBE_ExecuteState : ::System::Int32
	{
		None = 0,
		Appending = 1,
		Executing = 2,
		Complete = 3,
	};
