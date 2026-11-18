#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHJCFOHDKDM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define PGLHDHNFKIP_CBIOPMPFPAF_OFFSET UNITYSDK_OFFSET(0x1A7F0890)
#define PGLHDHNFKIP_CDIFHCKCOAF_OFFSET UNITYSDK_OFFSET(0x1A7F0030)
#define PGLHDHNFKIP_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x1A7EF8A0)
#define PGLHDHNFKIP_DIHFBKDGLBP_OFFSET UNITYSDK_OFFSET(0x1A7F03C0)
#define PGLHDHNFKIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7EF930)
#define PGLHDHNFKIP_IEALMMKJOIN_OFFSET UNITYSDK_OFFSET(0x1A7F06F0)
#define PGLHDHNFKIP_IOHPDJBMBMO_OFFSET UNITYSDK_OFFSET(0x1A7EF9D0)
#define PGLHDHNFKIP_JBDMDOLKEKJ_OFFSET UNITYSDK_OFFSET(0x1A7F0BC0)
#define PGLHDHNFKIP_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x1A7F0A30)
#define PGLHDHNFKIP_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x1A7EFB60)
#define PGLHDHNFKIP_NAAABNMPBIJ_OFFSET UNITYSDK_OFFSET(0x1A7F0D50)
#define PGLHDHNFKIP_NIPHKEEHFFL_OFFSET UNITYSDK_OFFSET(0x1A7F0550)
#define PGLHDHNFKIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EF750)

inline static constexpr unsigned int PGLHDHNFKIP_TypeDefinitionIndex = 80743;

class PGLHDHNFKIP : public ::System::Object
{
public:
	::EHJCFOHDKDM JDEIDICJNOK; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x78
	::System::Boolean LPAHKDLPPPI; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::TacticalCombatCameraConfig* DFMKILICPFB, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>* EBJOFMCAMCM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP__CTOR_OFFSET))(this, DFMKILICPFB, EBJOFMCAMCM);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DISPOSE_OFFSET))(this);
	}

	::System::Boolean IOHPDJBMBMO(::System::Single& DNDJCAAFEML)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_IOHPDJBMBMO_OFFSET))(this, DNDJCAAFEML);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Cameras::TacticalCombatCameraConfig* DFMKILICPFB, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>* EBJOFMCAMCM, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& EHDFDPBFINE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_JLFNAHONPGB_OFFSET))(this, DFMKILICPFB, EBJOFMCAMCM, INBNCFGMKCL, EHDFDPBFINE);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* CDIFHCKCOAF()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_CDIFHCKCOAF_OFFSET))(this);
	}

	::System::Boolean DIHFBKDGLBP(::System::Single& IEPPOCDAMDC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DIHFBKDGLBP_OFFSET))(this, IEPPOCDAMDC);
	}

	::System::Void NIPHKEEHFFL(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_NIPHKEEHFFL_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void IEALMMKJOIN(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_IEALMMKJOIN_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void CBIOPMPFPAF(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_CBIOPMPFPAF_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Boolean JGHAGPDLDMF(::System::Single& NPHOPECPHLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::TacticalCombatCameraConfig* DFMKILICPFB, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>* EBJOFMCAMCM)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB, EBJOFMCAMCM);
	}

	::System::Boolean JBDMDOLKEKJ(::System::Single& PKPJCHOKEFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_JBDMDOLKEKJ_OFFSET))(this, PKPJCHOKEFF);
	}

	::PipelineCamera::ScopedDelegateHandle NAAABNMPBIJ(::MoleMole::Cameras::TacticalCombatCameraConfig* DFMKILICPFB, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>* EBJOFMCAMCM)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_NAAABNMPBIJ_OFFSET))(this, DFMKILICPFB, EBJOFMCAMCM);
	}
};
