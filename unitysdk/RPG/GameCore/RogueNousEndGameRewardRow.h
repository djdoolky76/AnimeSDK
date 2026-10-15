#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousEndGameRewardRow; }

#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F5AA0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9F5400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousEndGameRewardRow_TypeDefinitionIndex = 14925;

	class RogueNousEndGameRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID TabTitle; // 0x18
		::System::UInt32 EndGameRewardID; // 0x28
		::System::UInt32 QuestID; // 0x2C
		::System::UInt32 UnlockID; // 0x30
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
