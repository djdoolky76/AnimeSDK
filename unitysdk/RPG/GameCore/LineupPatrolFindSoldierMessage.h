#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCIHBKGHGJJ;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1925B740)
#define RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_EMPTY_OFFSET UNITYSDK_OFFSET(0x1925B700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupPatrolFindSoldierMessage_TypeDefinitionIndex = 53534;

	class LineupPatrolFindSoldierMessage : public ::System::Object
	{
	public:
		::FCIHBKGHGJJ* OfficerTask; // 0x10
		::RPG::GameCore::GameEntity* Soldier; // 0x18
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
