#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_BBNDNGACCFL_OFFSET UNITYSDK_OFFSET(0xDA5E2F0)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5E360)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDA5DE30)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDA5DE70)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_PLAY_1_OFFSET UNITYSDK_OFFSET(0xDA5E100)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xDA5DFA0)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDA5DDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAnimEffect_TypeDefinitionIndex = 65960;

	class GridFightAnimEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::String*>* OOBALIFBOCA; // 0x18
		::System::Single HBDJCFFDGDD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Action* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play_1(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_PLAY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BBNDNGACCFL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_BBNDNGACCFL_OFFSET))(this, a1);
		}

	};
}
