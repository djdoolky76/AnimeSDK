#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierChangePersonaStyleSelectMaxRerollCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD860)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DD870)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePersonaStyleSelectMaxRerollCountConfig_TypeDefinitionIndex = 17801;

	class RogueModifierChangePersonaStyleSelectMaxRerollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
