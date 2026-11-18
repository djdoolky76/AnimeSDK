#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17B84000)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYZENKOVTIP_B__1_OFFSET UNITYSDK_OFFSET(0x17B84010)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYZENKOVTIP_B__2_OFFSET UNITYSDK_OFFSET(0x17B84120)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass148_1_TypeDefinitionIndex = 77619;

	template <typename T>
	class UIMissionTipsContainerWidgetController___c__DisplayClass148_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayZenkovTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYZENKOVTIP_B__1_OFFSET))(this);
		}

		::System::Void _PlayZenkovTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYZENKOVTIP_B__2_OFFSET))(this);
		}
	};
}
