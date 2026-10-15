#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangePersonaStyleLevelConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D5B0)
#define RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D5C0)
#define RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangePersonaStyleLevelConfig_TypeDefinitionIndex = 19772;

	class RogueActChangePersonaStyleLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
