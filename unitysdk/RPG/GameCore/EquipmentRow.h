#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerLightconeRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentRow; }
namespace System { class String; }

#define RPG_GAMECORE_EQUIPMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67FCE0)
#define RPG_GAMECORE_EQUIPMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D67BAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentRow_TypeDefinitionIndex = 13236;

	class EquipmentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* BattleDialogOffset; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* ThumbnailPath; // 0x20
		::Il2CppArray<::System::Single>* GachaResultOffset; // 0x28
		::Il2CppArray<::System::Single>* AvatarDetailOffset; // 0x30
		::Il2CppArray<::System::UInt32>* RankUpCostList; // 0x38
		::Il2CppArray<::System::Single>* ItemRightPanelOffset; // 0x40
		::RPG::Client::TextID EquipmentDesc; // 0x48
		::System::UInt32 SkillID; // 0x58
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x5C
		::System::UInt32 ExpType; // 0x60
		::System::UInt32 CoinCost; // 0x64
		::System::UInt32 ExpProvide; // 0x68
		::System::UInt32 MaxRank; // 0x6C
		::System::Boolean Release; // 0x70
		::System::Byte _padding0[0x3];
		::System::UInt32 EquipmentID; // 0x74
		::RPG::Client::TextID EquipmentName; // 0x78
		::System::UInt32 MaxPromotion; // 0x88
		::RPG::GameCore::CombatPowerLightconeRarityType Rarity; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EquipmentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
