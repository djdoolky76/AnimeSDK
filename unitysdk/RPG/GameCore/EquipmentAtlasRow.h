#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentAtlasRow; }

#define RPG_GAMECORE_EQUIPMENTATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67B2F0)
#define RPG_GAMECORE_EQUIPMENTATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D67B1D0)

namespace RPG::GameCore
{
	class EquipmentAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 EquipmentID; // 0x10
		::System::Boolean DefaultUnlock; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTATLASROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EquipmentAtlasRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EquipmentAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
