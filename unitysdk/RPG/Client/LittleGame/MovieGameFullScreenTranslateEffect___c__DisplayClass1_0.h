#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class MovieGameFullScreenTranslateEffect; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD477590)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0__INITIALIZEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xD477C50)

namespace RPG::Client::LittleGame
{
	class MovieGameFullScreenTranslateEffect___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FDPALAEIHPB* contexts; // 0x10
		::RPG::Client::LittleGame::MovieGameFullScreenTranslateEffect* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _InitializeView_b__0(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0__INITIALIZEVIEW_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
