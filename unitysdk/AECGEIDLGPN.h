#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigPlayAnimationCommonNodeV2; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define AECGEIDLGPN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16D63850)
#define AECGEIDLGPN_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x16D63C80)
#define AECGEIDLGPN_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x16D639A0)
#define AECGEIDLGPN_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x16D63D10)
#define AECGEIDLGPN__CTOR_OFFSET UNITYSDK_OFFSET(0x16D63C70)

inline static constexpr unsigned int AECGEIDLGPN_TypeDefinitionIndex = 80934;

class AECGEIDLGPN : public ::LLKOFEPPBNJ
{
public:
	::MoleMole::Config::ConfigPlayAnimationCommonNodeV2* GELPLHLJCDL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGEIDLGPN__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + AECGEIDLGPN_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGEIDLGPN_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGEIDLGPN_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + AECGEIDLGPN_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
