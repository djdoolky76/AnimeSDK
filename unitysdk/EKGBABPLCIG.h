#pragma once
#include "unitysdk/unitysdk.h"

#define EKGBABPLCIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1998F090)

inline static constexpr unsigned int EKGBABPLCIG_TypeDefinitionIndex = 78149;

	class EKGBABPLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGBABPLCIG_CTOR_OFFSET))(this);
		}

	};
