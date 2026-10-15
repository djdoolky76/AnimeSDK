#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueBuffByGroupsConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9706D0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9706E0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByGroupsConfig_TypeDefinitionIndex = 19661;

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
