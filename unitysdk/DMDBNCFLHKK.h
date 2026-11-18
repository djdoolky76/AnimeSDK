#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessPieceEnterBattleBroadcast; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define DMDBNCFLHKK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x149BC610)
#define DMDBNCFLHKK_CKIMAALOBMF_OFFSET UNITYSDK_OFFSET(0x149BCE80)
#define DMDBNCFLHKK_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x149BCF30)
#define DMDBNCFLHKK_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x149BC770)
#define DMDBNCFLHKK_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x149BCE70)
#define DMDBNCFLHKK__CTOR_OFFSET UNITYSDK_OFFSET(0x149BCE20)

inline static constexpr unsigned int DMDBNCFLHKK_TypeDefinitionIndex = 72989;

class DMDBNCFLHKK : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::MoleMole::Config::ConfigChessPieceEnterBattleBroadcast* CEJENBBHBBG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBNCFLHKK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + DMDBNCFLHKK_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBNCFLHKK_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + DMDBNCFLHKK_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void CKIMAALOBMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBNCFLHKK_CKIMAALOBMF_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBNCFLHKK_EEOOAGEDKLM_OFFSET))(this);
	}
};
