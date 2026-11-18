#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JFDMHLOBDGB;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17845B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMedalRowWidgetController_Context_TypeDefinitionIndex = 88814;

	class UIGeneralMedalRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JFDMHLOBDGB* FriendSystemMedalData; // 0x28
		::System::Action_1<::JFDMHLOBDGB*>* OnClickMedalBtn; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
