#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_3__CTOR_OFFSET UNITYSDK_OFFSET(0x183E5660)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_3__SHOWTRANSITION_B__4_OFFSET UNITYSDK_OFFSET(0x183E5670)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass51_3_TypeDefinitionIndex = 55415;

	template <typename T1, typename T2, typename T3>
	class UIMainCityChatPlayWidgetController___c__DisplayClass51_3 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* effectGo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_3__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTransition_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS51_3__SHOWTRANSITION_B__4_OFFSET))(this);
		}
	};
}
