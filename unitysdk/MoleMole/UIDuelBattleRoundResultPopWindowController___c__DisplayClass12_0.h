#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1800EB20)
#define MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__ONBGBUTTONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1800EB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleRoundResultPopWindowController___c__DisplayClass12_0_TypeDefinitionIndex = 47176;

	class UIDuelBattleRoundResultPopWindowController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* onClosed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBgButtonClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__ONBGBUTTONCLICK_B__0_OFFSET))(this);
		}
	};
}
