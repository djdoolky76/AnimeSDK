#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1F126740)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1267E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardWidgetController_UIState_TypeDefinitionIndex = 95020;

	class UIBallGameIconCardWidgetController_UIState : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Int32>* Level; // 0x88
		::LJHFMILANJA_1<::System::Single>* ExpPercent; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
