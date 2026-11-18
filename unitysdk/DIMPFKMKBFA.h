#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIMPFKMKBFA_GBJPABHCKND.h"
#include "unitysdk/DIMPFKMKBFA_PFIHCMOBMFL.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

class MFBKLAENAEC;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class SlideRopeCameraLockConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
template <typename T> class GJBGAGHHABE_1;

#define DIMPFKMKBFA_AKLDALPHMCP_OFFSET UNITYSDK_OFFSET(0xFDBC850)
#define DIMPFKMKBFA_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0xFDBDCF0)
#define DIMPFKMKBFA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFDBBE80)
#define DIMPFKMKBFA_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0xFDBD230)
#define DIMPFKMKBFA_CJGKDAIMJHL_OFFSET UNITYSDK_OFFSET(0xFDBE2D0)
#define DIMPFKMKBFA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xFDBCE60)
#define DIMPFKMKBFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFDBC780)
#define DIMPFKMKBFA_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0xFDBE120)
#define DIMPFKMKBFA_FFCMHNMNAHD_OFFSET UNITYSDK_OFFSET(0xFDBE310)
#define DIMPFKMKBFA_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0xFDBD7F0)
#define DIMPFKMKBFA_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0xFDBDA60)
#define DIMPFKMKBFA_NMFICNIKPOI_OFFSET UNITYSDK_OFFSET(0xFDBE240)
#define DIMPFKMKBFA_OCAILCBBPCG_OFFSET UNITYSDK_OFFSET(0xFDBCF20)
#define DIMPFKMKBFA_PLGCADACOPJ_OFFSET UNITYSDK_OFFSET(0xFDBC8B0)
#define DIMPFKMKBFA_PODJBKEIJIJ_OFFSET UNITYSDK_OFFSET(0xFDBD2A0)
#define DIMPFKMKBFA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDBBC70)

inline static constexpr unsigned int DIMPFKMKBFA_TypeDefinitionIndex = 41868;

class DIMPFKMKBFA : public ::System::Object
{
public:
	::DIMPFKMKBFA_GBJPABHCKND HBDPAIKANDB; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x38
	::Cinemachine::CinemachineVirtualCamera* CEGKFLHNIMN; // 0x40
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x48
	::MFBKLAENAEC* OGFLBKKACCC; // 0x50
	::GJBGAGHHABE_1<::PipelineCamera::WorldBasicCameraData>* AJLIHAJFAEK; // 0x58
	::System::Boolean CIFLENFEEGN; // 0x60
	::System::Byte _padding0[0x3];
	::DIMPFKMKBFA_PFIHCMOBMFL BOHBDHAPLDN; // 0x64
	::System::Single IBJMGPPAAHD; // 0x68
	::System::Single BAJPPKKKBCM; // 0x6C

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraLockConfig* CBLGCIFLMKL, ::MFBKLAENAEC* IMLLDOHDCNC, ::System::Single KGKGLNJAJGN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraLockConfig*, ::MFBKLAENAEC*, ::System::Single))((::PBYTE)hIl2Cpp + DIMPFKMKBFA__CTOR_OFFSET))(this, CBLGCIFLMKL, IMLLDOHDCNC, KGKGLNJAJGN);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_DISPOSE_OFFSET))(this);
	}

	::System::Void AKLDALPHMCP(::System::Single BDEDDEGJFKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_AKLDALPHMCP_OFFSET))(this, BDEDDEGJFKL);
	}

	::System::Void PLGCADACOPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_PLGCADACOPJ_OFFSET))(this);
	}

	static ::DIMPFKMKBFA* COKNIICCODC(::MoleMole::Config::SlideRopeCameraLockConfig*& CBLGCIFLMKL, ::MFBKLAENAEC*& IMLLDOHDCNC, ::System::Single KGKGLNJAJGN)
	{
		return ((::DIMPFKMKBFA*(*)(::MoleMole::Config::SlideRopeCameraLockConfig*&, ::MFBKLAENAEC*&, ::System::Single))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_COKNIICCODC_OFFSET))(CBLGCIFLMKL, IMLLDOHDCNC, KGKGLNJAJGN);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::SlideRopeCameraLockConfig* CBLGCIFLMKL, ::MFBKLAENAEC* JNDDJMAHNAI, ::System::Single KGKGLNJAJGN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraLockConfig*, ::MFBKLAENAEC*, ::System::Single))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_BBOMJDBNHIC_OFFSET))(this, CBLGCIFLMKL, JNDDJMAHNAI, KGKGLNJAJGN);
	}

	::PipelineCamera::WorldBasicCameraData PODJBKEIJIJ(::System::Single PMNLNNGEIFM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_PODJBKEIJIJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_ANJAOOMDFLA_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void OCAILCBBPCG(::System::Single JOELNNECAID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_OCAILCBBPCG_OFFSET))(this, JOELNNECAID);
	}

	::System::Void NMFICNIKPOI(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_NMFICNIKPOI_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Boolean CJGKDAIMJHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_CJGKDAIMJHL_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_CFHBPGGKCFN_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FFCMHNMNAHD()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_FFCMHNMNAHD_OFFSET))(this);
	}
};
