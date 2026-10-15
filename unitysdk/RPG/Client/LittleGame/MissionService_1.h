#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IContext; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MissionService_1_TypeDefinitionIndex = 76506;

	template <typename T>
	class MissionService_1 : public ::System::Object
	{
	public:
		::Entitas::IContext* _Context; // 0x0
		::RPG::Client::LittleGame::Services_1<T>* _Services; // 0x0
		::System::Action* _LogErrorAction; // 0x0
		::System::Int32 _MissionEntityRuntimeID; // 0x0
		::System::UInt32 _MissionTalkEntityID; // 0x0
		::RPG::GameCore::LittleGameEvent* _MissionTalkFinishEvent; // 0x0
	};
}
