#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPKCNDCCEPP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class PlaneCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }

#define IEBDNKDCKMP_ALFBPPJLFDG_OFFSET UNITYSDK_OFFSET(0x16A94470)
#define IEBDNKDCKMP_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x16A94D40)
#define IEBDNKDCKMP_BJBDIDPDKBC_OFFSET UNITYSDK_OFFSET(0x16A95750)
#define IEBDNKDCKMP_BLOJGCKAECF_OFFSET UNITYSDK_OFFSET(0x16A94640)
#define IEBDNKDCKMP_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x16A941D0)
#define IEBDNKDCKMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A94250)
#define IEBDNKDCKMP_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x16A949C0)
#define IEBDNKDCKMP_FEICAJAAMKD_OFFSET UNITYSDK_OFFSET(0x16A95870)
#define IEBDNKDCKMP_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x16A958D0)
#define IEBDNKDCKMP_HFDOMKHAFNI_OFFSET UNITYSDK_OFFSET(0x16A956C0)
#define IEBDNKDCKMP_HHKKNBNNKDN_OFFSET UNITYSDK_OFFSET(0x16A94380)
#define IEBDNKDCKMP_IHEFBKPNMAC_OFFSET UNITYSDK_OFFSET(0x16A94900)
#define IEBDNKDCKMP_IJIIDOAPGOO_OFFSET UNITYSDK_OFFSET(0x16A942F0)
#define IEBDNKDCKMP_JALKEAEAGIB_OFFSET UNITYSDK_OFFSET(0x16A957D0)
#define IEBDNKDCKMP_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x16A945C0)
#define IEBDNKDCKMP_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x16A95170)
#define IEBDNKDCKMP_LJHHDCDOOHN_OFFSET UNITYSDK_OFFSET(0x16A94AF0)
#define IEBDNKDCKMP_MIHGPEJAANO_OFFSET UNITYSDK_OFFSET(0x16A94CC0)
#define IEBDNKDCKMP_OINHGJOLIAH_OFFSET UNITYSDK_OFFSET(0x16A946B0)
#define IEBDNKDCKMP_OJHPHFKOGNH_OFFSET UNITYSDK_OFFSET(0x16A94410)
#define IEBDNKDCKMP_ONJEECGDOCF_OFFSET UNITYSDK_OFFSET(0x16A94880)
#define IEBDNKDCKMP_PIIMLEFFPOC_OFFSET UNITYSDK_OFFSET(0x16A94C40)
#define IEBDNKDCKMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94000)

inline static constexpr unsigned int IEBDNKDCKMP_TypeDefinitionIndex = 85482;

class IEBDNKDCKMP : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::EPKCNDCCEPP JDEIDICJNOK; // 0x18
	::System::Boolean LPAHKDLPPPI; // 0xA0

	::System::Void _ctor(::MoleMole::Cameras::PlaneCameraConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PlaneCameraConfig*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_DISPOSE_OFFSET))(this);
	}

	::System::Void IJIIDOAPGOO(::System::Single GGGDEJHOHLD, ::System::Single AGHNGAINJMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_IJIIDOAPGOO_OFFSET))(this, GGGDEJHOHLD, AGHNGAINJMI);
	}

	::UnityEngine::Vector2 HHKKNBNNKDN()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_HHKKNBNNKDN_OFFSET))(this);
	}

	::System::Single OJHPHFKOGNH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_OJHPHFKOGNH_OFFSET))(this);
	}

	::System::Void ALFBPPJLFDG(::UnityEngine::Vector2 BKLLIDOAEMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_ALFBPPJLFDG_OFFSET))(this, BKLLIDOAEMI);
	}

	::System::Void JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Void BLOJGCKAECF(::UnityEngine::Vector2 BOGPAHGJOJK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_BLOJGCKAECF_OFFSET))(this, BOGPAHGJOJK);
	}

	::PipelineCamera::WorldBasicCameraData OINHGJOLIAH(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> IPMMCGDMODG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_OINHGJOLIAH_OFFSET))(this, IPMMCGDMODG);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_CFHBPGGKCFN_OFFSET))(this);
	}

	::System::Void ONJEECGDOCF(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_ONJEECGDOCF_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* IHEFBKPNMAC()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_IHEFBKPNMAC_OFFSET))(this);
	}

	::System::Void LJHHDCDOOHN(::UnityEngine::Vector2 BKLLIDOAEMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_LJHHDCDOOHN_OFFSET))(this, BKLLIDOAEMI);
	}

	static ::PipelineCamera::Blender::DefaultBlender* PIIMLEFFPOC()
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)())((::PBYTE)hIl2Cpp + IEBDNKDCKMP_PIIMLEFFPOC_OFFSET))();
	}

	::System::Void MIHGPEJAANO(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_MIHGPEJAANO_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_ANJAOOMDFLA_OFFSET))(this);
	}

	::UnityEngine::Vector2 HFDOMKHAFNI()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_HFDOMKHAFNI_OFFSET))(this);
	}

	::System::Void BJBDIDPDKBC(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_BJBDIDPDKBC_OFFSET))(this, NPHOPECPHLF);
	}

	::UnityEngine::Vector3 JALKEAEAGIB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_JALKEAEAGIB_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::UnityEngine::Vector2 FEICAJAAMKD()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_FEICAJAAMKD_OFFSET))(this);
	}

	::System::Void FFCIOICFNFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_FFCIOICFNFN_OFFSET))(this);
	}
};
