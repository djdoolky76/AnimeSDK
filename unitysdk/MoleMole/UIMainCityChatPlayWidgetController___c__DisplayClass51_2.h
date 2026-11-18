#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18809140)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_2__SHOWTRANSITION_B__3_OFFSET UNITYSDK_OFFSET(0x18809150)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_2__SHOWTRANSITION_B__5_OFFSET UNITYSDK_OFFSET(0x18809480)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass51_2_TypeDefinitionIndex = 55412;

	template <typename T1, typename T2>
	class UIMainCityChatPlayWidgetController___c__DisplayClass51_2 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::UnityEngine::CanvasGroup* canvasGroup; // 0x18
		::System::Object* CS___8__locals2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_2__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_2__SHOWTRANSITION_B__3_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_2__SHOWTRANSITION_B__5_OFFSET))(this);
		}
	};
}
