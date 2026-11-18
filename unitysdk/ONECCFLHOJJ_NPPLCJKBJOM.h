#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHNKOMIFCKG;
class ONECCFLHOJJ_PJHMLOGCOPH;

#define ONECCFLHOJJ_NPPLCJKBJOM_MNGBOFHMNNP_OFFSET UNITYSDK_OFFSET(0x172DD630)
#define ONECCFLHOJJ_NPPLCJKBJOM__CTOR_OFFSET UNITYSDK_OFFSET(0x172DD620)

inline static constexpr unsigned int ONECCFLHOJJ_NPPLCJKBJOM_TypeDefinitionIndex = 84730;

class ONECCFLHOJJ_NPPLCJKBJOM : public ::System::Object
{
public:
	::ONECCFLHOJJ_PJHMLOGCOPH* EEMOEMFLABI; // 0x10
	::MHNKOMIFCKG* HMMMOCJAEOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECCFLHOJJ_NPPLCJKBJOM__CTOR_OFFSET))(this);
	}

	::System::Void MNGBOFHMNNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECCFLHOJJ_NPPLCJKBJOM_MNGBOFHMNNP_OFFSET))(this);
	}
};
