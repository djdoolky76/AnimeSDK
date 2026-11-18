#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

class EEMIHLLPOCA;
class PNJDGHBEMLK;

#define EEMIHLLPOCA_AIFJLNOBCOH_DLABIMLPDHK_OFFSET UNITYSDK_OFFSET(0x1589A090)
#define EEMIHLLPOCA_AIFJLNOBCOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1589A080)

inline static constexpr unsigned int EEMIHLLPOCA_AIFJLNOBCOH_TypeDefinitionIndex = 52137;

class EEMIHLLPOCA_AIFJLNOBCOH : public ::System::Object
{
public:
	::EEMIHLLPOCA* KLHPEBKNIFB; // 0x10
	::MoleMole::Vector2Int BOGPAHGJOJK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_AIFJLNOBCOH__CTOR_OFFSET))(this);
	}

	::System::Boolean DLABIMLPDHK(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_AIFJLNOBCOH_DLABIMLPDHK_OFFSET))(this, CDKCJAKODPN);
	}
};
