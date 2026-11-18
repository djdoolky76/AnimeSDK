#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Cameras { class TopViewCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define BNFFAMKLBAI_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x11600DD0)
#define BNFFAMKLBAI_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x116003A0)
#define BNFFAMKLBAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11600430)
#define BNFFAMKLBAI_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x116017B0)
#define BNFFAMKLBAI_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x116004D0)
#define BNFFAMKLBAI_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x11601230)
#define BNFFAMKLBAI_PIIMLEFFPOC_OFFSET UNITYSDK_OFFSET(0x116016D0)
#define BNFFAMKLBAI_PODJBKEIJIJ_OFFSET UNITYSDK_OFFSET(0x11600740)
#define BNFFAMKLBAI__CTOR_OFFSET UNITYSDK_OFFSET(0x11600240)

inline static constexpr unsigned int BNFFAMKLBAI_TypeDefinitionIndex = 63481;

class BNFFAMKLBAI : public ::System::Object
{
public:
	::MoleMole::Cameras::TopViewCameraConfig* LBPDEJDDJPE; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x18
	::System::Boolean EPOCJMIJCGH; // 0x20
	::System::Boolean LPAHKDLPPPI; // 0x21
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 FCONLIJOIFH; // 0x24

	::System::Void _ctor(::MoleMole::Cameras::TopViewCameraConfig* DFMKILICPFB, ::System::Boolean DEIEDIPLLEK, ::System::Boolean FANHLHNELOE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BNFFAMKLBAI__CTOR_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK, FANHLHNELOE);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::TopViewCameraConfig* DFMKILICPFB, ::System::Boolean DEIEDIPLLEK)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK);
	}

	::PipelineCamera::WorldBasicCameraData PODJBKEIJIJ(::System::Single PMNLNNGEIFM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_PODJBKEIJIJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Cameras::TopViewCameraConfig*& DFMKILICPFB, ::System::Boolean DEIEDIPLLEK)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*&, ::System::Boolean))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK);
	}

	static ::PipelineCamera::Blender::DefaultBlender* PIIMLEFFPOC(::System::Boolean JCJDLICAODK, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_PIIMLEFFPOC_OFFSET))(JCJDLICAODK, MDPPNMIPDMP, FAJHPKBELMF);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::MoleMole::Cameras::TopViewCameraConfig*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::TopViewCameraConfig*&))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, DFMKILICPFB);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Cameras::TopViewCameraConfig* EJJNGFCGNAK, ::System::Boolean DEIEDIPLLEK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_JLFNAHONPGB_OFFSET))(this, EJJNGFCGNAK, DEIEDIPLLEK, INBNCFGMKCL, MJJIOHKLAKK);
	}
};
