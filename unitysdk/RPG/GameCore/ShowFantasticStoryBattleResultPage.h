#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowFantasticStoryBattleResultPage; }

#define RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADC480)
#define RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADC490)
#define RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADC3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFantasticStoryBattleResultPage_TypeDefinitionIndex = 23464;

	class ShowFantasticStoryBattleResultPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFantasticStoryBattleResultPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFantasticStoryBattleResultPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFANTASTICSTORYBATTLERESULTPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
