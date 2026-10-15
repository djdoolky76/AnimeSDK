#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define DFBHGBIMOPH_CTOR_OFFSET UNITYSDK_OFFSET(0xE818D50)
#define DFBHGBIMOPH_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xE818C50)

inline static constexpr unsigned int DFBHGBIMOPH_TypeDefinitionIndex = 66517;

	class DFBHGBIMOPH : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHGBIMOPH_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHGBIMOPH_FHAAHMEJMCI_OFFSET))(this);
		}

	};
