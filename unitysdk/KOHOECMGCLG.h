#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPKLLKKBMDA.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardCalStartIndexNode_CalStartIndexType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define KOHOECMGCLG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xD410160)
#define KOHOECMGCLG_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0xD410660)
#define KOHOECMGCLG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0xD410270)
#define KOHOECMGCLG_NJIMHKBEHOF_OFFSET UNITYSDK_OFFSET(0xD4103A0)
#define KOHOECMGCLG_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0xD410650)
#define KOHOECMGCLG__CTOR_OFFSET UNITYSDK_OFFSET(0xD410600)

inline static constexpr unsigned int KOHOECMGCLG_TypeDefinitionIndex = 46804;

class KOHOECMGCLG : public ::KPKLLKKBMDA
{
public:
	::System::Int32 IKLCJPNGFMH; // 0x40
	::MoleMole::Config::ConfigChessboardCalStartIndexNode_CalStartIndexType NMLPJDHJMFG; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHOECMGCLG__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + KOHOECMGCLG_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHOECMGCLG_LCJEELHBNHG_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell NJIMHKBEHOF()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHOECMGCLG_NJIMHKBEHOF_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + KOHOECMGCLG_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHOECMGCLG_EEOOAGEDKLM_OFFSET))(this);
	}
};
