#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2BattleItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA76520)
#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA75EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BattleItemRow_TypeDefinitionIndex = 11999;

	class MatchThreeV2BattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemEffectJson; // 0x10
		::System::String* ItemIcon; // 0x18
		::RPG::Client::TextID ItemHint; // 0x20
		::RPG::Client::TextID ItemLevelUpDesc; // 0x30
		::RPG::Client::TextID ItemDesc; // 0x40
		::RPG::Client::TextID ItemUseFailHint; // 0x50
		::RPG::GameCore::MatchThreePropType PropType; // 0x60
		::System::UInt32 BattleItemID; // 0x64
		::System::UInt32 InputGridCount; // 0x68
		::System::Boolean IsUnlock; // 0x6C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID ItemName; // 0x70
		::System::UInt32 ItemLevel; // 0x80
		::System::UInt32 LevelUpCost; // 0x84
		::System::UInt32 Order; // 0x88
		::System::UInt32 ItemUseCount; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2BattleItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2BattleItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
