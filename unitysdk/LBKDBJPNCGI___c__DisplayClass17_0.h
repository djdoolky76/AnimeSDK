#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKDBJPNCGI;
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::Promises { class IPromise; }

#define LBKDBJPNCGI___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FC330)
#define LBKDBJPNCGI___C__DISPLAYCLASS17_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xB6003C0)

inline static constexpr unsigned int LBKDBJPNCGI___c__DisplayClass17_0_TypeDefinitionIndex = 76110;

	class LBKDBJPNCGI___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* param; // 0x10
		::LBKDBJPNCGI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowTeamEditDialog_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS17_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET))(this);
		}

	};
