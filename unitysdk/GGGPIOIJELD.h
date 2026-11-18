#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define GGGPIOIJELD_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x10EF0280)
#define GGGPIOIJELD_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x10EEFC90)
#define GGGPIOIJELD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10EEFD20)
#define GGGPIOIJELD_IBBLCAOMCKF_1_OFFSET UNITYSDK_OFFSET(0x10EEFEC0)
#define GGGPIOIJELD_IBBLCAOMCKF_2_OFFSET UNITYSDK_OFFSET(0x10EEFFB0)
#define GGGPIOIJELD_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x10EEFDC0)
#define GGGPIOIJELD_JCNFFEIPPMH_OFFSET UNITYSDK_OFFSET(0x10EF0160)
#define GGGPIOIJELD_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x10EF06F0)
#define GGGPIOIJELD_LHKFGCLMFCA_OFFSET UNITYSDK_OFFSET(0x10EF0AD0)
#define GGGPIOIJELD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10EF00A0)
#define GGGPIOIJELD_POCFEHGFNEE_OFFSET UNITYSDK_OFFSET(0x10EF06E0)
#define GGGPIOIJELD__CTOR_OFFSET UNITYSDK_OFFSET(0x10EEFB20)

inline static constexpr unsigned int GGGPIOIJELD_TypeDefinitionIndex = 92655;

class GGGPIOIJELD : public ::System::Object
{
public:
	// static const ::PipelineCamera::WorldBasicCameraDataDeltaFlag KNPKBALOLMI = 0x1003; // 0x0
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x18
	::System::Boolean BNMHCMLKAGN; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 OKEPGOMHOMM; // 0x24

	::System::Void _ctor(::MoleMole::Cameras::VariableCameraConfig* DFMKILICPFB, ::System::Boolean DEIEDIPLLEK, ::System::Boolean FANHLHNELOE, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + GGGPIOIJELD__CTOR_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK, FANHLHNELOE, DKOFFFNEFJC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD_DISPOSE_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::PipelineCamera::WorldBasicCameraData& BPEGDPLGFPO, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_IBBLCAOMCKF_OFFSET))(this, BPEGDPLGFPO, MBNOFPBEFAO);
	}

	::System::Void IBBLCAOMCKF_1(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* JEAMKOOJJJC, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_IBBLCAOMCKF_1_OFFSET))(this, JEAMKOOJJJC, MBNOFPBEFAO);
	}

	::System::Void IBBLCAOMCKF_2(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* NBNMHGHLHBF, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_IBBLCAOMCKF_2_OFFSET))(this, NBNMHGHLHBF, MBNOFPBEFAO);
	}

	::System::Void NPOLNFDBOOD(::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_NPOLNFDBOOD_OFFSET))(this, MBNOFPBEFAO);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::VariableCameraConfig* DFMKILICPFB, ::System::Boolean DEIEDIPLLEK)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGGPIOIJELD_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK);
	}

	::System::Void JCNFFEIPPMH(::PipelineCamera::WorldBasicCameraData& BPEGDPLGFPO, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_JCNFFEIPPMH_OFFSET))(this, BPEGDPLGFPO, MBNOFPBEFAO);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Cameras::VariableCameraConfig* EJJNGFCGNAK, ::System::Boolean DEIEDIPLLEK)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGGPIOIJELD_ANJAOOMDFLA_OFFSET))(this, EJJNGFCGNAK, DEIEDIPLLEK);
	}

	::System::Boolean POCFEHGFNEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD_POCFEHGFNEE_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Cameras::VariableCameraConfig* EJJNGFCGNAK, ::System::Boolean EIJNAJHCEIN, ::PipelineCamera::CameraCommandSpawnSubModules*& GKHOFOPJDOH, ::PipelineCamera::CameraCommandUnSpawnSubModules*& HMIFGOCFOFM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + GGGPIOIJELD_JLFNAHONPGB_OFFSET))(this, EJJNGFCGNAK, EIJNAJHCEIN, GKHOFOPJDOH, HMIFGOCFOFM);
	}

	::GGGPIOIJELD* LHKFGCLMFCA(::System::Boolean JCJDLICAODK)
	{
		return ((::GGGPIOIJELD*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGGPIOIJELD_LHKFGCLMFCA_OFFSET))(this, JCJDLICAODK);
	}
};
