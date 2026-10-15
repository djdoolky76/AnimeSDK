#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLHACPDMPIC;
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::Promises { class IPromise; }

#define NLHACPDMPIC___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC68E00)
#define NLHACPDMPIC___C__DISPLAYCLASS19_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xBC6B560)

	class NLHACPDMPIC___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::NLHACPDMPIC* __4__this; // 0x10
		::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* param; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowTeamEditDialog_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS19_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET))(this);
		}

	};
