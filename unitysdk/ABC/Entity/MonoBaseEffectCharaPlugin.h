#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::Entity { class MonoVFXModifyEntityEffectBaseSubPlugin; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_B0D8DE14010B6F15_OFFSET UNITYSDK_OFFSET(0x1EBC400)
#define ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_B3CFEDE0E337C288_OFFSET UNITYSDK_OFFSET(0x1EBC0E0)
#define ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_B888A4D16322BD44_OFFSET UNITYSDK_OFFSET(0x1EBC270)
#define ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_E88E82D157536C68_OFFSET UNITYSDK_OFFSET(0x1EBC3B0)
#define ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x1EBC200)
#define ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoBaseEffectCharaPlugin_TypeDefinitionIndex = 6748;

	class MonoBaseEffectCharaPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin* A2BB921AD218E06E; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void B0D8DE14010B6F15(::UnityEngine::GameObject* A86A90C31A146E9C, ::UnityEngine::Renderer* E68CF045A899F028, ::System::Int32 ACE7064E78CB1882)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_B0D8DE14010B6F15_OFFSET))(this, A86A90C31A146E9C, E68CF045A899F028, ACE7064E78CB1882);
		}

		::System::Void EEA5D6E8F4B2655A(::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin* FBF49BDBD304202B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_EEA5D6E8F4B2655A_OFFSET))(this, FBF49BDBD304202B);
		}

		::System::Void E88E82D157536C68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_E88E82D157536C68_OFFSET))(this);
		}

		::System::Boolean B888A4D16322BD44(::UnityEngine::Renderer* E68CF045A899F028, ::System::Int32 ACE7064E78CB1882, ::UnityEngine::Material*& E3AD885F703BB54B)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_B888A4D16322BD44_OFFSET))(this, E68CF045A899F028, ACE7064E78CB1882, E3AD885F703BB54B);
		}

		::System::Void B3CFEDE0E337C288(::UnityEngine::GameObject* A86A90C31A146E9C, ::UnityEngine::Renderer* E68CF045A899F028, ::System::Int32 ACE7064E78CB1882)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOBASEEFFECTCHARAPLUGIN_B3CFEDE0E337C288_OFFSET))(this, A86A90C31A146E9C, E68CF045A899F028, ACE7064E78CB1882);
		}
	};
}
