#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EB4A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EB4B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EB460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig_TypeDefinitionIndex = 17779;

	class RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyTournRoomTypeProbabilityByOpenChestNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMTYPEPROBABILITYBYOPENCHESTNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
