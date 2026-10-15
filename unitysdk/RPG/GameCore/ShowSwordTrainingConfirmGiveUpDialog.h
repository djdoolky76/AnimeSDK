#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowSwordTrainingConfirmGiveUpDialog; }

#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE59B0)
#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE59C0)
#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE58F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSwordTrainingConfirmGiveUpDialog_TypeDefinitionIndex = 20850;

	class ShowSwordTrainingConfirmGiveUpDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
