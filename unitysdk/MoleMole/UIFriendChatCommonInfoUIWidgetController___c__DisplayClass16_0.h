#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class GBINEPNHKKO;
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E32E70)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__0_OFFSET UNITYSDK_OFFSET(0x18E32E80)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__1_OFFSET UNITYSDK_OFFSET(0x18E33300)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatCommonInfoUIWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 50714;

	class UIFriendChatCommonInfoUIWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Func_2<::GBINEPNHKKO*, ::System::Boolean>* __9__1; // 0x10
		::FBHPDPBIGPK* brief; // 0x18
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCirclePlayerIconBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__0_OFFSET))(this);
		}

		::System::Boolean _InitCirclePlayerIconBtn_b__1(::GBINEPNHKKO* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBINEPNHKKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITCIRCLEPLAYERICONBTN_B__1_OFFSET))(this, item);
		}
	};
}
