#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_IBEDJFKLPJD_JKBLEOIDLKB_OFFSET UNITYSDK_OFFSET(0x18460F10)
#define PCMENEMPLGF_IBEDJFKLPJD_LJKJMGGNLDI_OFFSET UNITYSDK_OFFSET(0x18460F50)
#define PCMENEMPLGF_IBEDJFKLPJD__CTOR_OFFSET UNITYSDK_OFFSET(0x18460F00)

inline static constexpr unsigned int PCMENEMPLGF_IBEDJFKLPJD_TypeDefinitionIndex = 62834;

class PCMENEMPLGF_IBEDJFKLPJD : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 IPBFNIPPMBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_IBEDJFKLPJD__CTOR_OFFSET))(this);
	}

	::System::Void JKBLEOIDLKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_IBEDJFKLPJD_JKBLEOIDLKB_OFFSET))(this);
	}

	::System::Void LJKJMGGNLDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_IBEDJFKLPJD_LJKJMGGNLDI_OFFSET))(this);
	}
};
