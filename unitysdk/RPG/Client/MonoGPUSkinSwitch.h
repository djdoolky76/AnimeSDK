#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOGPUSKINSWITCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AE12950)
#define RPG_CLIENT_MONOGPUSKINSWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE12D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoGPUSkinSwitch_TypeDefinitionIndex = 70553;

	class MonoGPUSkinSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DisableGPUSkin; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGPUSKINSWITCH_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGPUSKINSWITCH_AWAKE_OFFSET))(this);
		}

	};
}
