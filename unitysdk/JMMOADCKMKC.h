#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define JMMOADCKMKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2725F0)
#define JMMOADCKMKC_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xB272330)

	class JMMOADCKMKC : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMOADCKMKC_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMOADCKMKC_FHAAHMEJMCI_OFFSET))(this);
		}

	};
