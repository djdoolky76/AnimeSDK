#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentAtlasRow; }

#define RPG_GAMECORE_EQUIPMENTATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64D870)
#define RPG_GAMECORE_EQUIPMENTATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D64D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentAtlasRow_TypeDefinitionIndex = 13246;

	class EquipmentAtlasRow : public ::System::Object
	{
	public:
		::System::Boolean DefaultUnlock; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 EquipmentID; // 0x14
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
