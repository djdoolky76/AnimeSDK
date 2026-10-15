#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMuseumMarketPage; }

#define RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1EA0)
#define RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE1EB0)
#define RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE1DE0)

namespace RPG::GameCore
{
	class ShowMuseumMarketPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMuseumMarketPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMuseumMarketPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMuseumMarketPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMuseumMarketPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMMARKETPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
