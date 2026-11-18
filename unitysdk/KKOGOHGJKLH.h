#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigCGCustomGlobalAnimationNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace Plugins::TA { class CGCustomGlobalAnimation; }
namespace UnityEngine { class AnimationCurve; }

#define KKOGOHGJKLH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xD3FF380)
#define KKOGOHGJKLH_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xD3FFC10)
#define KKOGOHGJKLH_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0xD3FFB80)
#define KKOGOHGJKLH_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0xD3FF4D0)
#define KKOGOHGJKLH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xD3FFA10)
#define KKOGOHGJKLH_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0xD3FFCB0)
#define KKOGOHGJKLH__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FFB70)

inline static constexpr unsigned int KKOGOHGJKLH_TypeDefinitionIndex = 51736;

class KKOGOHGJKLH : public ::LLKOFEPPBNJ
{
public:
	::MoleMole::Config::ConfigCGCustomGlobalAnimationNode* GELPLHLJCDL; // 0x28
	::Plugins::TA::CGCustomGlobalAnimation* CKDJNDOIECF; // 0x30
	::UnityEngine::AnimationCurve* DLMCBOCAGFE; // 0x38
	::System::Single KKJKPJEGKJC; // 0x40
	::System::Single GPDCBHEPDGL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOGOHGJKLH__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + KKOGOHGJKLH_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOGOHGJKLH_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKOGOHGJKLH_OKJCHFGIKBH_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOGOHGJKLH_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKOGOHGJKLH_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + KKOGOHGJKLH_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
