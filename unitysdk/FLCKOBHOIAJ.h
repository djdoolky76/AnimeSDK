#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowJoystickBlock; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define FLCKOBHOIAJ_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0xBB4B2D0)
#define FLCKOBHOIAJ_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0xBB4B130)
#define FLCKOBHOIAJ_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0xBB4B1C0)
#define FLCKOBHOIAJ__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4B270)

inline static constexpr unsigned int FLCKOBHOIAJ_TypeDefinitionIndex = 92527;

class FLCKOBHOIAJ
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::System::Boolean IBCPOEAELBO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCKOBHOIAJ__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigHollowJoystickBlock* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowJoystickBlock*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + FLCKOBHOIAJ_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCKOBHOIAJ_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCKOBHOIAJ_EEOOAGEDKLM_OFFSET))(this);
	}
};
