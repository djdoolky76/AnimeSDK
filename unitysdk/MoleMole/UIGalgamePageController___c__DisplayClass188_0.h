#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS188_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166B2860)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS188_0__HIDESWITCHSCENEGROUPPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x166B2870)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass188_0_TypeDefinitionIndex = 44812;

	class UIGalgamePageController___c__DisplayClass188_0 : public ::System::Object
	{
	public:
		::System::String* fadeOutAnimStr; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::System::Boolean continuePlayGroupNode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS188_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideSwitchSceneGroupPlay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS188_0__HIDESWITCHSCENEGROUPPLAY_B__0_OFFSET))(this);
		}
	};
}
