#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGIZMOS_CTOR_OFFSET UNITYSDK_OFFSET(0xCBEBD20)

namespace RPG::Client
{
	class DebugGizmos : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGIZMOS_CTOR_OFFSET))(this);
		}

	};
}
