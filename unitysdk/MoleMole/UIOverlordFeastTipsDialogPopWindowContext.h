#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FAFDOHEJMBH;

#define MOLEMOLE_UIOVERLORDFEASTTIPSDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19060000)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTipsDialogPopWindowContext_TypeDefinitionIndex = 89567;

	class UIOverlordFeastTipsDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FAFDOHEJMBH* DevConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTIPSDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
