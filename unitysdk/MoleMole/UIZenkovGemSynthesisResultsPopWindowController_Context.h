#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVGEMSYNTHESISRESULTSPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10574EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemSynthesisResultsPopWindowController_Context_TypeDefinitionIndex = 55688;

	class UIZenkovGemSynthesisResultsPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsAdvanced; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 ItemId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMSYNTHESISRESULTSPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
