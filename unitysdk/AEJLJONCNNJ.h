#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPICGFIMELA.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/MoleMole/Cameras/FirstPersonCameraDefaultSetting.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }

#define AEJLJONCNNJ_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x17DD0830)
#define AEJLJONCNNJ_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x17DCF650)
#define AEJLJONCNNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DCF6E0)
#define AEJLJONCNNJ_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x17DCF790)
#define AEJLJONCNNJ_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x17DD04D0)
#define AEJLJONCNNJ_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x17DD0370)
#define AEJLJONCNNJ_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x17DD0450)
#define AEJLJONCNNJ_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x17DD05C0)
#define AEJLJONCNNJ_MFIIKEGADCB_OFFSET UNITYSDK_OFFSET(0x17DD04C0)
#define AEJLJONCNNJ_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x17DD0D40)
#define AEJLJONCNNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCF4E0)

inline static constexpr unsigned int AEJLJONCNNJ_TypeDefinitionIndex = 76679;

class AEJLJONCNNJ : public ::System::Object
{
public:
	::CPICGFIMELA JDEIDICJNOK; // 0x10
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0xA0
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0xA8
	::System::Boolean LPAHKDLPPPI; // 0xB0
	::System::Byte _padding0[0x3];
	::MoleMole::Cameras::FirstPersonCameraDefaultSetting JOEEPDODPOO; // 0xB4
	::System::Nullable_1<::Foundation::Unreal::Interval_1<::System::Single>> APMLFLKCFFH; // 0xBC

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Cameras::FirstPersonCameraConfig*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Cameras::FirstPersonCameraConfig*&))((::PBYTE)hIl2Cpp + AEJLJONCNNJ__CTOR_OFFSET))(this, KECKGDFIALJ, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_DISPOSE_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::System::UInt32 BKLGNCBNEGM, ::MoleMole::Cameras::FirstPersonCameraConfig*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::System::UInt32, ::MoleMole::Cameras::FirstPersonCameraConfig*&))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, BKLGNCBNEGM, DFMKILICPFB);
	}

	::UnityEngine::Quaternion INMGLPLEEIK()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_INMGLPLEEIK_OFFSET))(this);
	}

	::System::Boolean JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Cameras::FirstPersonCameraConfig* DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Cameras::FirstPersonCameraConfig*))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_CFHBPGGKCFN_OFFSET))(this, KECKGDFIALJ, DFMKILICPFB);
	}

	::System::Boolean MFIIKEGADCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_MFIIKEGADCB_OFFSET))(this);
	}

	::System::Boolean FFCIOICFNFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_FFCIOICFNFN_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::System::UInt32 BKLGNCBNEGM, ::MoleMole::Cameras::FirstPersonCameraConfig* EJJNGFCGNAK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Cameras::FirstPersonCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_JLFNAHONPGB_OFFSET))(this, BKLGNCBNEGM, EJJNGFCGNAK, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Cameras::FirstPersonCameraConfig*& DFMKILICPFB)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Cameras::FirstPersonCameraConfig*&))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_ANJAOOMDFLA_OFFSET))(this, KECKGDFIALJ, DFMKILICPFB);
	}

	::System::Boolean MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
	}
};
