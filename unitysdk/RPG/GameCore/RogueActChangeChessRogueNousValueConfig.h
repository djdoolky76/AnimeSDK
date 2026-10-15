#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeChessRogueNousValueConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D310)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D320)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueNousValueConfig_TypeDefinitionIndex = 19642;

	class RogueActChangeChessRogueNousValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
