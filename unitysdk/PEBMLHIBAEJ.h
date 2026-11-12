#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define PEBMLHIBAEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC9397A0)
#define PEBMLHIBAEJ_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xC9396B0)

inline static constexpr unsigned int PEBMLHIBAEJ_TypeDefinitionIndex = 68450;

	class PEBMLHIBAEJ : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBMLHIBAEJ_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBMLHIBAEJ_FHAAHMEJMCI_OFFSET))(this);
		}

	};
