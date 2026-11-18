#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NKJFLOBLNNF.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17845BE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0____SETUPUPDATEMISSIONCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x17845BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_0_TypeDefinitionIndex = 80546;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::MoleMole::UIBubbleTips* bubbleTips; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Void ___SetupUpdateMissionCallback_b__0(::NKJFLOBLNNF data)
		{
			return ((::System::Void(*)(::PVOID, ::NKJFLOBLNNF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS88_0____SETUPUPDATEMISSIONCALLBACK_B__0_OFFSET))(this, data);
		}
	};
}
