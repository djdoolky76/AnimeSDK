#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIFORBIDDENAREACOLLECTPOPDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7FBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaCollectPopDialogPopWindowContext_TypeDefinitionIndex = 69298;

	class UIForbiddenAreaCollectPopDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::Boolean IsGroup; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOLLECTPOPDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
