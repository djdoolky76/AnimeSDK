#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActEmptyConfig; }

#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970190)
#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9701A0)
#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActEmptyConfig_TypeDefinitionIndex = 19703;

	class RogueActEmptyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActEmptyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActEmptyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
