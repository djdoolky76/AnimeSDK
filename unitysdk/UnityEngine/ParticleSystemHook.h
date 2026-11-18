#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemCullingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemStopBehavior.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSETCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x1F46DB30)
#define UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSETTICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1F46DBA0)
#define UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSIMULATE_OFFSET UNITYSDK_OFFSET(0x1F46DA20)
#define UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSTOP_OFFSET UNITYSDK_OFFSET(0x1F46DAB0)
#define UNITYENGINE_PARTICLESYSTEMHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F46DC20)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemHook_TypeDefinitionIndex = 7774;

	class ParticleSystemHook : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::ParticleSystem*, ::System::Single>** StaticGet_onHookSetTickFrequency()
		{
			return (::System::Action_2<::UnityEngine::ParticleSystem*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemHook_TypeDefinitionIndex)->GetStaticField(0x65E0);
		}
		static ::System::Action_4<::UnityEngine::ParticleSystem*, ::System::Single, ::System::Boolean, ::Il2CppArray<::System::Boolean>*>** StaticGet_onHookSimulate()
		{
			return (::System::Action_4<::UnityEngine::ParticleSystem*, ::System::Single, ::System::Boolean, ::Il2CppArray<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemHook_TypeDefinitionIndex)->GetStaticField(0x65E8);
		}
		static ::System::Action_3<::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior>** StaticGet_onHookStop()
		{
			return (::System::Action_3<::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemHook_TypeDefinitionIndex)->GetStaticField(0x65F0);
		}
		static ::System::Action_2<::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemCullingMode>** StaticGet_onHookSetCullingMode()
		{
			return (::System::Action_2<::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemCullingMode>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemHook_TypeDefinitionIndex)->GetStaticField(0x65F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookParticleSystemSimulate(::UnityEngine::ParticleSystem* system, ::System::Single t, ::System::Boolean withChildren, ::Il2CppArray<::System::Boolean>* restartAndfixedTimeStep)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::Single, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSIMULATE_OFFSET))(system, t, withChildren, restartAndfixedTimeStep);
		}

		static ::System::Void invoke_onHookParticleSystemStop(::UnityEngine::ParticleSystem* system, ::System::Boolean withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSTOP_OFFSET))(system, withChildren, stopBehavior);
		}

		static ::System::Void invoke_onHookParticleSystemSetCullingMode(::UnityEngine::ParticleSystem* system, ::UnityEngine::ParticleSystemCullingMode cullingMode)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemCullingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSETCULLINGMODE_OFFSET))(system, cullingMode);
		}

		static ::System::Void invoke_onHookParticleSystemSetTickFrequency(::UnityEngine::ParticleSystem* system, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMHOOK_INVOKE_ONHOOKPARTICLESYSTEMSETTICKFREQUENCY_OFFSET))(system, value);
		}
	};
}
