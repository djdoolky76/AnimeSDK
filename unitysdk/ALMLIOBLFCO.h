#pragma once
#include "unitysdk/unitysdk.h"

#define ALMLIOBLFCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C89D5B0)

inline static constexpr unsigned int ALMLIOBLFCO_TypeDefinitionIndex = 42827;

	class ALMLIOBLFCO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMLIOBLFCO_CTOR_OFFSET))(this);
		}

	};
