#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define MHJGOOMDMGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB93DDA0)
#define MHJGOOMDMGO_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xB93DC00)

inline static constexpr unsigned int MHJGOOMDMGO_TypeDefinitionIndex = 66520;

	class MHJGOOMDMGO : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJGOOMDMGO_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJGOOMDMGO_FHAAHMEJMCI_OFFSET))(this);
		}

	};
