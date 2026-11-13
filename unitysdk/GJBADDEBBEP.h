#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGFAHEKNPD.h"

#define GJBADDEBBEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E789420)

inline static constexpr unsigned int GJBADDEBBEP_TypeDefinitionIndex = 42749;

	class GJBADDEBBEP : public ::CFGFAHEKNPD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBADDEBBEP_CTOR_OFFSET))(this);
		}

	};
