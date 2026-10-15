#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xDE1D620)
#define RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDE1D4D0)

namespace RPG::Client::RPGDemo
{
	inline static constexpr unsigned int RPGDemoPlayerController_Example_TypeDefinitionIndex = 75949;

	class RPGDemoPlayerController_Example : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnOperationMove; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMO_RPGDEMOPLAYERCONTROLLER_EXAMPLE_UPDATE_OFFSET))(this);
		}

	};
}
