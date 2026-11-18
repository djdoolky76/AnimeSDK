#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DCFKHKBLIMA;
namespace System { class Action; }

#define MOLEMOLE_UIRABSTARUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179A1AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpPopWindowController_Context_TypeDefinitionIndex = 44033;

	class UIRABStarUpPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnConfirm; // 0x28
		::DCFKHKBLIMA* BuddyData; // 0x30
		::System::Int32 FromStar; // 0x38
		::System::Int32 ToStar; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
