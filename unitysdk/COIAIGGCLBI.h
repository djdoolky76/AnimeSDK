#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigShowBlessItemTipsNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define COIAIGGCLBI_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x15A1F6A0)
#define COIAIGGCLBI_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x15A1F170)
#define COIAIGGCLBI_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15A1F1E0)
#define COIAIGGCLBI__CTOR_OFFSET UNITYSDK_OFFSET(0x15A1F640)

inline static constexpr unsigned int COIAIGGCLBI_TypeDefinitionIndex = 82893;

class COIAIGGCLBI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIAIGGCLBI__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigShowBlessItemTipsNode* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShowBlessItemTipsNode*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + COIAIGGCLBI_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIAIGGCLBI_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIAIGGCLBI_EEOOAGEDKLM_OFFSET))(this);
	}
};
