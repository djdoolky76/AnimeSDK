#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSetStyleConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0B20)
#define RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0B30)
#define RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0AE0)

namespace RPG::GameCore
{
	class RogueActPersonaSetStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSetStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSetStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSetStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSetStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
