#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10544DA0)
#define MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10544EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDailyPaperDialogPopWindowController_UIState_TypeDefinitionIndex = 46059;

	class UISuibianTempleDailyPaperDialogPopWindowController_UIState : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Int32>* CanGetCoin2; // 0x88
		::LJHFMILANJA_1<::System::Int32>* CurrentBuff; // 0x90
		::LJHFMILANJA_1<::System::Int32>* TotalSeconds; // 0x98
		::LJHFMILANJA_1<::System::Int32>* TotalCoin; // 0xA0
		::LJHFMILANJA_1<::System::Int32>* CurrentCoin; // 0xA8
		::LJHFMILANJA_1<::System::Boolean>* NoPop; // 0xB0
		::LJHFMILANJA_1<::System::Int32>* CurrentPolicy; // 0xB8
		::LJHFMILANJA_1<::System::Int32>* CanGetCoin1; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDAILYPAPERDIALOGPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
