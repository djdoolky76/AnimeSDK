#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJFAFONDHN.h"

#define MOBOBPALBPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B20C5C0)

inline static constexpr unsigned int MOBOBPALBPO_TypeDefinitionIndex = 50592;

	class MOBOBPALBPO : public ::GGJFAFONDHN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBOBPALBPO_CTOR_OFFSET))(this);
		}

	};
