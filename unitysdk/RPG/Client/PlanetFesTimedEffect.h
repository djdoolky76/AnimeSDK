#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PLANETFESTIMEDEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xE66C6A0)
#define RPG_CLIENT_PLANETFESTIMEDEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE66C4B0)
#define RPG_CLIENT_PLANETFESTIMEDEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xE66C4F0)
#define RPG_CLIENT_PLANETFESTIMEDEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xE66C540)
#define RPG_CLIENT_PLANETFESTIMEDEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE66C470)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTimedEffect_TypeDefinitionIndex = 68439;

	class PlanetFesTimedEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTIMEDEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTIMEDEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTIMEDEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTIMEDEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTIMEDEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

	};
}
