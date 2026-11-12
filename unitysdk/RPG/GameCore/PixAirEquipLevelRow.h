#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipLevelRow; }

#define RPG_GAMECORE_PIXAIREQUIPLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB34A10)
#define RPG_GAMECORE_PIXAIREQUIPLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB344A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipLevelRow_TypeDefinitionIndex = 12214;

	class PixAirEquipLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillList; // 0x10
		::System::UInt32 EquipID; // 0x18
		::System::UInt32 EquipLevel; // 0x1C
		::RPG::GameCore::FixPoint CoolDown; // 0x20
		::RPG::GameCore::FixPoint ShieldPower; // 0x28
		::RPG::GameCore::FixPoint JamPower; // 0x30
		::RPG::GameCore::FixPoint BurnPower; // 0x38
		::RPG::GameCore::FixPoint HastePower; // 0x40
		::RPG::GameCore::FixPoint ChargePower; // 0x48
		::RPG::GameCore::FixPoint DamagePower; // 0x50
		::RPG::GameCore::FixPoint MultiPower; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEquipLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEquipLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
