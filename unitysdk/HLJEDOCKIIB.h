#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define HLJEDOCKIIB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15DC3D50)
#define HLJEDOCKIIB_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x15DC3F50)
#define HLJEDOCKIIB_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15DC3E40)
#define HLJEDOCKIIB_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x15DC3FE0)
#define HLJEDOCKIIB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC3F00)

inline static constexpr unsigned int HLJEDOCKIIB_TypeDefinitionIndex = 42747;

class HLJEDOCKIIB : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJEDOCKIIB__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + HLJEDOCKIIB_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJEDOCKIIB_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJEDOCKIIB_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + HLJEDOCKIIB_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
