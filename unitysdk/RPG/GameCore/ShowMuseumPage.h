#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMuseumPage; }

#define RPG_GAMECORE_SHOWMUSEUMPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1FA0)
#define RPG_GAMECORE_SHOWMUSEUMPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE1FB0)
#define RPG_GAMECORE_SHOWMUSEUMPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE1F70)

namespace RPG::GameCore
{
	class ShowMuseumPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MuseumPageType PageType; // 0x18
		::System::Boolean AutoOpenGamePlayUI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMuseumPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMuseumPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMuseumPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMuseumPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMUSEUMPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
