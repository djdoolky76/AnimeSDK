#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECBDBJMBDD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALSHARETIPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2EA80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralShareTipPopWindowController_Context_TypeDefinitionIndex = 40170;

	class UIGeneralShareTipPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickShareOutside; // 0x28
		::System::String* TitleKey; // 0x30
		::System::String* DescKey; // 0x38
		::System::Action* OnClickShareInside; // 0x40
		::FECBDBJMBDD DefaultSelectBtn; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHARETIPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
