#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class DJBBAGDNFJG;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnbasedPluginBase_1_TypeDefinitionIndex = 56243;

	template <typename T>
	class TurnbasedPluginBase_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* _GameWorld; // 0x0
		::RPG::GameCore::TurnBasedGameMode* _GameMode; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EventType, ::DJBBAGDNFJG*>* _AutoBindEventHandlers; // 0x0
	};
}
