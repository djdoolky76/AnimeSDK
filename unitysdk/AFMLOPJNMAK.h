#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define AFMLOPJNMAK_CTOR_OFFSET UNITYSDK_OFFSET(0x18DBF890)
#define AFMLOPJNMAK_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0x18DBF610)

inline static constexpr unsigned int AFMLOPJNMAK_TypeDefinitionIndex = 68447;

	class AFMLOPJNMAK : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMLOPJNMAK_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMLOPJNMAK_FHAAHMEJMCI_OFFSET))(this);
		}

	};
