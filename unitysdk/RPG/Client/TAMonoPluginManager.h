#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TAMONOPLUGINMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A14D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoPluginManager_TypeDefinitionIndex = 72755;

	class TAMonoPluginManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAMONOPLUGINMANAGER_CTOR_OFFSET))(this);
		}

	};
}
