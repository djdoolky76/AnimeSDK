#pragma once
#include "unitysdk/unitysdk.h"

#define EKGBABPLCIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15505850)

inline static constexpr unsigned int EKGBABPLCIG_TypeDefinitionIndex = 75823;

	class EKGBABPLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGBABPLCIG_CTOR_OFFSET))(this);
		}

	};
