#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPunkLordConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E580240)
#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E57FCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordConfigRow_TypeDefinitionIndex = 12346;

	class ActivityPunkLordConfigRow : public ::System::Object
	{
	public:
		::System::String* MonsterPic; // 0x10
		::System::String* ShowMonster; // 0x18
		::System::String* ManikinConfig; // 0x20
		::System::UInt32 KillPoint; // 0x28
		::System::UInt32 TurnLimit; // 0x2C
		::RPG::GameCore::PunkLordMonsterRare MonsterRare; // 0x30
		::System::UInt32 ID; // 0x34
		::System::UInt32 ExistTime; // 0x38
		::System::UInt32 AssistPoint; // 0x3C
		::System::UInt32 RaidID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MonsterBuff; // 0x48
		::RPG::GameCore::PunkLordGroupType GroupType; // 0x58
		::System::UInt32 SummonPoint; // 0x5C
		::System::UInt32 MonsterHP; // 0x60
		::System::UInt32 PluralHP; // 0x64
		::System::UInt32 WorldLevel; // 0x68
		::System::UInt32 MonsterLevel; // 0x6C
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
