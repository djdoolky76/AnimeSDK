#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RollShopType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MDEOCLLALOD;
namespace RPG::GameCore { class RollShopConfigRow; }

#define RPG_GAMECORE_ROLLSHOPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA46C60)
#define RPG_GAMECORE_ROLLSHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA46840)

namespace RPG::GameCore
{
	class RollShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::MDEOCLLALOD*>* SpecialGroupList; // 0x10
		::System::UInt32 T1GroupID; // 0x18
		::System::UInt32 T4GroupID; // 0x1C
		::System::UInt32 RollShopID; // 0x20
		::System::UInt32 SecretGroupID; // 0x24
		::RPG::GameCore::RollShopType RollShopType; // 0x28
		::System::UInt32 CostItemID; // 0x2C
		::RPG::Client::TextID ShopName; // 0x30
		::System::UInt32 T3GroupID; // 0x40
		::System::UInt32 T2GroupID; // 0x44
		::System::Int32 IntroduceID; // 0x48
		::System::UInt32 CostItemNum; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollShopConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
