#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class EKNPFOKFPNG;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigPlayFilterPluginSpecialEffect; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define DHKNIPGINFD_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x12081670)
#define DHKNIPGINFD_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x12081430)
#define DHKNIPGINFD_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x120814A0)
#define DHKNIPGINFD__CTOR_OFFSET UNITYSDK_OFFSET(0x12081610)

inline static constexpr unsigned int DHKNIPGINFD_TypeDefinitionIndex = 63506;

class DHKNIPGINFD
{
public:
	::EKNPFOKFPNG* PHGBAKFADKA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKNIPGINFD__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + DHKNIPGINFD_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKNIPGINFD_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKNIPGINFD_EEOOAGEDKLM_OFFSET))(this);
	}
};
