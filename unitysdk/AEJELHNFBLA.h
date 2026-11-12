#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define AEJELHNFBLA_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B0300)
#define AEJELHNFBLA_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xD5B0050)

inline static constexpr unsigned int AEJELHNFBLA_TypeDefinitionIndex = 68449;

	class AEJELHNFBLA : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJELHNFBLA_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJELHNFBLA_FHAAHMEJMCI_OFFSET))(this);
		}

	};
