#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS94_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199BAE70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS94_0__UPDATETEXTCALLBACK_B__4_OFFSET UNITYSDK_OFFSET(0x199BAE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass94_0_TypeDefinitionIndex = 80539;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* root; // 0x10
		::MoleMole::UIBubbleTips* bubbleTips; // 0x18
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS94_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS94_0__UPDATETEXTCALLBACK_B__4_OFFSET))(this);
		}
	};
}
