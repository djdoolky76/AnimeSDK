#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TAMONOPLUGINMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE18B190)

namespace RPG::Client
{
	class TAMonoPluginManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAMONOPLUGINMANAGER_CTOR_OFFSET))(this);
		}

	};
}
