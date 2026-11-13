#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class GridFightAhaGrowthUpEffect; }
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_BBNDNGACCFL_OFFSET UNITYSDK_OFFSET(0x1C71F920)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71FD80)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C71F580)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_IEANEHKAGLC_OFFSET UNITYSDK_OFFSET(0x1C71FC90)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_INIT_OFFSET UNITYSDK_OFFSET(0x1C71F7B0)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_NNACPKBCDPK_OFFSET UNITYSDK_OFFSET(0x1C71FA20)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C71F5F0)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1C71F820)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C71F540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAhaGrowthUpEffect_TypeDefinitionIndex = 65958;

	class GridFightAhaGrowthUpEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::GridFightEffectController* LLFEHKABAIA; // 0x18
		::UnityEngine::Transform* MHBBDGBFBBJ; // 0x20
		::System::Action* OFKALFGGAGE; // 0x28
		::RPG::Client::GridFightAhaGrowthUpEffect* BFACEKEIPCD; // 0x30
		::System::Single HBDJCFFDGDD; // 0x38
		// static const ::System::String* AEKJELNFCIK; // 0x0
		// static const ::System::String* PBEHGOHJDHB; // 0x0
		// static const ::System::String* NHLPOPAMJDD; // 0x0
		// static const ::System::String* PEAIDOKEAIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::GridFightEffectController* a1, ::UnityEngine::Transform* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEffectController*, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_PLAY_OFFSET))(this, a1);
		}

		::System::Void BBNDNGACCFL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_BBNDNGACCFL_OFFSET))(this, a1);
		}

		::System::Void NNACPKBCDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_NNACPKBCDPK_OFFSET))(this);
		}

		static ::UnityEngine::Transform* IEANEHKAGLC(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT_IEANEHKAGLC_OFFSET))(a1, a2);
		}

	};
}
