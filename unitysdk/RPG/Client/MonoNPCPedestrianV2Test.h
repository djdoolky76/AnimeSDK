#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONONPCPEDESTRIANV2TEST_CTOR_OFFSET UNITYSDK_OFFSET(0xD84F790)

namespace RPG::Client
{
	class MonoNPCPedestrianV2Test : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCPEDESTRIANV2TEST_CTOR_OFFSET))(this);
		}

	};
}
