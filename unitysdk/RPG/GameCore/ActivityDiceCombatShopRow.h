#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatShopRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D353120)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D352ED0)

namespace RPG::GameCore
{
	class ActivityDiceCombatShopRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::Il2CppArray<::System::UInt32>* GoodsList; // 0x18
		::System::UInt32 DiceShopID; // 0x20
		::System::UInt32 ShopSortID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceCombatShopRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceCombatShopRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
