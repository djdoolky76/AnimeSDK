#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

namespace RPG::Client::LittleGame
{
	template <typename T>
	class NavigationRequest_1 : public ::System::Object
	{
	public:
		T AgentEntity; // 0x0
		::UnityEngine::Vector3 DestinationPosition; // 0x0
		::System::Single StartDistance; // 0x0
		::System::Single DestinationStopDistance; // 0x0
		::System::Single StartMoveDuration; // 0x0
		::System::Action* OnStartMoveFinish; // 0x0
		::System::Action* OnNavigationFinish; // 0x0
	};
}
