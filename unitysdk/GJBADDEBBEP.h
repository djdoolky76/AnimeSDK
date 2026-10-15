#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGFAHEKNPD.h"

#define GJBADDEBBEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C526260)

inline static constexpr unsigned int GJBADDEBBEP_TypeDefinitionIndex = 41774;

	class GJBADDEBBEP : public ::CFGFAHEKNPD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBADDEBBEP_CTOR_OFFSET))(this);
		}

	};
