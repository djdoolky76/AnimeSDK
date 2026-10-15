#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define AEJELHNFBLA_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF7820)
#define AEJELHNFBLA_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xCEF7580)

inline static constexpr unsigned int AEJELHNFBLA_TypeDefinitionIndex = 66513;

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
