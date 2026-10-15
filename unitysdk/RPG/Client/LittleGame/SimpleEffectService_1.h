#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEffectService_1_TypeDefinitionIndex = 76482;

	template <typename T>
	class SimpleEffectService_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _GameInstanceEntity; // 0x0
		::System::Action* _LogErrorAction; // 0x0
	};
}
