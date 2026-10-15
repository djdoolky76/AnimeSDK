#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipEnchantRow; }

#define RPG_GAMECORE_PIXAIREQUIPENCHANTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EC940)
#define RPG_GAMECORE_PIXAIREQUIPENCHANTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8EC7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipEnchantRow_TypeDefinitionIndex = 12159;

	class PixAirEquipEnchantRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillList; // 0x10
		::RPG::GameCore::PixAirEnchantmentType EnchantType; // 0x18
		::System::UInt32 EquipID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPENCHANTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEquipEnchantRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEquipEnchantRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPENCHANTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
