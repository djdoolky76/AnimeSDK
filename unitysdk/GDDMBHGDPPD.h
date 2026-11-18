#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigChessboardChessAnim; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDDMBHGDPPD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x141359B0)
#define GDDMBHGDPPD_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x141363C0)
#define GDDMBHGDPPD_EKAJGBIHMOP_OFFSET UNITYSDK_OFFSET(0x14135B90)
#define GDDMBHGDPPD_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x14135B10)
#define GDDMBHGDPPD_MEHEMNMBNDH_OFFSET UNITYSDK_OFFSET(0x14135AD0)
#define GDDMBHGDPPD_NMCGLMJENHI_OFFSET UNITYSDK_OFFSET(0x14136460)
#define GDDMBHGDPPD_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14136450)
#define GDDMBHGDPPD__CTOR_OFFSET UNITYSDK_OFFSET(0x14136340)

inline static constexpr unsigned int GDDMBHGDPPD_TypeDefinitionIndex = 79317;

class GDDMBHGDPPD : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::Config::ConfigChessboardChessAnim* CEJENBBHBBG; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* OMFBBNOKLIH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Boolean MEHEMNMBNDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_MEHEMNMBNDH_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void EKAJGBIHMOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_EKAJGBIHMOP_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Boolean NMCGLMJENHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_NMCGLMJENHI_OFFSET))(this);
	}
};
