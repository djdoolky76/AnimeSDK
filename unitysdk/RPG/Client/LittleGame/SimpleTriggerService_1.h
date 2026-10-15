#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IContext; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleTriggerService_1_TypeDefinitionIndex = 76524;

	template <typename T>
	class SimpleTriggerService_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x0
		::RPG::Client::LittleGame::Services_1<T>* _Services; // 0x0
		::Entitas::IContext* _Context; // 0x0
		::System::Boolean _MuteCallbackOnDestroy; // 0x0
		::System::Action* _CustomButtonCallback; // 0x0
	};
}
