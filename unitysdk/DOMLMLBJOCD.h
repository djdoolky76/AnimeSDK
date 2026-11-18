#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraRotateNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define DOMLMLBJOCD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFDCC180)
#define DOMLMLBJOCD_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0xFDCC600)
#define DOMLMLBJOCD_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0xFDCC310)
#define DOMLMLBJOCD_ODAOGLLIFJA_OFFSET UNITYSDK_OFFSET(0xFDCC690)
#define DOMLMLBJOCD_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0xFDCC740)
#define DOMLMLBJOCD__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCC5F0)

inline static constexpr unsigned int DOMLMLBJOCD_TypeDefinitionIndex = 89720;

class DOMLMLBJOCD : public ::LLKOFEPPBNJ
{
public:
	::Cinemachine::CinemachineVirtualCamera* AIODHOBAJMH; // 0x28
	::MoleMole::Config::ConfigLoginCameraRotateNode* OKDACNLPNAD; // 0x30
	::UnityEngine::Vector3 FPNKBIPMBCA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMLMLBJOCD__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + DOMLMLBJOCD_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMLMLBJOCD_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMLMLBJOCD_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void ODAOGLLIFJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMLMLBJOCD_ODAOGLLIFJA_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + DOMLMLBJOCD_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
