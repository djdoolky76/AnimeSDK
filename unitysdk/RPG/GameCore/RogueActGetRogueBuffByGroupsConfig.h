#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueBuffByGroupsConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E030)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E040)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99DFF0)

namespace RPG::GameCore
{
	class RogueActGetRogueBuffByGroupsConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
