#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJKBAMNFLCA;
class JJPDGONFBFB;
class OAEFGCLEHHO;
namespace System { class Action; }

#define BJKBAMNFLCA_NIELPJCCPPI_LCNCPNFFMNO_OFFSET UNITYSDK_OFFSET(0x128ACE10)
#define BJKBAMNFLCA_NIELPJCCPPI__CTOR_OFFSET UNITYSDK_OFFSET(0x128ACE00)

inline static constexpr unsigned int BJKBAMNFLCA_NIELPJCCPPI_TypeDefinitionIndex = 41565;

class BJKBAMNFLCA_NIELPJCCPPI : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10
	::BJKBAMNFLCA* KLHPEBKNIFB; // 0x18
	::JJPDGONFBFB* EDPBDKEBEAJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_NIELPJCCPPI__CTOR_OFFSET))(this);
	}

	::System::Void LCNCPNFFMNO(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_NIELPJCCPPI_LCNCPNFFMNO_OFFSET))(this, NAPFALLANDL);
	}
};
