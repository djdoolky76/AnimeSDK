#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowManualAccelerate; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define KNJNMKHNDCB_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x18646850)
#define KNJNMKHNDCB_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x18646690)
#define KNJNMKHNDCB_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x18646720)
#define KNJNMKHNDCB__CTOR_OFFSET UNITYSDK_OFFSET(0x186467F0)

inline static constexpr unsigned int KNJNMKHNDCB_TypeDefinitionIndex = 59816;

class KNJNMKHNDCB
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::System::Boolean BAAICNAPNLL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJNMKHNDCB__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigHollowManualAccelerate* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowManualAccelerate*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + KNJNMKHNDCB_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJNMKHNDCB_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJNMKHNDCB_EEOOAGEDKLM_OFFSET))(this);
	}
};
