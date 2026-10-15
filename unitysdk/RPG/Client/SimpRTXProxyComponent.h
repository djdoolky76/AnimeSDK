#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_SIMPRTXPROXYCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE0CA510)

namespace RPG::Client
{
	class SimpRTXProxyComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXPROXYCOMPONENT_CTOR_OFFSET))(this);
		}

	};
}
