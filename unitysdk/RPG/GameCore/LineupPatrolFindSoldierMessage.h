#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCIHBKGHGJJ;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE7024A0)
#define RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_EMPTY_OFFSET UNITYSDK_OFFSET(0xE702460)

namespace RPG::GameCore
{
	class LineupPatrolFindSoldierMessage : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Soldier; // 0x10
		::FCIHBKGHGJJ* OfficerTask; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_CTOR_OFFSET))(this);
		}

		::System::Void Empty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_EMPTY_OFFSET))(this);
		}

	};
}
