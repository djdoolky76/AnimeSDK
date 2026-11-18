#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
class PNJDGHBEMLK;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardModifyFloorSplash; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define DENAODFKBCN_BPEHDHNOKBI_OFFSET UNITYSDK_OFFSET(0x1206A210)
#define DENAODFKBCN_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x1206A180)
#define DENAODFKBCN_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x12069B10)
#define DENAODFKBCN_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x12069B90)
#define DENAODFKBCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1206A120)

inline static constexpr unsigned int DENAODFKBCN_TypeDefinitionIndex = 45066;

class DENAODFKBCN
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::MoleMole::Config::ConfigChessboardModifyFloorSplash* CEJENBBHBBG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENAODFKBCN__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigChessboardModifyFloorSplash* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardModifyFloorSplash*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + DENAODFKBCN_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENAODFKBCN_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENAODFKBCN_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Boolean BPEHDHNOKBI(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + DENAODFKBCN_BPEHDHNOKBI_OFFSET))(this, CDKCJAKODPN);
	}
};
