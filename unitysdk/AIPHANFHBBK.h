#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPKLLKKBMDA.h"
#include "unitysdk/PDIFFNFEKKD.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardTimeScaleNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define AIPHANFHBBK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16FF1190)
#define AIPHANFHBBK_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x16FF1B20)
#define AIPHANFHBBK_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x16FF1BD0)
#define AIPHANFHBBK_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x16FF1C60)
#define AIPHANFHBBK_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x16FF12F0)
#define AIPHANFHBBK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x16FF1A50)
#define AIPHANFHBBK_NOHGJMFNJLJ_OFFSET UNITYSDK_OFFSET(0x16FF17B0)
#define AIPHANFHBBK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16FF15C0)
#define AIPHANFHBBK_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x16FF1BC0)
#define AIPHANFHBBK__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF1AD0)

inline static constexpr unsigned int AIPHANFHBBK_TypeDefinitionIndex = 49520;

class AIPHANFHBBK : public ::KPKLLKKBMDA
{
public:
	::MoleMole::Config::ConfigChessboardTimeScaleNode* CEJENBBHBBG; // 0x40
	::PDIFFNFEKKD PFIHHOACHAB; // 0x48
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x50
	::System::Single KGPFONAKLMA; // 0x58
	::System::Single LKHBIBEALAB; // 0x5C
	::System::Single MIMCMAKGELI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHANFHBBK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + AIPHANFHBBK_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHANFHBBK_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIPHANFHBBK_OKJCHFGIKBH_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHANFHBBK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void NOHGJMFNJLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHANFHBBK_NOHGJMFNJLJ_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIPHANFHBBK_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + AIPHANFHBBK_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHANFHBBK_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHANFHBBK_GPOHLEFFNHE_OFFSET))(this);
	}
};
