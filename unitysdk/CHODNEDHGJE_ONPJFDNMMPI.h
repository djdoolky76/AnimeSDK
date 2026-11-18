#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define CHODNEDHGJE_ONPJFDNMMPI_LPDGLADKEIL_OFFSET UNITYSDK_OFFSET(0x1970C190)
#define CHODNEDHGJE_ONPJFDNMMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x19702140)

inline static constexpr unsigned int CHODNEDHGJE_ONPJFDNMMPI_TypeDefinitionIndex = 88599;

class CHODNEDHGJE_ONPJFDNMMPI : public ::System::Object
{
public:
	::HPBIMDNDPLK LPIHAHMNBIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_ONPJFDNMMPI__CTOR_OFFSET))(this);
	}

	::System::Void LPDGLADKEIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_ONPJFDNMMPI_LPDGLADKEIL_OFFSET))(this);
	}
};
