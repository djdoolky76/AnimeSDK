#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class TimelineDataExtra; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class DelegateCameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKMGJKOCGDE_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x13CC8110)
#define JKMGJKOCGDE_BHPACPHOIEI_OFFSET UNITYSDK_OFFSET(0x13CC8620)
#define JKMGJKOCGDE_CENDJAPLBBP_OFFSET UNITYSDK_OFFSET(0x13CC7F10)
#define JKMGJKOCGDE_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x13CC73C0)
#define JKMGJKOCGDE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13CC83D0)
#define JKMGJKOCGDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CC7440)
#define JKMGJKOCGDE_DMLKPHHBNNO_OFFSET UNITYSDK_OFFSET(0x13CC70B0)
#define JKMGJKOCGDE_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x13CC8E40)
#define JKMGJKOCGDE_EHLOILHEDOG_OFFSET UNITYSDK_OFFSET(0x13CC8F60)
#define JKMGJKOCGDE_FAOINBLABAB_OFFSET UNITYSDK_OFFSET(0x13CC79A0)
#define JKMGJKOCGDE_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x13CC90A0)
#define JKMGJKOCGDE_IOEBKKJPBCB_OFFSET UNITYSDK_OFFSET(0x13CC8070)
#define JKMGJKOCGDE_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x13CC7BE0)
#define JKMGJKOCGDE_JMBMACILBIP_OFFSET UNITYSDK_OFFSET(0x13CC7500)
#define JKMGJKOCGDE_LOPAIJCMDFL_OFFSET UNITYSDK_OFFSET(0x13CC7DB0)
#define JKMGJKOCGDE_NNLKEAGILIB_OFFSET UNITYSDK_OFFSET(0x13CC7840)
#define JKMGJKOCGDE_OFJKGKEPNON_OFFSET UNITYSDK_OFFSET(0x13CC7700)
#define JKMGJKOCGDE__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC6F50)

inline static constexpr unsigned int JKMGJKOCGDE_TypeDefinitionIndex = 89838;

class JKMGJKOCGDE : public ::System::Object
{
public:
	// static const ::NBGELMBGLKD ACHEIANAGJE = 0x4; // 0x0
	// static const ::PipelineCamera::WorldBasicCameraDataDeltaFlag JJGMJNFHJAN = 0x1; // 0x0
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x10
	::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::System::Int32>* JIBPFIOBIIK; // 0x18
	::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* OIHPDFMBDDH; // 0x20
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x28
	::MoleMole::TimelineDataExtra* CEJENBBHBBG; // 0x30
	::System::Boolean LPAHKDLPPPI; // 0x38
	::System::Boolean MCEEIIJADNI; // 0x39
	::System::Byte _padding0[0x2];
	::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> JLPLJNEIMLD; // 0x3C

	::System::Void _ctor(::MoleMole::TimelineDataExtra* DFMKILICPFB, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* MLBHKPFHJFM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineDataExtra*, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE__CTOR_OFFSET))(this, DFMKILICPFB, MLBHKPFHJFM);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* OFJKGKEPNON(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_OFJKGKEPNON_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::DelegateCameraDataBlenderBuilder* NNLKEAGILIB()
	{
		return ((::PipelineCamera::DelegateCameraDataBlenderBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_NNLKEAGILIB_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCameraBase* FAOINBLABAB()
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_FAOINBLABAB_OFFSET))(this);
	}

	::System::Void DMLKPHHBNNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_DMLKPHHBNNO_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::System::Void IOEBKKJPBCB(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_IOEBKKJPBCB_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_ANJAOOMDFLA_OFFSET))(this);
	}

	static ::JKMGJKOCGDE* COKNIICCODC(::MoleMole::TimelineDataExtra* DFMKILICPFB, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* MLBHKPFHJFM)
	{
		return ((::JKMGJKOCGDE*(*)(::MoleMole::TimelineDataExtra*, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_COKNIICCODC_OFFSET))(DFMKILICPFB, MLBHKPFHJFM);
	}

	::System::Void BHPACPHOIEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_BHPACPHOIEI_OFFSET))(this);
	}

	::PipelineCamera::DelegateCameraDataBlenderBuilder* CENDJAPLBBP()
	{
		return ((::PipelineCamera::DelegateCameraDataBlenderBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_CENDJAPLBBP_OFFSET))(this);
	}

	::System::Void JMBMACILBIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_JMBMACILBIP_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_EBJMJDJFGFN_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* EHLOILHEDOG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_EHLOILHEDOG_OFFSET))(this, PIIPCLCCOIG);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_CFHBPGGKCFN_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* LOPAIJCMDFL()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_LOPAIJCMDFL_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}
};
