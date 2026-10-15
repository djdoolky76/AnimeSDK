#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IKEGOBMEPID_ExecuteState_TypeDefinitionIndex = 71117;

	enum class IKEGOBMEPID_ExecuteState : ::System::Int32
	{
		None = 0,
		Appending = 1,
		Executing = 2,
		Complete = 3,
	};
