#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigOpenLevelResultNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define BNPIBPDIIAN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14EFF630)
#define BNPIBPDIIAN_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x14EFFB80)
#define BNPIBPDIIAN_FGLCLKNHCIP_OFFSET UNITYSDK_OFFSET(0x14EFFAF0)
#define BNPIBPDIIAN_KOHABOKICHK_OFFSET UNITYSDK_OFFSET(0x14EFF620)
#define BNPIBPDIIAN_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x14EFF780)
#define BNPIBPDIIAN_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14EFFC10)
#define BNPIBPDIIAN__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFFB70)

inline static constexpr unsigned int BNPIBPDIIAN_TypeDefinitionIndex = 84955;

class BNPIBPDIIAN : public ::LLKOFEPPBNJ
{
public:
	::MoleMole::Config::ConfigOpenLevelResultNode* GELPLHLJCDL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIBPDIIAN__CTOR_OFFSET))(this);
	}

	::System::Boolean KOHABOKICHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_KOHABOKICHK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void FGLCLKNHCIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_FGLCLKNHCIP_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
