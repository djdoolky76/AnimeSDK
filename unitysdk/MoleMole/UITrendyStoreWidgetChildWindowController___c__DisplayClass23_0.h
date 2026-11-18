#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UITrendyStoreWidgetChildWindowController; }

#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167EB700)
#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TAKETOYDEAL_B__0_OFFSET UNITYSDK_OFFSET(0x167EB710)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStoreWidgetChildWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 65387;

	class UITrendyStoreWidgetChildWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UITrendyStoreWidgetChildWindowController* __4__this; // 0x10
		::System::Int32 dealID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TakeToyDeal_b__0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TAKETOYDEAL_B__0_OFFSET))(this, msg);
		}
	};
}
