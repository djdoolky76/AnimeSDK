#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessPieceBroadcast; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define BICNOKMHMPH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xF79AC10)
#define BICNOKMHMPH_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xF79B530)
#define BICNOKMHMPH_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0xF79B5D0)
#define BICNOKMHMPH_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0xF79ADB0)
#define BICNOKMHMPH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xF79B3C0)
#define BICNOKMHMPH_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0xF79B520)
#define BICNOKMHMPH__CTOR_OFFSET UNITYSDK_OFFSET(0xF79B4D0)

inline static constexpr unsigned int BICNOKMHMPH_TypeDefinitionIndex = 86414;

class BICNOKMHMPH : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::MoleMole::Config::ConfigChessPieceBroadcast* CEJENBBHBBG; // 0x48
	::System::Single HACJFKBLODH; // 0x50
	::System::Single JJPBJCCGNDC; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICNOKMHMPH__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BICNOKMHMPH_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICNOKMHMPH_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BICNOKMHMPH_OKJCHFGIKBH_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BICNOKMHMPH_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BICNOKMHMPH_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICNOKMHMPH_EEOOAGEDKLM_OFFSET))(this);
	}
};
