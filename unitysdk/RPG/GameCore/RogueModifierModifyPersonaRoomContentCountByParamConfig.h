#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyPersonaRoomContentCountByParamConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18320)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18330)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA182E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomContentCountByParamConfig_TypeDefinitionIndex = 17796;

	class RogueModifierModifyPersonaRoomContentCountByParamConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
