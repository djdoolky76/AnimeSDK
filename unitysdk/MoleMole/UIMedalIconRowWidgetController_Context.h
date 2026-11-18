#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JFDMHLOBDGB;

#define MOLEMOLE_UIMEDALICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193AC690)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalIconRowWidgetController_Context_TypeDefinitionIndex = 67655;

	class UIMedalIconRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JFDMHLOBDGB* FriendSystemMedalDisplayData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
