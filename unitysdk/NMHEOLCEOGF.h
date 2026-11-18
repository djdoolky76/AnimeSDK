#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define NMHEOLCEOGF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x115AAA80)
#define NMHEOLCEOGF_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x115AAED0)
#define NMHEOLCEOGF_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x115AB040)
#define NMHEOLCEOGF_KOHABOKICHK_OFFSET UNITYSDK_OFFSET(0x115AAA70)
#define NMHEOLCEOGF_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x115AABE0)
#define NMHEOLCEOGF_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x115AAE50)
#define NMHEOLCEOGF_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x115AAF60)
#define NMHEOLCEOGF__CTOR_OFFSET UNITYSDK_OFFSET(0x115AAEC0)

inline static constexpr unsigned int NMHEOLCEOGF_TypeDefinitionIndex = 84033;

class NMHEOLCEOGF : public ::LLKOFEPPBNJ
{
public:
	::MoleMole::UIBaseController* GAIPAMCKMOP; // 0x28
	::System::String* DMECHKMKHOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEOLCEOGF__CTOR_OFFSET))(this);
	}

	::System::Boolean KOHABOKICHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEOLCEOGF_KOHABOKICHK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + NMHEOLCEOGF_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEOLCEOGF_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEOLCEOGF_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEOLCEOGF_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + NMHEOLCEOGF_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEOLCEOGF_GPOHLEFFNHE_OFFSET))(this);
	}
};
