#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAAEMKFJGJE;
class FGCOIBFFCHB;
class FOLOGHLENFB;
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC5AD0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x18CC5AE0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x18CC66A0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_G___CHANGECARD_0_OFFSET UNITYSDK_OFFSET(0x18CC5AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionItemWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 80611;

	class UIHollowCardOptionItemWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::FOLOGHLENFB* template2; // 0x10
		::FGCOIBFFCHB* icon1; // 0x18
		::FGCOIBFFCHB* icon2; // 0x20
		::MoleMole::UIHollowCardOptionItemWidgetController* __4__this; // 0x28
		::CAAEMKFJGJE* choice; // 0x30
		::System::String* icon1Str; // 0x38
		::FOLOGHLENFB* template1; // 0x40
		::System::String* icon2Str; // 0x48
		::System::Int32 itemid1; // 0x50
		::System::Int32 itemid2; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_g___ChangeCard_0(::System::Boolean useAnim, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_G___CHANGECARD_0_OFFSET))(this, useAnim, finishCallback);
		}

		::System::Void _RefreshView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__4_OFFSET))(this);
		}
	};
}
