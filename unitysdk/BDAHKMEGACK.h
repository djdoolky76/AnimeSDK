#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardSlotMachine; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDAHKMEGACK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1267E950)
#define BDAHKMEGACK_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1267FA60)
#define BDAHKMEGACK_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x1267FB10)
#define BDAHKMEGACK_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1267EAB0)
#define BDAHKMEGACK_MLNCELCGFAI_OFFSET UNITYSDK_OFFSET(0x1267F180)
#define BDAHKMEGACK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1267F8E0)
#define BDAHKMEGACK_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1267FB00)
#define BDAHKMEGACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1267FA10)

inline static constexpr unsigned int BDAHKMEGACK_TypeDefinitionIndex = 91986;

class BDAHKMEGACK : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::Config::ConfigChessboardSlotMachine* CEJENBBHBBG; // 0x40
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x48
	::System::Single GPDCBHEPDGL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAHKMEGACK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BDAHKMEGACK_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAHKMEGACK_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDAHKMEGACK_OKJCHFGIKBH_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* MLNCELCGFAI(::System::Int32 FKGNDKNHAEH, ::MoleMole::HollowChessboard::HollowCell JECHFGJBEHG, ::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>* ADNFAKNPOCG, ::System::Single LNJFKBBFABK)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Single))((::PBYTE)hIl2Cpp + BDAHKMEGACK_MLNCELCGFAI_OFFSET))(this, FKGNDKNHAEH, JECHFGJBEHG, ADNFAKNPOCG, LNJFKBBFABK);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDAHKMEGACK_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BDAHKMEGACK_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAHKMEGACK_EEOOAGEDKLM_OFFSET))(this);
	}
};
