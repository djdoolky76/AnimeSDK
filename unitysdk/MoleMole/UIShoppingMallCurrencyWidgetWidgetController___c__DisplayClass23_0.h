#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LIBOIKJGAIH.h"

namespace MoleMole { class GroceryItemIconV2Context; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIShoppingMallCurrencyWidgetWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166D97E0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x166D97F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCurrencyWidgetWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 77109;

	class UIShoppingMallCurrencyWidgetWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIShoppingMallCurrencyWidgetWidgetController* __4__this; // 0x10
		::MoleMole::GroceryItemIconV2Context* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__2(::LIBOIKJGAIH binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITVIEW_B__2_OFFSET))(this, binderInfo);
		}
	};
}
