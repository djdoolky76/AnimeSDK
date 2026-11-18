#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define IJHMLBFPDLK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16A9FDB0)
#define IJHMLBFPDLK_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x16AA00E0)
#define IJHMLBFPDLK_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x16A9FEE0)
#define IJHMLBFPDLK_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x16AA0170)
#define IJHMLBFPDLK__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA0090)

inline static constexpr unsigned int IJHMLBFPDLK_TypeDefinitionIndex = 51939;

class IJHMLBFPDLK : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::System::Int32 MLNKCNJEOMI; // 0x48
	::System::Boolean HEMCAIEKCMC; // 0x4C
	::System::Boolean BKONNKBALGH; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHMLBFPDLK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + IJHMLBFPDLK_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHMLBFPDLK_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHMLBFPDLK_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + IJHMLBFPDLK_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
