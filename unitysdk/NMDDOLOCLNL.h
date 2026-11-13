#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define NMDDOLOCLNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A441190)
#define NMDDOLOCLNL_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0x1A440FC0)

inline static constexpr unsigned int NMDDOLOCLNL_TypeDefinitionIndex = 68455;

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
