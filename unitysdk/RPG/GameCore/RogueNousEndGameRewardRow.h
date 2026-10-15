#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousEndGameRewardRow; }

#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA23340)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA22CA0)

namespace RPG::GameCore
{
	class RogueNousEndGameRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 EndGameRewardID; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::System::UInt32 QuestID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TabTitle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousEndGameRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousEndGameRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
