#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define CPCLGIIPKGM_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCFFA0)
#define CPCLGIIPKGM_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xDCCFDF0)

inline static constexpr unsigned int CPCLGIIPKGM_TypeDefinitionIndex = 66512;

	class CPCLGIIPKGM : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLGIIPKGM_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLGIIPKGM_FHAAHMEJMCI_OFFSET))(this);
		}

	};
