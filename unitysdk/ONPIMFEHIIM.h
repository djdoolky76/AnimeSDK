#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define ONPIMFEHIIM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF598E0)
#define ONPIMFEHIIM_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xBF59370)

inline static constexpr unsigned int ONPIMFEHIIM_TypeDefinitionIndex = 66523;

	class ONPIMFEHIIM : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPIMFEHIIM_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPIMFEHIIM_FHAAHMEJMCI_OFFSET))(this);
		}

	};
