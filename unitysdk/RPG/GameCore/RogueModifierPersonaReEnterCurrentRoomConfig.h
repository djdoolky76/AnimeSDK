#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaReEnterCurrentRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA193A0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA193B0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaReEnterCurrentRoomConfig_TypeDefinitionIndex = 17875;

	class RogueModifierPersonaReEnterCurrentRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
