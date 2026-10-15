#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemMultiMaterialConfigRow; }

#define RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D799AF0)
#define RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D799920)

namespace RPG::GameCore
{
	class ItemMultiMaterialConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ExchangeRare4; // 0x10
		::System::UInt32 ItemID; // 0x14
		::RPG::GameCore::ItemSubType ItemSubType; // 0x18
		::System::UInt32 ExchangeRare2; // 0x1C
		::System::UInt32 ExchangeRare3; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemMultiMaterialConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemMultiMaterialConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
