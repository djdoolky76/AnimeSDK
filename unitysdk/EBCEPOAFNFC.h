#pragma once
#include "unitysdk/unitysdk.h"

#define EBCEPOAFNFC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE49D0)
#define EBCEPOAFNFC_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x12CE4870)

inline static constexpr unsigned int EBCEPOAFNFC_TypeDefinitionIndex = 68697;

	class EBCEPOAFNFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEPOAFNFC_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEPOAFNFC_GGNBOEIMEPM_OFFSET))(this);
		}

	};
