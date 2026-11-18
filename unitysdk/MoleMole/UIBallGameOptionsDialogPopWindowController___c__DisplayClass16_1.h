#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGJDBCPPIGM;

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED94DA0)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__SENDEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x1ED95F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController___c__DisplayClass16_1_TypeDefinitionIndex = 94921;

	template <typename T>
	class UIBallGameOptionsDialogPopWindowController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::NGJDBCPPIGM* upgradeBullet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Void _SendEvent_b__1(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__SENDEVENT_B__1_OFFSET))(this, id);
		}
	};
}
