#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HJDNCNIPOKM;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD470030)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_DESTROYGAME_OFFSET UNITYSDK_OFFSET(0xD46FF10)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xD46FB60)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_TRYSTARTGAME_OFFSET UNITYSDK_OFFSET(0xD46FCE0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xD46FFD0)

namespace RPG::Client::LittleGame
{
	class MatchThreeGameController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* ChessBoardView; // 0x18
		::Il2CppArray<::UnityEngine::RectTransform*>* BirdAdaptivePositions; // 0x20
		::HJDNCNIPOKM* _EcsInstance; // 0x28
		::RPG::Client::LittleGame::MatchThreeTimelineBattleField* _BattleField; // 0x30
		// static const ::System::Object ROW_COUNT; // 0x0
		// static const ::System::Object COLUMN_COUNT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void TryStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_TRYSTARTGAME_OFFSET))(this);
		}

		::System::Void DestroyGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER_DESTROYGAME_OFFSET))(this);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEGAMECONTROLLER__ONSCREENSIZECHANGED_OFFSET))(this, a1);
		}

	};
}
