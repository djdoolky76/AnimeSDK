#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define OPMMEDHGJLC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB3F20)
#define OPMMEDHGJLC_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xBFB3DF0)

	class OPMMEDHGJLC : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMMEDHGJLC_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMMEDHGJLC_FHAAHMEJMCI_OFFSET))(this);
		}

	};
