#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define DFBHGBIMOPH_CTOR_OFFSET UNITYSDK_OFFSET(0xF184010)
#define DFBHGBIMOPH_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xF183F10)

inline static constexpr unsigned int DFBHGBIMOPH_TypeDefinitionIndex = 68453;

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
