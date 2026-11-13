#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define CNHBOLKGGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19145DE0)
#define CNHBOLKGGFJ_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0x19145C30)

inline static constexpr unsigned int CNHBOLKGGFJ_TypeDefinitionIndex = 68446;

	class CNHBOLKGGFJ : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHBOLKGGFJ_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHBOLKGGFJ_FHAAHMEJMCI_OFFSET))(this);
		}

	};
