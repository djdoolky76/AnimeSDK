#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJLENHLAIJ.h"

#define AAFEOKPLEGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C56A0)
#define AAFEOKPLEGJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB0C56E0)

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
