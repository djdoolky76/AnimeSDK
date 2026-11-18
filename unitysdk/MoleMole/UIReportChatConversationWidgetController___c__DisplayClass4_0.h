#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIReportChatConversationWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC4A60)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x14CC4A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportChatConversationWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 69059;

	class UIReportChatConversationWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Boolean, ::System::Boolean>* OnSelectItem; // 0x10
		::MoleMole::UIReportChatConversationWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
