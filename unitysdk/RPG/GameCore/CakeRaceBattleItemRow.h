#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceBattleItemUseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEBATTLEITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54C9B0)
#define RPG_GAMECORE_CAKERACEBATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D54C5C0)

namespace RPG::GameCore
{
	class CakeRaceBattleItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* BattleItemEffectParamList; // 0x10
		::System::String* BattleItemInvalidIcon; // 0x18
		::System::String* BattleItemIcon; // 0x20
		::System::String* AbilityJson; // 0x28
		::RPG::GameCore::CakeRaceBattleItemUseType BattleItemUseType; // 0x30
		::System::UInt32 BattleItemID; // 0x34
		::RPG::Client::TextID BattleItemDesc; // 0x38
		::RPG::Client::TextID BattleItemUseHint; // 0x48
		::RPG::Client::TextID BattleItemName; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBATTLEITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBattleItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBattleItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBATTLEITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
