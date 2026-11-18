#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define FACPGJOOENL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11CCC7A0)
#define FACPGJOOENL_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11CCCFE0)
#define FACPGJOOENL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11CCCB50)
#define FACPGJOOENL_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x11CCD080)
#define FACPGJOOENL__CTOR_OFFSET UNITYSDK_OFFSET(0x11CCCFD0)

inline static constexpr unsigned int FACPGJOOENL_TypeDefinitionIndex = 48508;

class FACPGJOOENL : public ::LLKOFEPPBNJ
{
public:
	::UnityEngine::GameObject* FIKMKINCPCC; // 0x28
	::UnityEngine::AnimationCurve* NHHMOALNOPL; // 0x30
	::System::Single AGGPLLFCANG; // 0x38
	::System::Single HKPPBAGFPDM; // 0x3C
	::System::Single KKJKPJEGKJC; // 0x40
	::System::Single GPDCBHEPDGL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACPGJOOENL__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + FACPGJOOENL_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void OKJCHFGIKBH(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FACPGJOOENL_OKJCHFGIKBH_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FACPGJOOENL_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + FACPGJOOENL_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
