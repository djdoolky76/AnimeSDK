#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLJGMELKNCC_LKHJFCFGKEK;
namespace MoleMole { class UIPrivateMessageReplyWidgetController; }

#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167997A0)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x167997B0)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONSCROLLITEMUPDATE_G__GETFINALREPLYTYPE_1_OFFSET UNITYSDK_OFFSET(0x16799860)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageReplyWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 80480;

	class UIPrivateMessageReplyWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPrivateMessageReplyWidgetController* __4__this; // 0x10
		::MLJGMELKNCC_LKHJFCFGKEK* singleMessage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}

		::System::Int32 _OnScrollItemUpdate_g__GetFinalReplyType_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONSCROLLITEMUPDATE_G__GETFINALREPLYTYPE_1_OFFSET))(this);
		}
	};
}
