#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJLENHLAIJ.h"

#define AJHBPFJAJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBC9D0)
#define AJHBPFJAJAC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12CBCA10)

inline static constexpr unsigned int AJHBPFJAJAC_TypeDefinitionIndex = 61334;

	class AJHBPFJAJAC : public ::IIJLENHLAIJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHBPFJAJAC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHBPFJAJAC_KPJGDHLENIP_OFFSET))(this);
		}

	};
