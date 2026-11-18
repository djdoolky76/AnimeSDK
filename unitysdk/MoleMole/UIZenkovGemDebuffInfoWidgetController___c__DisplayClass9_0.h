#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovGemDebuffInfoWidgetController; }

#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE53DDF0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__HIDEWITHFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0xE53DE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffInfoWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 87210;

	class UIZenkovGemDebuffInfoWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovGemDebuffInfoWidgetController* __4__this; // 0x10
		::System::Int32 generation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideWithFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__HIDEWITHFADEOUT_B__0_OFFSET))(this);
		}
	};
}
