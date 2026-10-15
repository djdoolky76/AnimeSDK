#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN.h"

#define MLHBIPAHCJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A8300)
#define MLHBIPAHCJK_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xB9A7FB0)

inline static constexpr unsigned int MLHBIPAHCJK_TypeDefinitionIndex = 66515;

	class MLHBIPAHCJK : public ::FMIHMGNLBPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHBIPAHCJK_CTOR_OFFSET))(this);
		}

		::System::Boolean FHAAHMEJMCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHBIPAHCJK_FHAAHMEJMCI_OFFSET))(this);
		}

	};
