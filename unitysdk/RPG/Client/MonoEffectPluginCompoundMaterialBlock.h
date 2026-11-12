#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOEFFECTPLUGINCOMPOUNDMATERIALBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xE242160)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCompoundMaterialBlock_TypeDefinitionIndex = 71889;

	class MonoEffectPluginCompoundMaterialBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCOMPOUNDMATERIALBLOCK_CTOR_OFFSET))(this);
		}

	};
}
