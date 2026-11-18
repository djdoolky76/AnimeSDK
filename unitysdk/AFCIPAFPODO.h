#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraMoveToPlayerNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define AFCIPAFPODO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1434E170)
#define AFCIPAFPODO_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x1434EDD0)
#define AFCIPAFPODO_HCPHMLDOMPK_OFFSET UNITYSDK_OFFSET(0x1434F010)
#define AFCIPAFPODO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1434E2F0)
#define AFCIPAFPODO_MOEJJHNFLFP_OFFSET UNITYSDK_OFFSET(0x1434EF60)
#define AFCIPAFPODO_NEPDCJMCGMM_OFFSET UNITYSDK_OFFSET(0x1434EF40)
#define AFCIPAFPODO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1434EE60)
#define AFCIPAFPODO__CTOR_OFFSET UNITYSDK_OFFSET(0x1434EDC0)

inline static constexpr unsigned int AFCIPAFPODO_TypeDefinitionIndex = 69206;

class AFCIPAFPODO : public ::LLKOFEPPBNJ
{
public:
	::Cinemachine::CinemachineVirtualCamera* AIODHOBAJMH; // 0x28
	::MoleMole::Config::ConfigLoginCameraMoveToPlayerNode* OKDACNLPNAD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCIPAFPODO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + AFCIPAFPODO_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCIPAFPODO_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCIPAFPODO_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + AFCIPAFPODO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Single NEPDCJMCGMM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCIPAFPODO_NEPDCJMCGMM_OFFSET))(this);
	}

	::System::Void MOEJJHNFLFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCIPAFPODO_MOEJJHNFLFP_OFFSET))(this);
	}

	::System::Void HCPHMLDOMPK(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFCIPAFPODO_HCPHMLDOMPK_OFFSET))(this, HFMHOELKCAJ);
	}
};
