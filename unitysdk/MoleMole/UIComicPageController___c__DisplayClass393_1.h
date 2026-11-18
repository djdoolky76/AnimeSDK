#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Comic { class MonoComicDecorateEventBase; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS393_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184A40F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS393_1__HIDEEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x184A4100)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass393_1_TypeDefinitionIndex = 84228;

	template <typename T>
	class UIComicPageController___c__DisplayClass393_1 : public ::System::Object
	{
	public:
		::MoleMole::Comic::MonoComicDecorateEventBase* decoEvent; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS393_1__CTOR_OFFSET))(this);
		}

		::System::Void _HideEvent_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS393_1__HIDEEVENT_B__1_OFFSET))(this);
		}
	};
}
