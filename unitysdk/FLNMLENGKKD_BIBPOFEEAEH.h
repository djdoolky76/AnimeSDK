#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FLNMLENGKKD;
namespace System { class Action; }

#define FLNMLENGKKD_BIBPOFEEAEH_IIMFJOFCOMI_OFFSET UNITYSDK_OFFSET(0x142AA6D0)
#define FLNMLENGKKD_BIBPOFEEAEH__CTOR_OFFSET UNITYSDK_OFFSET(0x142AA6C0)

inline static constexpr unsigned int FLNMLENGKKD_BIBPOFEEAEH_TypeDefinitionIndex = 87460;

class FLNMLENGKKD_BIBPOFEEAEH : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10
	::FLNMLENGKKD* KLHPEBKNIFB; // 0x18
	::System::Int32 GEDLONCJKED; // 0x20
	::System::Int32 IBEKHOENAEJ; // 0x24
	::System::Single MDPPNMIPDMP; // 0x28
	::System::Int32 AKEGMDELDMN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMLENGKKD_BIBPOFEEAEH__CTOR_OFFSET))(this);
	}

	::System::Void IIMFJOFCOMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMLENGKKD_BIBPOFEEAEH_IIMFJOFCOMI_OFFSET))(this);
	}
};
