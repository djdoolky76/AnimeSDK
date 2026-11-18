#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18809640)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__SHOWCUSTOMTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0x18809650)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__SHOWCUSTOMTRANSITION_B__1_OFFSET UNITYSDK_OFFSET(0x18809720)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__SHOWCUSTOMTRANSITION_B__2_OFFSET UNITYSDK_OFFSET(0x188097F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass54_1_TypeDefinitionIndex = 55426;

	template <typename T>
	class UIMainCityChatPlayWidgetController___c__DisplayClass54_1 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UILocalizationText* txt; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::UnityEngine::Events::UnityAction* selectAction; // 0x20
		::System::Int32 npcTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__SHOWCUSTOMTRANSITION_B__0_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__SHOWCUSTOMTRANSITION_B__1_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS54_1__SHOWCUSTOMTRANSITION_B__2_OFFSET))(this);
		}
	};
}
