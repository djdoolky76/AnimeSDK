#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define LPPOALBKPIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB836B70)
#define LPPOALBKPIL_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xB836920)

	class LPPOALBKPIL : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPOALBKPIL_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPOALBKPIL_FHAAHMEJMCI_OFFSET))(this);
		}

	};
