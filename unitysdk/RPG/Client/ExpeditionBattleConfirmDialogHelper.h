#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConfirmDialogContext; }
namespace System { class Action; }

#define RPG_CLIENT_EXPEDITIONBATTLECONFIRMDIALOGHELPER_SHOWBATTLEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0xCE46180)

namespace RPG::Client
{
	class ExpeditionBattleConfirmDialogHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::ConfirmDialogContext* ShowBattleErrorDialog(::System::Action* a1)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLECONFIRMDIALOGHELPER_SHOWBATTLEERRORDIALOG_OFFSET))(a1);
		}

	};
}
