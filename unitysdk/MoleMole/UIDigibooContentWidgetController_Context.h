#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIDIGIBOOCONTENTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1892E330)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooContentWidgetController_Context_TypeDefinitionIndex = 91802;

	class UIDigibooContentWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::Action* onClick; // 0x30
		::System::String* Desc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOCONTENTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
