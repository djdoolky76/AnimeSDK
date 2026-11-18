#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16322730)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHSCROLLVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16322740)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHSCROLLVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16322970)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveStorePageController___c__DisplayClass24_1_TypeDefinitionIndex = 54708;

	template <typename T>
	class UIActivityDetectiveStorePageController___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action* refreshHandler; // 0x18
		::System::Object* CS___8__locals1; // 0x20
		::System::Int32 capturedScrollIdx; // 0x28
		::System::Int32 capturedSelectIdx; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshScrollView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHSCROLLVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshScrollView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHSCROLLVIEW_B__1_OFFSET))(this);
		}
	};
}
