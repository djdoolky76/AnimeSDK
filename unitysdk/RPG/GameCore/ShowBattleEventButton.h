#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleEventButton; }

#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA280)
#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA290)
#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleEventButton_TypeDefinitionIndex = 22942;

	class ShowBattleEventButton : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleEventButton* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleEventButton*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleEventButton* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleEventButton*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
