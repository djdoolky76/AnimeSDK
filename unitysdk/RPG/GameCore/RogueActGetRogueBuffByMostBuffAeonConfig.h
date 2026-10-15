#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueBuffByMostBuffAeonConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E0F0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E100)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E0B0)

namespace RPG::GameCore
{
	class RogueActGetRogueBuffByMostBuffAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
