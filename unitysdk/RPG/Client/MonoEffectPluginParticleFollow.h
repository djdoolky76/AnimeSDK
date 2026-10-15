#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD804730)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD803C80)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD803C40)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD803310)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_GETTRACKPOSITION_OFFSET UNITYSDK_OFFSET(0xD804550)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_HFPGHBPPICG_OFFSET UNITYSDK_OFFSET(0xD803A40)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_IGEKBPEPNFB_OFFSET UNITYSDK_OFFSET(0xD803E50)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD803280)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETMEMBERS_OFFSET UNITYSDK_OFFSET(0xD8044B0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD8032C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETLIFETIME_OFFSET UNITYSDK_OFFSET(0xD804600)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETTRACKTARGET_OFFSET UNITYSDK_OFFSET(0xD804500)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_TICK_OFFSET UNITYSDK_OFFSET(0xD803CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleFollow_TypeDefinitionIndex = 70088;

	class MonoEffectPluginParticleFollow : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* TrackObject; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* HCPGEOKBJKD; // 0x30
		::System::Single LEKGFGLPPLL; // 0x38
		::System::Single HLNLFINDOEM; // 0x3C
		::System::Single LLOLHAAJAKJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_TICK_OFFSET))(this, a1);
		}

		::System::Void ResetMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETMEMBERS_OFFSET))(this);
		}

		::System::Void SetTrackTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETTRACKTARGET_OFFSET))(this, a1);
		}

		::System::Boolean GetTrackPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_GETTRACKPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLifetime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETLIFETIME_OFFSET))(this, a1);
		}

		::System::Void HFPGHBPPICG(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_HFPGHBPPICG_OFFSET))(this, a1, a2);
		}

		::System::Void IGEKBPEPNFB(::System::Object* a1, ::UnityEngine::ParticleSystem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_IGEKBPEPNFB_OFFSET))(this, a1, a2);
		}

	};
}
