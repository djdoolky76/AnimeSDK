#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraFovNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define JDEJOBMALOI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13CABA80)
#define JDEJOBMALOI_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x13CAC170)
#define JDEJOBMALOI_HCPHMLDOMPK_OFFSET UNITYSDK_OFFSET(0x13CAC200)
#define JDEJOBMALOI_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13CABC00)
#define JDEJOBMALOI_MOEJJHNFLFP_OFFSET UNITYSDK_OFFSET(0x13CABFC0)
#define JDEJOBMALOI_NEPDCJMCGMM_OFFSET UNITYSDK_OFFSET(0x13CAC150)
#define JDEJOBMALOI_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x13CAC070)
#define JDEJOBMALOI__CTOR_OFFSET UNITYSDK_OFFSET(0x13CABFB0)

inline static constexpr unsigned int JDEJOBMALOI_TypeDefinitionIndex = 56729;

class JDEJOBMALOI : public ::LLKOFEPPBNJ
{
public:
	::Cinemachine::CinemachineVirtualCamera* AIODHOBAJMH; // 0x28
	::MoleMole::Config::ConfigLoginCameraFovNode* OKDACNLPNAD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEJOBMALOI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + JDEJOBMALOI_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEJOBMALOI_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void MOEJJHNFLFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEJOBMALOI_MOEJJHNFLFP_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + JDEJOBMALOI_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Single NEPDCJMCGMM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEJOBMALOI_NEPDCJMCGMM_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEJOBMALOI_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void HCPHMLDOMPK(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDEJOBMALOI_HCPHMLDOMPK_OFFSET))(this, HFMHOELKCAJ);
	}
};
