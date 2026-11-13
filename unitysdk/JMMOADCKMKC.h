#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define JMMOADCKMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BA890)
#define JMMOADCKMKC_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0x1A0BA5D0)

inline static constexpr unsigned int JMMOADCKMKC_TypeDefinitionIndex = 68458;

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
