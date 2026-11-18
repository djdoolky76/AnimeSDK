#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIZenkovTaskDetailWidgetController; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS28_0__CREATETASKDETAILITEMTIPCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x13B42DA0)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13B42D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController___c__DisplayClass28_0_TypeDefinitionIndex = 92935;

	class UIZenkovTaskDetailWidgetController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovTaskDetailWidgetController* __4__this; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateTaskDetailItemTipCallback_b__0(::IFOHGNLIAKH* c)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS28_0__CREATETASKDETAILITEMTIPCALLBACK_B__0_OFFSET))(this, c);
		}
	};
}
