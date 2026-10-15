#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRogueShopInfoDialog; }

#define RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3940)
#define RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE3950)
#define RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3910)

namespace RPG::GameCore
{
	class ShowRogueShopInfoDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID InfoDesc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueShopInfoDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueShopInfoDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueShopInfoDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueShopInfoDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESHOPINFODIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
