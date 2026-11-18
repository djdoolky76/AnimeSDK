#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELBHJBIDBB.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AKKLGKMNNLL.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace PipelineCamera::SubModule { class LerpToTargetInCore; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationCurve; }

#define PGKNIGJKKCL_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0xFDB8FD0)
#define PGKNIGJKKCL_APMILADCOKG_OFFSET UNITYSDK_OFFSET(0xFDB84F0)
#define PGKNIGJKKCL_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0xFDB7B10)
#define PGKNIGJKKCL_DAJNANBGPDN_OFFSET UNITYSDK_OFFSET(0x1C654DE0)
#define PGKNIGJKKCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFDB7C40)
#define PGKNIGJKKCL_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0xFDB89C0)
#define PGKNIGJKKCL_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0xFDB7CF0)
#define PGKNIGJKKCL_PIIMLEFFPOC_OFFSET UNITYSDK_OFFSET(0xFDB8710)
#define PGKNIGJKKCL_PKBPHMDIPIO_OFFSET UNITYSDK_OFFSET(0xFDB87F0)
#define PGKNIGJKKCL__CTOR_OFFSET UNITYSDK_OFFSET(0xFDB78C0)

inline static constexpr unsigned int PGKNIGJKKCL_TypeDefinitionIndex = 75329;

class PGKNIGJKKCL : public ::System::Object
{
public:
	::PipelineCamera::SubModule::LerpToTargetInCore* AKMPIKKEOAP; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* CAHNMPOGHII; // 0x18
	::GELBHJBIDBB JDEIDICJNOK; // 0x20
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x118
	::PipelineCamera::WorldBasicCameraData MDJKPMBIJCF; // 0x120
	::System::Single PCJOKDOHCLM; // 0x14C

	::System::Void _ctor(::AKKLGKMNNLL& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AKKLGKMNNLL&))((::PBYTE)hIl2Cpp + PGKNIGJKKCL__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_DISPOSE_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::AKKLGKMNNLL& DFMKILICPFB, ::PipelineCamera::CameraCommandSpawnSubModules*& ABCLGPHOMMP, ::PipelineCamera::CameraCommandUnSpawnSubModules*& HMIFGOCFOFM)
	{
		return ((::System::Void(*)(::PVOID, ::AKKLGKMNNLL&, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_JLFNAHONPGB_OFFSET))(this, DFMKILICPFB, ABCLGPHOMMP, HMIFGOCFOFM);
	}

	static ::PipelineCamera::Blender::DefaultBlender* PIIMLEFFPOC(::System::Boolean JCJDLICAODK, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_PIIMLEFFPOC_OFFSET))(JCJDLICAODK, MDPPNMIPDMP, FAJHPKBELMF);
	}

	::PipelineCamera::WorldBasicCameraData PKBPHMDIPIO(::System::Single PMNLNNGEIFM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_PKBPHMDIPIO_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EBJMJDJFGFN(::AKKLGKMNNLL& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AKKLGKMNNLL&))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_EBJMJDJFGFN_OFFSET))(this, DFMKILICPFB);
	}

	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* APMILADCOKG(::AKKLGKMNNLL& HGMPMANCPKE, ::Nap::NapECS::EcsWorld* BLHJHPFBDCH)
	{
		return ((::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>*(*)(::AKKLGKMNNLL&, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_APMILADCOKG_OFFSET))(HGMPMANCPKE, BLHJHPFBDCH);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::AKKLGKMNNLL DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::AKKLGKMNNLL))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::AKKLGKMNNLL& DFMKILICPFB)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::AKKLGKMNNLL&))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB);
	}

	::PipelineCamera::WorldBasicCameraData DAJNANBGPDN()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_DAJNANBGPDN_OFFSET))(this);
	}
};
