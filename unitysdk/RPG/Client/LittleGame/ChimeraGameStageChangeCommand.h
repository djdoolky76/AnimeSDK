#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraGameStage.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0xD422F30)
#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD422EE0)

namespace RPG::Client::LittleGame
{
	class ChimeraGameStageChangeCommand : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraGameStage _NewStage; // 0x10
		::System::Void _ctor(::RPG::Client::LittleGame::ChimeraGameStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraGameStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

	};
}
