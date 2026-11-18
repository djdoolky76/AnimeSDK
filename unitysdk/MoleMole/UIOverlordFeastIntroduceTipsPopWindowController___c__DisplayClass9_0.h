#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKPAOOFMPKC;
class JONIDDDCNNG;
namespace MoleMole { class UIOverlordFeastIntroduceTipsPopWindowController; }

#define MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179802B0)
#define MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__JUMPTODEVITEM_3_OFFSET UNITYSDK_OFFSET(0x17980A90)
#define MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__JUMPTOTODOQUEST_2_OFFSET UNITYSDK_OFFSET(0x179809E0)
#define MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__SHOULDHIDEDISHJUMP_0_OFFSET UNITYSDK_OFFSET(0x179802C0)
#define MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__SHOULDHIDEGUESTJUMP_1_OFFSET UNITYSDK_OFFSET(0x17980740)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastIntroduceTipsPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 57648;

	class UIOverlordFeastIntroduceTipsPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastIntroduceTipsPopWindowController* __4__this; // 0x10
		::CKPAOOFMPKC* overlordFeastModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_g__ShouldHideDishJump_0(::System::Int32 dishID, ::JONIDDDCNNG* gameConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JONIDDDCNNG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__SHOULDHIDEDISHJUMP_0_OFFSET))(this, dishID, gameConfig);
		}

		::System::Boolean _RefreshView_g__ShouldHideGuestJump_1(::System::Int32 guestID, ::JONIDDDCNNG* gameConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JONIDDDCNNG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__SHOULDHIDEGUESTJUMP_1_OFFSET))(this, guestID, gameConfig);
		}

		::System::Void _RefreshView_g__JumpToTodoQuest_2(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__JUMPTOTODOQUEST_2_OFFSET))(this, questID);
		}

		::System::Void _RefreshView_g__JumpToDevItem_3(::System::Int32 devID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTINTRODUCETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__JUMPTODEVITEM_3_OFFSET))(this, devID);
		}
	};
}
