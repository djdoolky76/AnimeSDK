#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveNodeRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVENODEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88AC0)
#define RPG_GAMECORE_IDLELIVENODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE88440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveNodeRow_TypeDefinitionIndex = 11752;

	class IdleLiveNodeRow : public ::System::Object
	{
	public:
		::System::String* BGMState; // 0x10
		::Il2CppArray<::System::UInt32>* SubNodeList; // 0x18
		::Il2CppArray<::System::UInt32>* PossibleEventIDList; // 0x20
		::System::Boolean CanTriggerAmphoreusBuff; // 0x28
		::System::Boolean IsAutoNextNode; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 Index; // 0x2C
		::System::UInt32 ChatPhase; // 0x30
		::System::UInt32 EmojiPhaseID; // 0x34
		::System::UInt32 ChestPerHour; // 0x38
		::System::UInt32 TicketPerHour; // 0x3C
		::System::UInt32 BossID; // 0x40
		::System::UInt32 CrystalPerHour; // 0x44
		::System::UInt32 ChapterIndex; // 0x48
		::System::UInt32 ChestLevel; // 0x4C
		::System::UInt32 LiveRoomExpGainOnFinished; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint TimeLimitRankA; // 0x58
		::RPG::GameCore::FixPoint TimeLimitRankS; // 0x60
		::System::UInt32 RewardID; // 0x68
		::RPG::GameCore::IdleLiveNodeType Type; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveNodeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveNodeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
