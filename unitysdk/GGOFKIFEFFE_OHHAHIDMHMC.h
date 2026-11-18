#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class GGOFKIFEFFE;

#define GGOFKIFEFFE_OHHAHIDMHMC_PPCKNMGDKDA_OFFSET UNITYSDK_OFFSET(0x16CC2FA0)
#define GGOFKIFEFFE_OHHAHIDMHMC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC2F90)

inline static constexpr unsigned int GGOFKIFEFFE_OHHAHIDMHMC_TypeDefinitionIndex = 72038;

class GGOFKIFEFFE_OHHAHIDMHMC : public ::System::Object
{
public:
	::AFMMAIKKACF* AAOCANGHBDG; // 0x10
	::GGOFKIFEFFE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOFKIFEFFE_OHHAHIDMHMC__CTOR_OFFSET))(this);
	}

	::System::Void PPCKNMGDKDA(::System::Boolean IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGOFKIFEFFE_OHHAHIDMHMC_PPCKNMGDKDA_OFFSET))(this, IGAAKDOIPNN);
	}
};
