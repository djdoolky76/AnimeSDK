#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;
namespace MoleMole { class UIDisplayCasePreviewWidgetController; }

#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17066210)
#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__0_OFFSET UNITYSDK_OFFSET(0x17066220)
#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__1_OFFSET UNITYSDK_OFFSET(0x17066450)
#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_G__ONFAIL_2_OFFSET UNITYSDK_OFFSET(0x170662E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePreviewWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 66404;

	class UIDisplayCasePreviewWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDisplayCasePreviewWidgetController* __4__this; // 0x10
		::System::UInt32 friendId; // 0x18
		::System::Int32 idx; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchFriend_b__0(::JGBMOOJHMBF* info)
		{
			return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__0_OFFSET))(this, info);
		}

		::System::Void _SwitchFriend_b__1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__1_OFFSET))(this, _);
		}

		::System::Void _SwitchFriend_g__OnFail_2(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_G__ONFAIL_2_OFFSET))(this, id);
		}
	};
}
