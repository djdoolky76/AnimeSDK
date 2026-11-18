#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19786BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPageController_TypeDefinitionIndex = 65949;

	class UIHollowCollectRewardDialogPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPAGECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
