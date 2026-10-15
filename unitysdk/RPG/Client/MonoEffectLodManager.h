#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOEFFECTLODMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD7AA7C0)

namespace RPG::Client
{
	class MonoEffectLodManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLODMANAGER_CTOR_OFFSET))(this);
		}

	};
}
