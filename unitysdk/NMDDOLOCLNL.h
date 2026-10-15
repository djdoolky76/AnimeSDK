#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define NMDDOLOCLNL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC81DD0)
#define NMDDOLOCLNL_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xBC81C10)

inline static constexpr unsigned int NMDDOLOCLNL_TypeDefinitionIndex = 66519;

	class NMDDOLOCLNL : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDDOLOCLNL_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDDOLOCLNL_FHAAHMEJMCI_OFFSET))(this);
		}

	};
