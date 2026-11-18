#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENFEFCHLBFC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1724CEF0)
#define ENFEFCHLBFC_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x1724D4D0)
#define ENFEFCHLBFC_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1724D050)
#define ENFEFCHLBFC_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1724D560)
#define ENFEFCHLBFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1724D480)

inline static constexpr unsigned int ENFEFCHLBFC_TypeDefinitionIndex = 89315;

class ENFEFCHLBFC : public ::MDGLNFGCBOJ
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* CNHMILMKNOH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFEFCHLBFC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + ENFEFCHLBFC_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFEFCHLBFC_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFEFCHLBFC_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + ENFEFCHLBFC_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
