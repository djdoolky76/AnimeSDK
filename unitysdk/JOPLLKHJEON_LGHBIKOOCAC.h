#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ICICEAHOBMN;
class JOPLLKHJEON;

#define JOPLLKHJEON_LGHBIKOOCAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C373D80)

inline static constexpr unsigned int JOPLLKHJEON_LGHBIKOOCAC_TypeDefinitionIndex = 62012;

class JOPLLKHJEON_LGHBIKOOCAC : public ::System::Object
{
public:
	::ICICEAHOBMN* IPMMCGDMODG; // 0x10
	::JOPLLKHJEON* KLHPEBKNIFB; // 0x18
	::System::Int32 IIDDDBHDBGM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPLLKHJEON_LGHBIKOOCAC__CTOR_OFFSET))(this);
	}
};
