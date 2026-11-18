#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardElevatorDownSplash; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define GLFGMDLGDEO_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x149E06E0)
#define GLFGMDLGDEO_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x149E0640)
#define GLFGMDLGDEO_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x149E0210)
#define GLFGMDLGDEO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x149E0290)
#define GLFGMDLGDEO_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x149E0510)
#define GLFGMDLGDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x149E05E0)

inline static constexpr unsigned int GLFGMDLGDEO_TypeDefinitionIndex = 91571;

class GLFGMDLGDEO
{
public:
	::MoleMole::Config::ConfigChessboardElevatorDownSplash* CEJENBBHBBG; // 0x40
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x48
	::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMDLGDEO__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigChessboardElevatorDownSplash* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardElevatorDownSplash*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_EEOOAGEDKLM_OFFSET))(this);
	}
};
