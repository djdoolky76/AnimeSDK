#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BABMKAFEADA;
namespace System { class Action; }

#define MOLEMOLE_UIPREUNLOCKDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18236D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIPreUnlockDialogPopWindowControllerContext_TypeDefinitionIndex = 62362;

	class UIPreUnlockDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BABMKAFEADA* cfg; // 0x28
		::System::Action* okBtnCallback; // 0x30
		::System::Action* cancelBtnCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPREUNLOCKDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
