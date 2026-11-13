#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJLENHLAIJ.h"

#define AAFEOKPLEGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18C74280)
#define AAFEOKPLEGJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18C742C0)

inline static constexpr unsigned int AAFEOKPLEGJ_TypeDefinitionIndex = 62721;

	class AAFEOKPLEGJ : public ::IIJLENHLAIJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFEOKPLEGJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFEOKPLEGJ_KPJGDHLENIP_OFFSET))(this);
		}

	};
