#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PFACHJFCILN_PreloadType_TypeDefinitionIndex = 59694;

	enum class PFACHJFCILN_PreloadType : ::System::Int32
	{
		InUse = 0,
		Immediate = 1,
		VeryHigh = 2,
		High = 3,
		Normal1 = 4,
		Normal2 = 5,
		NormalEnd = 6,
		Prefer1 = 7,
		Prefer2 = 8,
		Common = 9,
		CommonEnd = 10,
		Low = 11,
		NoUse = 12,
		Count = 13,
	};
