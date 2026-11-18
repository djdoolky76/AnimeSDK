#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISwitchTeamBattleLevelRowWidgetController_Data; }

#define IOHDPFDAFFA_CMOCKNBHDBK_JDBCAGPMOPN_OFFSET UNITYSDK_OFFSET(0x197E2F60)
#define IOHDPFDAFFA_CMOCKNBHDBK__CTOR_OFFSET UNITYSDK_OFFSET(0x197E2F50)

inline static constexpr unsigned int IOHDPFDAFFA_CMOCKNBHDBK_TypeDefinitionIndex = 58697;

class IOHDPFDAFFA_CMOCKNBHDBK : public ::System::Object
{
public:
	::System::Int32 INEPJABHIIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHDPFDAFFA_CMOCKNBHDBK__CTOR_OFFSET))(this);
	}

	::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data* JDBCAGPMOPN(::System::Int32 LDMLDJEOJHE)
	{
		return ((::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IOHDPFDAFFA_CMOCKNBHDBK_JDBCAGPMOPN_OFFSET))(this, LDMLDJEOJHE);
	}
};
