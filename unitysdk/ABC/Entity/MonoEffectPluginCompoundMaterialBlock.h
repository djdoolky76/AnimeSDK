#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_ENTITY_MONOEFFECTPLUGINCOMPOUNDMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEffectPluginCompoundMaterialBlock_TypeDefinitionIndex = 7129;

	class MonoEffectPluginCompoundMaterialBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCOMPOUNDMATERIALBLOCK__CTOR_OFFSET))(this);
		}
	};
}
