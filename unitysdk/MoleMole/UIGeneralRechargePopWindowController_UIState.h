#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18E5FB60)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5FCF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRechargePopWindowController_UIState_TypeDefinitionIndex = 63336;

	class UIGeneralRechargePopWindowController_UIState : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::UInt32>* MinValue; // 0x88
		::LJHFMILANJA_1<::System::Boolean>* ShowSpace; // 0x90
		::LJHFMILANJA_1<::System::UInt32>* PerCost; // 0x98
		::LJHFMILANJA_1<::System::String*>* ConsumeIcon; // 0xA0
		::LJHFMILANJA_1<::System::Boolean>* BtnInteractable; // 0xA8
		::LJHFMILANJA_1<::System::String*>* CurrentCost; // 0xB0
		::LJHFMILANJA_1<::System::UInt32>* PerReceive; // 0xB8
		::LJHFMILANJA_1<::System::String*>* CurrentObtain; // 0xC0
		::LJHFMILANJA_1<::System::UInt32>* MaxValue; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
