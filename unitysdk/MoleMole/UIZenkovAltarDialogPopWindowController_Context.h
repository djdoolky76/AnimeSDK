#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FPOHEPPFPLE;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVALTARDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164F1760)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovAltarDialogPopWindowController_Context_TypeDefinitionIndex = 76291;

	class UIZenkovAltarDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OkAction; // 0x28
		::FPOHEPPFPLE* AltarData; // 0x30
		::System::Action* CloseAction; // 0x38
		::System::Action* GetRewardAction; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVALTARDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
