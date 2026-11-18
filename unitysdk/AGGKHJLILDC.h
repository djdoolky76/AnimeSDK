#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Cameras { class BezierSurfaceCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define AGGKHJLILDC_AENAKLHNDGI_OFFSET UNITYSDK_OFFSET(0x134C3D50)
#define AGGKHJLILDC_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x134C4DF0)
#define AGGKHJLILDC_BJBDIDPDKBC_OFFSET UNITYSDK_OFFSET(0x134C4C60)
#define AGGKHJLILDC_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x134C3300)
#define AGGKHJLILDC_DCGKLECBLFM_OFFSET UNITYSDK_OFFSET(0x134C47F0)
#define AGGKHJLILDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C3380)
#define AGGKHJLILDC_DJFEOLNJKPF_OFFSET UNITYSDK_OFFSET(0x134C3420)
#define AGGKHJLILDC_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x134C3C20)
#define AGGKHJLILDC_FFBNOPAPMEJ_OFFSET UNITYSDK_OFFSET(0x134C4DD0)
#define AGGKHJLILDC_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x134C37B0)
#define AGGKHJLILDC_FJIFLMEDAPG_OFFSET UNITYSDK_OFFSET(0x134C4550)
#define AGGKHJLILDC_IEBFDMICLAO_OFFSET UNITYSDK_OFFSET(0x134C4300)
#define AGGKHJLILDC_JECFBNMLIKJ_OFFSET UNITYSDK_OFFSET(0x134C4960)
#define AGGKHJLILDC_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x134C4320)
#define AGGKHJLILDC_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x134C3590)
#define AGGKHJLILDC_NCALAECAHFI_OFFSET UNITYSDK_OFFSET(0x134C47D0)
#define AGGKHJLILDC_NMJJFPHBKMJ_OFFSET UNITYSDK_OFFSET(0x134C49E0)
#define AGGKHJLILDC_PBHCLIPOIPG_OFFSET UNITYSDK_OFFSET(0x134C4490)
#define AGGKHJLILDC__CTOR_OFFSET UNITYSDK_OFFSET(0x134C2F20)

inline static constexpr unsigned int AGGKHJLILDC_TypeDefinitionIndex = 65218;

class AGGKHJLILDC : public ::System::Object
{
public:
	::MoleMole::Cameras::BezierSurfaceCameraConfig* CEJENBBHBBG; // 0x10
	::Foundation::Clamped_1<::System::Single> GKKHAKFDBHG; // 0x18
	::System::Byte _padding0[0x10];
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x30
	::Foundation::Clamped_1<::System::Single> OMMAJACCKFH; // 0x38
	::System::Byte _padding1[0x10];
	::Foundation::Clamped_1<::System::Single> GOBHMPCBMFO; // 0x50
	::System::Byte _padding2[0x10];
	::Foundation::Clamped_1<::System::Single> EDCBIFBENEI; // 0x68
	::System::Byte _padding3[0x10];
	::System::Boolean LPAHKDLPPPI; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::BezierSurfaceCameraConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + AGGKHJLILDC__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean DJFEOLNJKPF(::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AGGKHJLILDC_DJFEOLNJKPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Cameras::BezierSurfaceCameraConfig* EJJNGFCGNAK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + AGGKHJLILDC_JLFNAHONPGB_OFFSET))(this, EJJNGFCGNAK, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::System::Boolean FFCIOICFNFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_FFCIOICFNFN_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + AGGKHJLILDC_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::WorldBasicCameraData AENAKLHNDGI()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_AENAKLHNDGI_OFFSET))(this);
	}

	::Foundation::Clamped_1<::System::Single> IEBFDMICLAO()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_IEBFDMICLAO_OFFSET))(this);
	}

	::System::Boolean JGHAGPDLDMF(::System::Single& NPHOPECPHLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + AGGKHJLILDC_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PBHCLIPOIPG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_PBHCLIPOIPG_OFFSET))(this);
	}

	::System::Boolean FJIFLMEDAPG(::System::Single IHHJJEBMJLI, ::System::Single LEPLKKJOMJA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AGGKHJLILDC_FJIFLMEDAPG_OFFSET))(this, IHHJJEBMJLI, LEPLKKJOMJA);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::BezierSurfaceCameraConfig* DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + AGGKHJLILDC_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB);
	}

	::Foundation::Clamped_1<::System::Single> NCALAECAHFI()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_NCALAECAHFI_OFFSET))(this);
	}

	::System::Boolean DCGKLECBLFM(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGGKHJLILDC_DCGKLECBLFM_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void JECFBNMLIKJ(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + AGGKHJLILDC_JECFBNMLIKJ_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Boolean NMJJFPHBKMJ(::System::Single& JCPNDFAEOLI, ::System::Single& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + AGGKHJLILDC_NMJJFPHBKMJ_OFFSET))(this, JCPNDFAEOLI, HFMHOELKCAJ);
	}

	::System::Boolean BJBDIDPDKBC(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGGKHJLILDC_BJBDIDPDKBC_OFFSET))(this, HBEKKMCBGBK);
	}

	::Foundation::Clamped_1<::System::Single> FFBNOPAPMEJ()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_FFBNOPAPMEJ_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Cameras::BezierSurfaceCameraConfig* DFMKILICPFB)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + AGGKHJLILDC_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB);
	}
};
