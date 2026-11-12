#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Coffee::UIExtensions { class UIParticle; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF8DA0)
#define RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDCF89E0)
#define RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_HODINNOKJKM_OFFSET UNITYSDK_OFFSET(0xDCF8AE0)
#define RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDCF8A50)
#define RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xDCF8C40)
#define RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDCF89A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUIParticleEffect_TypeDefinitionIndex = 65941;

	class GridFightUIParticleEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Coffee::UIExtensions::UIParticle* FJKMDLKECMP; // 0x18
		::System::Single HBDJCFFDGDD; // 0x20
		// static const ::System::Object OICLPFDCNDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Single HODINNOKJKM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIPARTICLEEFFECT_HODINNOKJKM_OFFSET))(this);
		}

	};
}
