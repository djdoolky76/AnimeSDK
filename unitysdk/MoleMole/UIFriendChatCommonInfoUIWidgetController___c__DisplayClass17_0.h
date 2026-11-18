#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class GBINEPNHKKO;
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1986F930)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS17_0__INITCIRCLESELFICONBTN_B__0_OFFSET UNITYSDK_OFFSET(0x1986F940)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS17_0__INITCIRCLESELFICONBTN_B__1_OFFSET UNITYSDK_OFFSET(0x1986FC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatCommonInfoUIWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 50713;

	class UIFriendChatCommonInfoUIWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* __4__this; // 0x10
		::System::Func_2<::GBINEPNHKKO*, ::System::Boolean>* __9__1; // 0x18
		::FBHPDPBIGPK* brief; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCircleSelfIconBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS17_0__INITCIRCLESELFICONBTN_B__0_OFFSET))(this);
		}

		::System::Boolean _InitCircleSelfIconBtn_b__1(::GBINEPNHKKO* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBINEPNHKKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS17_0__INITCIRCLESELFICONBTN_B__1_OFFSET))(this, item);
		}
	};
}
