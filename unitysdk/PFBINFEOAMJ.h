#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardPlayStartPerform; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define PFBINFEOAMJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14B98CB0)
#define PFBINFEOAMJ_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x14B99150)
#define PFBINFEOAMJ_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x14B98E10)
#define PFBINFEOAMJ_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14B991E0)
#define PFBINFEOAMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14B99100)

inline static constexpr unsigned int PFBINFEOAMJ_TypeDefinitionIndex = 78838;

class PFBINFEOAMJ : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::MoleMole::Config::ConfigChessboardPlayStartPerform* CEJENBBHBBG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBINFEOAMJ__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + PFBINFEOAMJ_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBINFEOAMJ_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBINFEOAMJ_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + PFBINFEOAMJ_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
