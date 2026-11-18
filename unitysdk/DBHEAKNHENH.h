#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCBHCBPFEB.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }

#define DBHEAKNHENH_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x12BA2950)
#define DBHEAKNHENH_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x12BA22F0)
#define DBHEAKNHENH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BA2410)
#define DBHEAKNHENH_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x12BA3400)
#define DBHEAKNHENH_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x12BA24C0)
#define DBHEAKNHENH_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x12BA37F0)
#define DBHEAKNHENH_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x12BA3680)
#define DBHEAKNHENH_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x12BA26A0)
#define DBHEAKNHENH_MFIIKEGADCB_OFFSET UNITYSDK_OFFSET(0x12BA3670)
#define DBHEAKNHENH_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x12BA30A0)
#define DBHEAKNHENH_OLLLKAPKHOM_OFFSET UNITYSDK_OFFSET(0x12BA2EC0)
#define DBHEAKNHENH__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA20D0)

inline static constexpr unsigned int DBHEAKNHENH_TypeDefinitionIndex = 56090;

class DBHEAKNHENH : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x18
	::EOCBHCBPFEB JDEIDICJNOK; // 0x20
	::System::Boolean LPAHKDLPPPI; // 0xA0

	::System::Void _ctor(::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Quaternion BFBELMDIAHI, ::MoleMole::Cameras::TelescopeCameraConfig* DFMKILICPFB, ::System::Single HKHIMAKFCGD, ::System::Single BKCDMONKCHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DBHEAKNHENH__CTOR_OFFSET))(this, LHDHLAEPFBH, BFBELMDIAHI, DFMKILICPFB, HKHIMAKFCGD, BKCDMONKCHF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_DISPOSE_OFFSET))(this);
	}

	::System::Boolean FFCIOICFNFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_FFCIOICFNFN_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Single HKHIMAKFCGD, ::System::Single BKCDMONKCHF, ::MoleMole::Cameras::TelescopeCameraConfig* DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::MoleMole::Cameras::TelescopeCameraConfig*))((::PBYTE)hIl2Cpp + DBHEAKNHENH_CFHBPGGKCFN_OFFSET))(this, LHDHLAEPFBH, BFBELMDIAHI, HKHIMAKFCGD, BKCDMONKCHF, DFMKILICPFB);
	}

	::System::Void JLFNAHONPGB(::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Quaternion BFBELMDIAHI, ::MoleMole::Cameras::TelescopeCameraConfig* EJJNGFCGNAK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + DBHEAKNHENH_JLFNAHONPGB_OFFSET))(this, LHDHLAEPFBH, BFBELMDIAHI, EJJNGFCGNAK, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Single HKHIMAKFCGD, ::System::Single BKCDMONKCHF, ::MoleMole::Cameras::TelescopeCameraConfig* DFMKILICPFB)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::MoleMole::Cameras::TelescopeCameraConfig*))((::PBYTE)hIl2Cpp + DBHEAKNHENH_ANJAOOMDFLA_OFFSET))(this, LHDHLAEPFBH, BFBELMDIAHI, HKHIMAKFCGD, BKCDMONKCHF, DFMKILICPFB);
	}

	::PipelineCamera::WorldBasicCameraData OLLLKAPKHOM(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> HLFFCMIFFIB)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + DBHEAKNHENH_OLLLKAPKHOM_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Boolean MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC, ::System::Single EBJINDLMDNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DBHEAKNHENH_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC, EBJINDLMDNL);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Quaternion BFBELMDIAHI, ::MoleMole::Cameras::TelescopeCameraConfig*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*&))((::PBYTE)hIl2Cpp + DBHEAKNHENH_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, LHDHLAEPFBH, BFBELMDIAHI, DFMKILICPFB);
	}

	::System::Boolean MFIIKEGADCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_MFIIKEGADCB_OFFSET))(this);
	}

	::System::Boolean JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBHEAKNHENH_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::UnityEngine::Quaternion INMGLPLEEIK()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_INMGLPLEEIK_OFFSET))(this);
	}
};
