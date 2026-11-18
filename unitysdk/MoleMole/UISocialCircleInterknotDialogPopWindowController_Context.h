#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD2E80)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInterknotDialogPopWindowController_Context_TypeDefinitionIndex = 42884;

	class UISocialCircleInterknotDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIOLFCAGOFH_1<::System::Int32>* CurrentSelect; // 0x28
		::System::Action_1<::System::Int32>* OnConfirmCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
