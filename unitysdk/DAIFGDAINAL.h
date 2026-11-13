#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define DAIFGDAINAL_CTOR_OFFSET UNITYSDK_OFFSET(0x19945390)
#define DAIFGDAINAL_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0x19945210)

inline static constexpr unsigned int DAIFGDAINAL_TypeDefinitionIndex = 68460;

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
