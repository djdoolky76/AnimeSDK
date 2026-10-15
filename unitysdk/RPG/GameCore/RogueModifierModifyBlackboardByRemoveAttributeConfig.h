#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierModifyBlackboardBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyBlackboardByRemoveAttributeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA040)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EA050)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EA0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBlackboardByRemoveAttributeConfig_TypeDefinitionIndex = 17697;

	class RogueModifierModifyBlackboardByRemoveAttributeConfig : public ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardByRemoveAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYREMOVEATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
