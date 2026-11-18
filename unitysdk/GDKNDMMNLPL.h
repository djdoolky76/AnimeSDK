#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/OMDJLKPMLMM.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDKNDMMNLPL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xBB82CD0)
#define GDKNDMMNLPL_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0xBB83310)
#define GDKNDMMNLPL_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0xBB82E40)
#define GDKNDMMNLPL_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0xBB83300)
#define GDKNDMMNLPL__CTOR_OFFSET UNITYSDK_OFFSET(0xBB832B0)

inline static constexpr unsigned int GDKNDMMNLPL_TypeDefinitionIndex = 47693;

class GDKNDMMNLPL : public ::MDGLNFGCBOJ
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* CNHMILMKNOH; // 0x40
	::OMDJLKPMLMM KLGEGIMPLMD; // 0x48
	::ProtoScript::NodeState NLLANHEKFLN; // 0x4C
	::ProtoScript::NodeVisible DIHLAILMLGB; // 0x50
	::System::Int32 DCFCJHBIOJB; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKNDMMNLPL__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + GDKNDMMNLPL_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKNDMMNLPL_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + GDKNDMMNLPL_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKNDMMNLPL_EEOOAGEDKLM_OFFSET))(this);
	}
};
