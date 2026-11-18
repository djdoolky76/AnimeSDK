#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELEPDPBPFD.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CIPHODBPLDD_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x13263BF0)
#define CIPHODBPLDD_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x132636D0)
#define CIPHODBPLDD_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13264350)
#define CIPHODBPLDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13263750)
#define CIPHODBPLDD_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x13263EA0)
#define CIPHODBPLDD_JAFIADKPLDI_OFFSET UNITYSDK_OFFSET(0x13263800)
#define CIPHODBPLDD_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x132638A0)
#define CIPHODBPLDD_LOPAIJCMDFL_OFFSET UNITYSDK_OFFSET(0x13263A50)
#define CIPHODBPLDD_OLLLKAPKHOM_OFFSET UNITYSDK_OFFSET(0x13263BB0)
#define CIPHODBPLDD__CTOR_OFFSET UNITYSDK_OFFSET(0x13263590)

inline static constexpr unsigned int CIPHODBPLDD_TypeDefinitionIndex = 86488;

class CIPHODBPLDD : public ::System::Object
{
public:
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x10
	::CELEPDPBPFD JDEIDICJNOK; // 0x18
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x38
	::System::Boolean LPAHKDLPPPI; // 0x40

	::System::Void _ctor(::MoleMole::Vehicle::VehicleTestCameraMono*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + CIPHODBPLDD__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Vehicle::VehicleTestCameraMono* DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*))((::PBYTE)hIl2Cpp + CIPHODBPLDD_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void JAFIADKPLDI(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CIPHODBPLDD_JAFIADKPLDI_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CIPHODBPLDD_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::PipelineCamera::WorldBasicCameraData OLLLKAPKHOM()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD_OLLLKAPKHOM_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD_ANJAOOMDFLA_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* LOPAIJCMDFL()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD_LOPAIJCMDFL_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::MoleMole::Vehicle::VehicleTestCameraMono*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + CIPHODBPLDD_EBJMJDJFGFN_OFFSET))(this, DFMKILICPFB);
	}

	static ::CIPHODBPLDD* COKNIICCODC(::MoleMole::Vehicle::VehicleTestCameraMono* DFMKILICPFB)
	{
		return ((::CIPHODBPLDD*(*)(::MoleMole::Vehicle::VehicleTestCameraMono*))((::PBYTE)hIl2Cpp + CIPHODBPLDD_COKNIICCODC_OFFSET))(DFMKILICPFB);
	}
};
