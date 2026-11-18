#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIGNPIIKPDN.h"
#include "unitysdk/MoleMole/UIGeneralNewsBubbleWidgetController_NewsBubbleState.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18E5F220)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST_ONCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x18E5F230)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18E54740)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST___BASE_ONCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x18E5F780)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController_NewsBubbleStateAllowWhiteList_TypeDefinitionIndex = 69185;

	class UIGeneralNewsBubbleWidgetController_NewsBubbleStateAllowWhiteList : public ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* hideController; // 0x18

		::System::Void _ctor(::MoleMole::UIGeneralNewsBubbleWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST__CTOR_OFFSET))(this, controller);
		}

		::IIGNPIIKPDN get_State()
		{
			return ((::IIGNPIIKPDN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST_GET_STATE_OFFSET))(this);
		}

		::System::Void OnChangeState(::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* lastState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST_ONCHANGESTATE_OFFSET))(this, lastState);
		}

		::System::Void __base_OnChangeState(::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEWSBUBBLESTATEALLOWWHITELIST___BASE_ONCHANGESTATE_OFFSET))(this, P0);
		}
	};
}
