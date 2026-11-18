#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigChessboardPlayerOnSetDefaultNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define PNAJOFEBNHG_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x1D1F5700)
#define PNAJOFEBNHG_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x1D1F5510)
#define PNAJOFEBNHG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1D1F5580)
#define PNAJOFEBNHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F56A0)

inline static constexpr unsigned int PNAJOFEBNHG_TypeDefinitionIndex = 91906;

class PNAJOFEBNHG
{
public:
	::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode* GELPLHLJCDL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAJOFEBNHG__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + PNAJOFEBNHG_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAJOFEBNHG_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAJOFEBNHG_EEOOAGEDKLM_OFFSET))(this);
	}
};
