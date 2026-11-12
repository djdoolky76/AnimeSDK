#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDA60EC0)
#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDA60960)
#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDA609A0)
#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xDA60B90)
#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDA60920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAstropolisTierEffect_TypeDefinitionIndex = 65961;

	class GridFightAstropolisTierEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::ParticleSystem*>* KGNJIMABIAN; // 0x20
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* HNIPMNNODNP; // 0x28
		::UnityEngine::Animation* KCOAILOHDND; // 0x30
		// static const ::System::Object OICLPFDCNDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Single a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::System::Single, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIEREFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
