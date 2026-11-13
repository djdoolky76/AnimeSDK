#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightRoleStarConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F200)
#define RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5E510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleStarConfigRow_TypeDefinitionIndex = 13600;

	class GridFightRoleStarConfigRow : public ::System::Object
	{
	public:
		::System::String* BackAbilityName; // 0x10
		::Il2CppArray<::System::UInt32>* BESkillIDList; // 0x18
		::System::String* JsonOverrideConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* BackParamList; // 0x28
		::System::String* AIPath; // 0x30
		::Il2CppArray<::System::UInt32>* SkillOverrideDest; // 0x38
		::Il2CppArray<::System::UInt32>* BackShowSkillIDList; // 0x40
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyModifyList; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x50
		::Il2CppArray<::System::UInt32>* SkillOverrideSrc; // 0x58
		::Il2CppArray<::System::UInt32>* FrontShowSkillIDList; // 0x60
		::RPG::GameCore::FixPoint BackSpeedAddedRatio; // 0x68
		::RPG::GameCore::FixPoint BackSpeedRewrite; // 0x70
		::RPG::GameCore::FixPoint FrontPowerBase; // 0x78
		::RPG::GameCore::FixPoint BackMaxSP; // 0x80
		::RPG::GameCore::FixPoint StanceDamageDisplay; // 0x88
		::RPG::GameCore::FixPoint LuckDamage; // 0x90
		::RPG::GameCore::FixPoint BackPowerBase; // 0x98
		::RPG::GameCore::FixPoint BackInitialSP; // 0xA0
		::System::UInt32 Star; // 0xA8
		::System::UInt32 ID; // 0xAC
		::RPG::Client::TextID FrontOneWordDesc; // 0xB0
		::RPG::GameCore::FixPoint ExtraHealBase; // 0xC0
		::RPG::GameCore::FixPoint LuckChance; // 0xC8
		::RPG::Client::TextID BackOneWordDesc; // 0xD0
		::RPG::GameCore::FixPoint ExtraShieldBase; // 0xE0
		::System::UInt32 BEID; // 0xE8
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint BackEnergyBar; // 0xF0
		::RPG::GameCore::FixPoint BackInitialEnergyBar; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleStarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleStarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
