#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondWithDifficultyCompConfig; }

#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B27A0)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B27B0)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2760)

namespace RPG::GameCore
{
	class RogueCondWithDifficultyCompConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
