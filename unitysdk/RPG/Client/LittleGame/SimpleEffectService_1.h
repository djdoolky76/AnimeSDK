#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEffectService_1_TypeDefinitionIndex = 76481;

	template <typename T>
	class SimpleEffectService_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _GameInstanceEntity; // 0x0
		::System::Action_1<::System::String*>* _LogErrorAction; // 0x0
	};
}
