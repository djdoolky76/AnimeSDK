#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::Entity { class EntityEffectBlockRender; }
namespace System { class String; }

#define ABC_ENTITY_MONOENTITYEFFECTRECEVIERBLOCKCONFIG_A045497B57A0EE4D_OFFSET UNITYSDK_OFFSET(0x22B6C50)
#define ABC_ENTITY_MONOENTITYEFFECTRECEVIERBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityEffectRecevierBlockConfig_TypeDefinitionIndex = 7154;

	class MonoEntityEffectRecevierBlockConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::ABC::Entity::EntityEffectBlockRender*>* BlockRenderers; // 0x20

		::System::Boolean A045497B57A0EE4D(::System::String* E51CC485A8C0CBD2, ::ABC::Entity::EntityEffectBlockRender*& BB38C0D889A7D69F)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::ABC::Entity::EntityEffectBlockRender*&))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYEFFECTRECEVIERBLOCKCONFIG_A045497B57A0EE4D_OFFSET))(this, E51CC485A8C0CBD2, BB38C0D889A7D69F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYEFFECTRECEVIERBLOCKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
