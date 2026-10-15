#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DIBNPCGEPAC_ConnectionState_TypeDefinitionIndex = 43944;

	enum class DIBNPCGEPAC_ConnectionState : ::System::Int32
	{
		Normal = 0,
		ShortUnstable = 1,
		LongUnstable = 2,
	};
