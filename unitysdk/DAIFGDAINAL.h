#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define DAIFGDAINAL_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC38D0)
#define DAIFGDAINAL_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xDFC3750)

inline static constexpr unsigned int DAIFGDAINAL_TypeDefinitionIndex = 66524;

	class DAIFGDAINAL : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIFGDAINAL_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIFGDAINAL_FHAAHMEJMCI_OFFSET))(this);
		}

	};
