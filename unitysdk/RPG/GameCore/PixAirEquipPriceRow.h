#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipPriceRow; }

#define RPG_GAMECORE_PIXAIREQUIPPRICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91B9C0)
#define RPG_GAMECORE_PIXAIREQUIPPRICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91B810)

namespace RPG::GameCore
{
	class PixAirEquipPriceRow : public ::System::Object
	{
	public:
		::System::UInt32 BuyPrice; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 SellPrice; // 0x18
		::RPG::GameCore::PixAirSlotType SlotType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPPRICEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEquipPriceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEquipPriceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPPRICEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
