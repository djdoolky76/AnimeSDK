#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class BattleLineupEquipmentConfig; }
namespace RPG::GameCore { class BattleLineupSkillTreePoint; }
namespace RPG::GameCore { class LineupAvatarDynamicParamItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLELINEUPAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4321D0)
#define RPG_GAMECORE_BATTLELINEUPAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D431CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupAvatarConfig_TypeDefinitionIndex = 18126;

	class BattleLineupAvatarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarId; // 0x10
		::System::UInt32 EnhancedId; // 0x14
		::System::Int32 Level; // 0x18
		::System::Int32 Promotion; // 0x1C
		::System::Int32 Rank; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BattleLineupSkillTreePoint*>* SkillTreePointList; // 0x28
		::Il2CppArray<::RPG::GameCore::BattleLineupEquipmentConfig*>* EquipmentConfigList; // 0x30
		::Il2CppArray<::System::UInt32>* RelicPropertyTypeList; // 0x38
		::System::UInt32 RelicMainValue; // 0x40
		::System::UInt32 RelicSubValue; // 0x44
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* RelicAffixPropertyMap; // 0x48
		::System::UInt32 MazeBuffId; // 0x50
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::LineupAvatarDynamicParamItem*>* RLDynamicParamList; // 0x58
		::Il2CppArray<::RPG::GameCore::LineupAvatarDynamicParamItem*>* RLServantDynamicParamList; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleLineupAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleLineupAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
