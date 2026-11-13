#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }
namespace RPG::GameCore { class BattleLineupEquipmentConfig; }
namespace RPG::GameCore { class BattleLineupSkillTreePoint; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DE2B0)
#define RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1C2DDE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarLineupKeyLevelConfig_TypeDefinitionIndex = 18296;

	class AvatarLineupKeyLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Level; // 0x10
		::System::Int32 Promotion; // 0x14
		::System::Int32 Rank; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* ExRankIDList; // 0x20
		::System::Boolean IsOnLine; // 0x28
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::BattleLineupSkillTreePoint*>* SkillTreePointList; // 0x30
		::System::String* SkillTreePointPreset; // 0x38
		::Il2CppArray<::RPG::GameCore::BattleLineupEquipmentConfig*>* EquipmentConfigList; // 0x40
		::Il2CppArray<::System::UInt32>* RelicPropertyTypeList; // 0x48
		::System::UInt32 RelicMainValue; // 0x50
		::System::UInt32 RelicSubValue; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarLineupKeyLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarLineupKeyLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPKEYLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
