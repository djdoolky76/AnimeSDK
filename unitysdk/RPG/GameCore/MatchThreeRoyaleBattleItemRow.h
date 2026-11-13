#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeRoyaleBattleItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB60770)
#define RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB60370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeRoyaleBattleItemRow_TypeDefinitionIndex = 12148;

	class MatchThreeRoyaleBattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemIcon; // 0x10
		::RPG::GameCore::MatchThreePropType PropType; // 0x18
		::System::UInt32 BattleItemID; // 0x1C
		::RPG::Client::TextID ItemHint; // 0x20
		::RPG::Client::TextID ItemName; // 0x30
		::System::UInt32 InputGridCount; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ItemUseFailHint; // 0x48
		::RPG::Client::TextID ItemDesc; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
