#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPunkLordConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8A870)
#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA8A300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordConfigRow_TypeDefinitionIndex = 12346;

	class ActivityPunkLordConfigRow : public ::System::Object
	{
	public:
		::System::String* ManikinConfig; // 0x10
		::System::String* MonsterPic; // 0x18
		::System::String* ShowMonster; // 0x20
		::System::UInt32 TurnLimit; // 0x28
		::System::UInt32 PluralHP; // 0x2C
		::RPG::Client::TextID MonsterBuff; // 0x30
		::System::UInt32 SummonPoint; // 0x40
		::System::UInt32 ExistTime; // 0x44
		::System::UInt32 KillPoint; // 0x48
		::System::UInt32 AssistPoint; // 0x4C
		::System::UInt32 ID; // 0x50
		::RPG::GameCore::PunkLordMonsterRare MonsterRare; // 0x54
		::System::UInt32 MonsterLevel; // 0x58
		::System::UInt32 WorldLevel; // 0x5C
		::RPG::GameCore::PunkLordGroupType GroupType; // 0x60
		::System::UInt32 RaidID; // 0x64
		::System::UInt32 MonsterHP; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityPunkLordConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityPunkLordConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
