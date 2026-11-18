#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PJICGHPLOGI;
namespace System { class String; }

#define MOLEMOLE_UIINLEVELCOUNTDOWNUICHILDWINDOWCONTROLLER_UIINLEVELCOUNTDOWNUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F66850)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCountDownUIChildWindowController_UIInLevelCountDownUIContext_TypeDefinitionIndex = 81605;

	class UIInLevelCountDownUIChildWindowController_UIInLevelCountDownUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* FixedText; // 0x28
		::PJICGHPLOGI* newsBubbleSupport; // 0x30
		::System::Boolean useStandalone; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single totalDuration; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOUNTDOWNUICHILDWINDOWCONTROLLER_UIINLEVELCOUNTDOWNUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
