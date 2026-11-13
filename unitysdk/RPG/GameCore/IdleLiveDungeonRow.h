#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveDungeonRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEDUNGEONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE85170)
#define RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE84B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveDungeonRow_TypeDefinitionIndex = 11794;

	class IdleLiveDungeonRow : public ::System::Object
	{
	public:
		::System::String* MonsterFigure; // 0x10
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* RecommondTagList; // 0x18
		::System::String* BGMState; // 0x20
		::System::String* BossIconPath; // 0x28
		::System::String* BossFigurePath; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 CrystalPerHourIncrease; // 0x48
		::System::UInt32 StageID; // 0x4C
		::System::UInt32 IncomeHpProgress; // 0x50
		::System::UInt32 RewardID; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 TicketPerHourIncrease; // 0x5C
		::System::UInt32 BattleTime; // 0x60
		::System::UInt32 ChatPhase; // 0x64
		::System::UInt32 MaxHpProgress; // 0x68
		::System::UInt32 UnlockChapterIndex; // 0x6C
		::System::UInt32 ChestPerHourIncrease; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveDungeonRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveDungeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
