#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_5__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7DDE0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_5__SHOWTRANSITION_B__8_OFFSET UNITYSDK_OFFSET(0x19A7DDF0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_5__SHOWTRANSITION_B__9_OFFSET UNITYSDK_OFFSET(0x19A7DFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass51_5_TypeDefinitionIndex = 55418;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class UIMainCityChatPlayWidgetController___c__DisplayClass51_5 : public ::System::Object
	{
	public:
		::System::Action* __9__9; // 0x10
		::LGINJIKKBJA* btn; // 0x18
		::MoleMole::GalGame::MainCityChatTransitionDisplayItem* config; // 0x20
		::System::Object* CS___8__locals3; // 0x28
		::System::Int32 optionIndex; // 0x30
		::System::Int32 buttonIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_5__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_5__SHOWTRANSITION_B__8_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_5__SHOWTRANSITION_B__9_OFFSET))(this);
		}
	};
}
