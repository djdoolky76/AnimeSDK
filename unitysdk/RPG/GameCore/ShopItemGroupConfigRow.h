#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopItemGroupConfigRow; }

#define RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA85D0)
#define RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAA8420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopItemGroupConfigRow_TypeDefinitionIndex = 15103;

	class ShopItemGroupConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RotateOrder; // 0x10
		::System::UInt32 ItemID; // 0x14
		::RPG::GameCore::GroupType GroupType; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShopItemGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShopItemGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
