#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowFightFestMainRaceUpgradeResultDialog; }

#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADC710)
#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADC720)
#define RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADC6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFightFestMainRaceUpgradeResultDialog_TypeDefinitionIndex = 21722;

	class ShowFightFestMainRaceUpgradeResultDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainRaceID; // 0x18
		::System::Boolean IsSuccess; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTFESTMAINRACEUPGRADERESULTDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
