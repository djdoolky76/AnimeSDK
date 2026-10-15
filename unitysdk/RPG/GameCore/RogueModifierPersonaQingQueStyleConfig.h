#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaQingQueStyleConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19340)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19350)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaQingQueStyleConfig_TypeDefinitionIndex = 17827;

	class RogueModifierPersonaQingQueStyleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
