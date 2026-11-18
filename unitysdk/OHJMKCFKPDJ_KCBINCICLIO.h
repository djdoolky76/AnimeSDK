#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCAHMCCPML.h"
#include "unitysdk/System/Object.h"

class OHJMKCFKPDJ;

#define OHJMKCFKPDJ_KCBINCICLIO_EFBJMNFDIGF_OFFSET UNITYSDK_OFFSET(0x16F7DF10)
#define OHJMKCFKPDJ_KCBINCICLIO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7DF00)

inline static constexpr unsigned int OHJMKCFKPDJ_KCBINCICLIO_TypeDefinitionIndex = 62750;

class OHJMKCFKPDJ_KCBINCICLIO : public ::System::Object
{
public:
	::OHJMKCFKPDJ* KLHPEBKNIFB; // 0x10
	::GHCAHMCCPML FKMHMOELCIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_KCBINCICLIO__CTOR_OFFSET))(this);
	}

	::System::Void EFBJMNFDIGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_KCBINCICLIO_EFBJMNFDIGF_OFFSET))(this);
	}
};
