#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMFPHBDBAD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA7000)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController_Context_TypeDefinitionIndex = 51355;

	class UIZenkovDelegateBoardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IHMFPHBDBAD DelegateSubType; // 0x28
		::System::UInt32 TargetQuestId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
