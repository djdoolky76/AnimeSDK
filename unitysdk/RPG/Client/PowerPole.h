#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_POWERPOLE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC06170)

namespace RPG::Client
{
	class PowerPole : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POWERPOLE_CTOR_OFFSET))(this);
		}

	};
}
