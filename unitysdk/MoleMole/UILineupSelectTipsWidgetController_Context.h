#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UILINEUPSELECTTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17617470)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectTipsWidgetController_Context_TypeDefinitionIndex = 43080;

	class UILineupSelectTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TipsTextKey; // 0x28
		::System::String* BtnTextKey; // 0x30
		::System::Action* OnClick; // 0x38
		::System::Boolean ShowBgYellow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
