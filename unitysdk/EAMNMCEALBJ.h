#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigScreenEffectCtrlNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define EAMNMCEALBJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x132ADEE0)
#define EAMNMCEALBJ_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x132AE3B0)
#define EAMNMCEALBJ_HLLDGILFILP_OFFSET UNITYSDK_OFFSET(0x132AE440)
#define EAMNMCEALBJ_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x132AE030)
#define EAMNMCEALBJ_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x132AE570)
#define EAMNMCEALBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x132AE3A0)

inline static constexpr unsigned int EAMNMCEALBJ_TypeDefinitionIndex = 84283;

class EAMNMCEALBJ : public ::LLKOFEPPBNJ
{
public:
	::MoleMole::Config::ConfigScreenEffectCtrlNode* GKELJPDNGNP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMNMCEALBJ__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + EAMNMCEALBJ_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMNMCEALBJ_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMNMCEALBJ_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void HLLDGILFILP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMNMCEALBJ_HLLDGILFILP_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + EAMNMCEALBJ_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
