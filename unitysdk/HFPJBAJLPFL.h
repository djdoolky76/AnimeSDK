#pragma once
#include "unitysdk/unitysdk.h"

#define HFPJBAJLPFL_CTOR_OFFSET UNITYSDK_OFFSET(0x16BD5ED0)

inline static constexpr unsigned int HFPJBAJLPFL_TypeDefinitionIndex = 63784;

	class HFPJBAJLPFL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPJBAJLPFL_CTOR_OFFSET))(this);
		}

	};
