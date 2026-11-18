#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS143_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17B835E0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS143_1__PLAYHDDHANGTIP_B__2_OFFSET UNITYSDK_OFFSET(0x17B835F0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS143_1__PLAYHDDHANGTIP_B__3_OFFSET UNITYSDK_OFFSET(0x17B83700)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass143_1_TypeDefinitionIndex = 77604;

	template <typename T>
	class UIMissionTipsContainerWidgetController___c__DisplayClass143_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Action* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS143_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS143_1__PLAYHDDHANGTIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS143_1__PLAYHDDHANGTIP_B__3_OFFSET))(this);
		}
	};
}
