#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC19970)
#define RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDC194F0)
#define RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_KKALCEEILMM_OFFSET UNITYSDK_OFFSET(0xDC19570)
#define RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDC19640)
#define RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xDC19700)
#define RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_SETPERSPECTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xDC19460)
#define RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDC194B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightParticleGridEffect_TypeDefinitionIndex = 66021;

	class GridFightParticleGridEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* HNIPMNNODNP; // 0x18
		::UnityEngine::Camera* NEAGGNBPBFC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void SetPerspectiveCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_SETPERSPECTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Transform* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::UInt32, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KKALCEEILMM(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTICLEGRIDEFFECT_KKALCEEILMM_OFFSET))(this, a1);
		}

	};
}
