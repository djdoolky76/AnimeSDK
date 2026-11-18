#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

class FHGHJDPHHEL;
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define GHEFDPOJMJF_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x14CE5970)
#define GHEFDPOJMJF_CDIFHCKCOAF_OFFSET UNITYSDK_OFFSET(0x14CE5510)
#define GHEFDPOJMJF_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x14CE4CD0)
#define GHEFDPOJMJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14CE4D60)
#define GHEFDPOJMJF_EAIKPBHIFOB_OFFSET UNITYSDK_OFFSET(0x14CE5C30)
#define GHEFDPOJMJF_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x14CE4E10)
#define GHEFDPOJMJF_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x14CE4F60)
#define GHEFDPOJMJF_PIIMLEFFPOC_OFFSET UNITYSDK_OFFSET(0x14CE58A0)
#define GHEFDPOJMJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CE4E00)
#define GHEFDPOJMJF__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE4B80)

inline static constexpr unsigned int GHEFDPOJMJF_TypeDefinitionIndex = 89943;

class GHEFDPOJMJF : public ::System::Object
{
public:
	static ::System::Single* StaticGet_KKIHHMPPKJE()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GHEFDPOJMJF_TypeDefinitionIndex)->GetStaticField(0x113A0);
	}
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x18

	::System::Void _ctor(::FHGHJDPHHEL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHEFDPOJMJF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_DISPOSE_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::FHGHJDPHHEL* KHNALOKNMHF)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::FHGHJDPHHEL*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, KHNALOKNMHF);
	}

	::System::Void JLFNAHONPGB(::FHGHJDPHHEL* AAOCANGHBDG, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_JLFNAHONPGB_OFFSET))(this, AAOCANGHBDG, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* CDIFHCKCOAF()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_CDIFHCKCOAF_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* PIIMLEFFPOC(::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_PIIMLEFFPOC_OFFSET))(MDPPNMIPDMP, FAJHPKBELMF);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::FHGHJDPHHEL* AAOCANGHBDG)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::FHGHJDPHHEL*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_ANJAOOMDFLA_OFFSET))(this, AAOCANGHBDG);
	}

	static ::PipelineCamera::Blender::DefaultBlender* EAIKPBHIFOB()
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)())((::PBYTE)hIl2Cpp + GHEFDPOJMJF_EAIKPBHIFOB_OFFSET))();
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::FHGHJDPHHEL* AAOCANGHBDG)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::FHGHJDPHHEL*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_CFHBPGGKCFN_OFFSET))(this, AAOCANGHBDG);
	}
};
