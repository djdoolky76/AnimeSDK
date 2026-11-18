#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotQuestRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTQUESTROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182EC7F0)
#define MOLEMOLE_UIINTERKNOTQUESTROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x182ED610)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotQuestRowWidgetController___c__DisplayClass18_0_TypeDefinitionIndex = 42576;

	class UIInterKnotQuestRowWidgetController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::String* animName; // 0x10
		::MoleMole::UIInterKnotQuestRowWidgetController* __4__this; // 0x18
		::System::Action* onAnimEnd; // 0x20
		::System::Single seceonds; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTQUESTROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTQUESTROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYANIM_B__0_OFFSET))(this);
		}
	};
}
