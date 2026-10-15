#pragma once
#include "unitysdk/unitysdk.h"

#define HFPJBAJLPFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8E1C0)

inline static constexpr unsigned int HFPJBAJLPFL_TypeDefinitionIndex = 62371;

	class HFPJBAJLPFL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPJBAJLPFL_CTOR_OFFSET))(this);
		}

	};
