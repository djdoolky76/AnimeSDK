#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraMoveNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define OBGEMMJLMMK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14F5EF50)
#define OBGEMMJLMMK_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x14F5F3D0)
#define OBGEMMJLMMK_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x14F5F0E0)
#define OBGEMMJLMMK_ODAOGLLIFJA_OFFSET UNITYSDK_OFFSET(0x14F5F460)
#define OBGEMMJLMMK_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14F5F510)
#define OBGEMMJLMMK__CTOR_OFFSET UNITYSDK_OFFSET(0x14F5F3C0)

inline static constexpr unsigned int OBGEMMJLMMK_TypeDefinitionIndex = 52856;

class OBGEMMJLMMK : public ::LLKOFEPPBNJ
{
public:
	::MoleMole::Config::ConfigLoginCameraMoveNode* OKDACNLPNAD; // 0x28
	::Cinemachine::CinemachineVirtualCamera* AIODHOBAJMH; // 0x30
	::UnityEngine::Vector3 FCNPOKNKMOD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGEMMJLMMK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + OBGEMMJLMMK_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGEMMJLMMK_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGEMMJLMMK_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void ODAOGLLIFJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGEMMJLMMK_ODAOGLLIFJA_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + OBGEMMJLMMK_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
