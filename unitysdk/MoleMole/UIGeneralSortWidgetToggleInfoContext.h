#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GIEMFJONNKB;

#define MOLEMOLE_UIGENERALSORTWIDGETTOGGLEINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197637D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSortWidgetToggleInfoContext_TypeDefinitionIndex = 60794;

	class UIGeneralSortWidgetToggleInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GIEMFJONNKB* ToggleInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETTOGGLEINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
