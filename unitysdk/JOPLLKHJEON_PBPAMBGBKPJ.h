#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOPLLKHJEON;

#define JOPLLKHJEON_PBPAMBGBKPJ_ACKNHEDGDNB_OFFSET UNITYSDK_OFFSET(0x152B4990)
#define JOPLLKHJEON_PBPAMBGBKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x152B4980)

inline static constexpr unsigned int JOPLLKHJEON_PBPAMBGBKPJ_TypeDefinitionIndex = 62014;

class JOPLLKHJEON_PBPAMBGBKPJ : public ::System::Object
{
public:
	::JOPLLKHJEON* KLHPEBKNIFB; // 0x10
	::System::Int32 IIDDDBHDBGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPLLKHJEON_PBPAMBGBKPJ__CTOR_OFFSET))(this);
	}

	::System::Void ACKNHEDGDNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPLLKHJEON_PBPAMBGBKPJ_ACKNHEDGDNB_OFFSET))(this);
	}
};
