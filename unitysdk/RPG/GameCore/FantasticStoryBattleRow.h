#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryBattleRow; }
namespace System { class String; }

#define RPG_GAMECORE_FANTASTICSTORYBATTLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8E280)
#define RPG_GAMECORE_FANTASTICSTORYBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC8D9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryBattleRow_TypeDefinitionIndex = 11516;

	class FantasticStoryBattleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendAvatar; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::Il2CppArray<::System::UInt32>* DisplayMonsterList; // 0x20
		::Il2CppArray<::System::UInt32>* AvailableBuffSlotID; // 0x28
		::System::String* FigurePath; // 0x30
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x38
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x40
		::Il2CppArray<::System::UInt32>* TextJoinIDListChange; // 0x48
		::Il2CppArray<::System::UInt32>* TextJoinIDList; // 0x50
		::System::UInt32 PlaneID; // 0x58
		::System::UInt32 ActivityModuleID; // 0x5C
		::System::UInt32 UnlockChapterID; // 0x60
		::System::UInt32 EventID; // 0x64
		::System::UInt32 PreBattleID; // 0x68
		::System::UInt32 EnvironmentBuffID; // 0x6C
		::System::UInt32 FinishQuest; // 0x70
		::System::UInt32 TurnLimit; // 0x74
		::RPG::Client::TextID BookContextChange; // 0x78
		::RPG::Client::TextID BookContext; // 0x88
		::RPG::Client::TextID Name; // 0x98
		::RPG::Client::TextID BookTitle; // 0xA8
		::System::UInt32 BattleAreaGroupID; // 0xB8
		::System::UInt32 BattleAreaID; // 0xBC
		::System::UInt32 BattleID; // 0xC0
		::System::UInt32 FloorID; // 0xC4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBATTLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FantasticStoryBattleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FantasticStoryBattleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBATTLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
