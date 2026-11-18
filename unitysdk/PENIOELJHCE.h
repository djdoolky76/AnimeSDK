#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardCameraMoveNode_ChessboardCameraMoveType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define PENIOELJHCE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13A8F580)
#define PENIOELJHCE_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x13A91A60)
#define PENIOELJHCE_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13A8F7F0)
#define PENIOELJHCE_MEHEMNMBNDH_OFFSET UNITYSDK_OFFSET(0x13A8F7B0)
#define PENIOELJHCE_NMCGLMJENHI_OFFSET UNITYSDK_OFFSET(0x13A91B00)
#define PENIOELJHCE_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x13A91AF0)
#define PENIOELJHCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A91A10)

inline static constexpr unsigned int PENIOELJHCE_TypeDefinitionIndex = 49071;

class PENIOELJHCE : public ::MDGLNFGCBOJ
{
public:
	::System::String* LAJKILNGBGM; // 0x40
	::System::String* ADCMMBOBKHI; // 0x48
	::UnityEngine::AnimationCurve* ONOMKICCHAO; // 0x50
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x58
	::System::Boolean HHCCEEDHEHD; // 0x60
	::System::Boolean EBCMJDELKNJ; // 0x61
	::System::Boolean AHKMGDBBIAD; // 0x62
	::System::Boolean DFBJEJMDOHF; // 0x63
	::UnityEngine::Vector3 DAHKENHONKK; // 0x64
	::MoleMole::Vector2Int LFDOOBJFGEJ; // 0x70
	::System::Single MEBIBCIDLAJ; // 0x78
	::MoleMole::Config::ConfigSetSection_Order EOIMEOJIGOH; // 0x7C
	::MoleMole::Config::ConfigChessboardCameraMoveNode_ChessboardCameraMoveType OPPDDDCJHAI; // 0x80
	::UnityEngine::Vector3 BKIMGDDLFNI; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENIOELJHCE__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + PENIOELJHCE_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Boolean MEHEMNMBNDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PENIOELJHCE_MEHEMNMBNDH_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENIOELJHCE_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENIOELJHCE_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + PENIOELJHCE_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Boolean NMCGLMJENHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PENIOELJHCE_NMCGLMJENHI_OFFSET))(this);
	}
};
