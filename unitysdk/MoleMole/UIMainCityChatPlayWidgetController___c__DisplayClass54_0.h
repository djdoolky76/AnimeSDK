#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFHHBGMBOCI;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1795F770)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__SHOWCUSTOMTRANSITION_B__3_OFFSET UNITYSDK_OFFSET(0x1795F780)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass54_0_TypeDefinitionIndex = 55417;

	class UIMainCityChatPlayWidgetController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x10
		::AFHHBGMBOCI* transition; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Single length; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_0__SHOWCUSTOMTRANSITION_B__3_OFFSET))(this);
		}
	};
}
