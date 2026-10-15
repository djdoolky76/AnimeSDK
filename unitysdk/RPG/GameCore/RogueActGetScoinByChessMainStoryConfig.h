#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetScoinByChessMainStoryConfig; }

#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970BC0)
#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970BD0)
#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetScoinByChessMainStoryConfig_TypeDefinitionIndex = 19651;

	class RogueActGetScoinByChessMainStoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
