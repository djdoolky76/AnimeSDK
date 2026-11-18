#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigCurveCtrlBaseNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace UnityEngine { class AnimationCurve; }

#define EPAGLIDMHLO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14185F30)
#define EPAGLIDMHLO_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x14186780)
#define EPAGLIDMHLO_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x141866F0)
#define EPAGLIDMHLO_IEOFMNBMMMC_OFFSET UNITYSDK_OFFSET(0x14186360)
#define EPAGLIDMHLO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x14186090)
#define EPAGLIDMHLO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x141863E0)
#define EPAGLIDMHLO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14186610)
#define EPAGLIDMHLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14186600)

inline static constexpr unsigned int EPAGLIDMHLO_TypeDefinitionIndex = 41255;

class EPAGLIDMHLO : public ::LLKOFEPPBNJ
{
public:
	::UnityEngine::AnimationCurve* DLMCBOCAGFE; // 0x28
	::MoleMole::Config::ConfigCurveCtrlBaseNode* GELPLHLJCDL; // 0x30
	::System::Single GPDCBHEPDGL; // 0x38
	::System::Single KKJKPJEGKJC; // 0x3C
	::System::Single OKPMPFBDALB; // 0x40
	::System::Single NHKNILFDKGG; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAGLIDMHLO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + EPAGLIDMHLO_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAGLIDMHLO_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void IEOFMNBMMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAGLIDMHLO_IEOFMNBMMMC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPAGLIDMHLO_OKJCHFGIKBH_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + EPAGLIDMHLO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAGLIDMHLO_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPAGLIDMHLO_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}
};
