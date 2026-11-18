#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UIImgText; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17950D40)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS28_1__REFRESHINTERKNOTICON_B__0_OFFSET UNITYSDK_OFFSET(0x17950D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c__DisplayClass28_1_TypeDefinitionIndex = 63671;

	template <typename T>
	class UIInterKnotPostRowWidgetController___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UIImgText* imgtext; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInterknotIcon_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS28_1__REFRESHINTERKNOTICON_B__0_OFFSET))(this);
		}
	};
}
