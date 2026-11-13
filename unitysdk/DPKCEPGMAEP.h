#pragma once
#include "unitysdk/unitysdk.h"

#define DPKCEPGMAEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7840D0)

inline static constexpr unsigned int DPKCEPGMAEP_TypeDefinitionIndex = 42707;

	class DPKCEPGMAEP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKCEPGMAEP_CTOR_OFFSET))(this);
		}

	};
