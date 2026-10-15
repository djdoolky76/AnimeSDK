#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyHexEquipmentCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA600)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EA610)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EA5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyHexEquipmentCountConfig_TypeDefinitionIndex = 17752;

	class RogueModifierModifyHexEquipmentCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
