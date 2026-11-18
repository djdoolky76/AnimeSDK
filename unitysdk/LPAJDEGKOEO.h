#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace UnityEngine { class AnimationCurve; }

#define LPAJDEGKOEO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15E114C0)
#define LPAJDEGKOEO_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x15E11D30)
#define LPAJDEGKOEO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15E11650)
#define LPAJDEGKOEO_MEHEMNMBNDH_OFFSET UNITYSDK_OFFSET(0x15E11610)
#define LPAJDEGKOEO_NMCGLMJENHI_OFFSET UNITYSDK_OFFSET(0x15E11C90)
#define LPAJDEGKOEO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x15E11D20)
#define LPAJDEGKOEO__CTOR_OFFSET UNITYSDK_OFFSET(0x15E11C40)

inline static constexpr unsigned int LPAJDEGKOEO_TypeDefinitionIndex = 63801;

class LPAJDEGKOEO : public ::MDGLNFGCBOJ
{
public:
	::UnityEngine::AnimationCurve* ONOMKICCHAO; // 0x40
	::System::Boolean DFBJEJMDOHF; // 0x48
	::System::Boolean AHKMGDBBIAD; // 0x49
	::System::Byte _padding0[0x2];
	::System::Single MEBIBCIDLAJ; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAJDEGKOEO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + LPAJDEGKOEO_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Boolean MEHEMNMBNDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAJDEGKOEO_MEHEMNMBNDH_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAJDEGKOEO_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Boolean NMCGLMJENHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAJDEGKOEO_NMCGLMJENHI_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + LPAJDEGKOEO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAJDEGKOEO_EEOOAGEDKLM_OFFSET))(this);
	}
};
