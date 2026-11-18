#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
class JGBMOOJHMBF;
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }

#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17590DA0)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17590DB0)
#define MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17591470)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatCommonInfoUIWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 50717;

	class UIFriendChatCommonInfoUIWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::IDGDIFDMIDP* circleData; // 0x10
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCirclePlayerInfoUIView_b__0(::JGBMOOJHMBF* selfSys)
		{
			return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__0_OFFSET))(this, selfSys);
		}

		::System::Boolean _InitCirclePlayerInfoUIView_b__1(::GBINEPNHKKO* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBINEPNHKKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONINFOUIWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITCIRCLEPLAYERINFOUIVIEW_B__1_OFFSET))(this, member);
		}
	};
}
