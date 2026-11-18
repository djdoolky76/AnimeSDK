#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1674F1F0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__3_OFFSET UNITYSDK_OFFSET(0x1674F200)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__4_OFFSET UNITYSDK_OFFSET(0x1674F310)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__5_OFFSET UNITYSDK_OFFSET(0x1674F4A0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__8_OFFSET UNITYSDK_OFFSET(0x1674F440)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass190_1_TypeDefinitionIndex = 77598;

	template <typename T>
	class UIMissionTipsContainerWidgetController___c__DisplayClass190_1 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* maybeDeferredSwitch; // 0x10
		::System::Action_1<::System::Boolean>* switchAction; // 0x18
		::System::Object* CS___8__locals1; // 0x20
		::System::Action* __9__8; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__3(::System::Boolean sound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__3_OFFSET))(this, sound);
		}

		::System::Void _PlayFinishAnim_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__4_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__8_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS190_1__PLAYFINISHANIM_B__5_OFFSET))(this);
		}
	};
}
