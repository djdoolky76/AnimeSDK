#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2BattleItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB625A0)
#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB61F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BattleItemRow_TypeDefinitionIndex = 11999;

	class MatchThreeV2BattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemIcon; // 0x10
		::System::String* ItemEffectJson; // 0x18
		::System::UInt32 LevelUpCost; // 0x20
		::System::UInt32 BattleItemID; // 0x24
		::RPG::Client::TextID ItemUseFailHint; // 0x28
		::RPG::Client::TextID ItemLevelUpDesc; // 0x38
		::RPG::Client::TextID ItemHint; // 0x48
		::System::Boolean IsUnlock; // 0x58
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MatchThreePropType PropType; // 0x5C
		::RPG::Client::TextID ItemDesc; // 0x60
		::System::UInt32 ItemUseCount; // 0x70
		::System::UInt32 ItemLevel; // 0x74
		::System::UInt32 Order; // 0x78
		::System::UInt32 InputGridCount; // 0x7C
		::RPG::Client::TextID ItemName; // 0x80
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
