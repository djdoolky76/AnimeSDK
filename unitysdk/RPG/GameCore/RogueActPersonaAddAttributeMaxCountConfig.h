#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAddAttributeMaxCountConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970E00)
#define RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970E10)
#define RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddAttributeMaxCountConfig_TypeDefinitionIndex = 19780;

	class RogueActPersonaAddAttributeMaxCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
