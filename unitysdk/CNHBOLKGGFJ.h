#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define CNHBOLKGGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4FCA0)
#define CNHBOLKGGFJ_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xDA4FAF0)

inline static constexpr unsigned int CNHBOLKGGFJ_TypeDefinitionIndex = 66510;

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
