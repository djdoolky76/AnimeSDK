#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLMEFBGGGM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class Action; }

#define GPLMEFBGGGM___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5F820)
#define GPLMEFBGGGM___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x15B60090)
#define GPLMEFBGGGM___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__2_OFFSET UNITYSDK_OFFSET(0x15B600E0)

inline static constexpr unsigned int GPLMEFBGGGM___c__DisplayClass4_0_TypeDefinitionIndex = 60762;

	class GPLMEFBGGGM___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::GPLMEFBGGGM* __4__this; // 0x10
		::System::Action* onSwitchFinish; // 0x18
		::RPG::GameCore::StoryCharacterRow* playerRow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMEFBGGGM___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateStoryPlayer_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__0_OFFSET))(this, a1);
		}

		::System::Void __CreateStoryPlayer_b__2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__2_OFFSET))(this, a1);
		}

	};
