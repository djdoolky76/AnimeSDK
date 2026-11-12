#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeRoyaleBattleItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA746F0)
#define RPG_GAMECORE_MATCHTHREEROYALEBATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA742F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeRoyaleBattleItemRow_TypeDefinitionIndex = 12148;

	class MatchThreeRoyaleBattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemIcon; // 0x10
		::RPG::Client::TextID ItemDesc; // 0x18
		::RPG::Client::TextID ItemUseFailHint; // 0x28
		::RPG::Client::TextID ItemHint; // 0x38
		::RPG::GameCore::MatchThreePropType PropType; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ItemName; // 0x50
		::System::UInt32 BattleItemID; // 0x60
		::System::UInt32 InputGridCount; // 0x64
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
