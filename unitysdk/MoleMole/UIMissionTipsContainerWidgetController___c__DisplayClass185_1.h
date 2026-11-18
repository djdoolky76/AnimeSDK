#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS185_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1740B410)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS185_1__PLAYMISSIONSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1740B470)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS185_1__PLAYMISSIONSYNC_B__2_OFFSET UNITYSDK_OFFSET(0x1740B420)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass185_1_TypeDefinitionIndex = 77596;

	template <typename T>
	class UIMissionTipsContainerWidgetController___c__DisplayClass185_1 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* tmp; // 0x18
		::System::Object* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS185_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS185_1__PLAYMISSIONSYNC_B__2_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS185_1__PLAYMISSIONSYNC_B__0_OFFSET))(this);
		}
	};
}
