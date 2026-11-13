#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define GAPHKOJMCGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B875620)
#define GAPHKOJMCGJ_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0x1B8753A0)

inline static constexpr unsigned int GAPHKOJMCGJ_TypeDefinitionIndex = 68454;

	class GAPHKOJMCGJ : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPHKOJMCGJ_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPHKOJMCGJ_FHAAHMEJMCI_OFFSET))(this);
		}

	};
