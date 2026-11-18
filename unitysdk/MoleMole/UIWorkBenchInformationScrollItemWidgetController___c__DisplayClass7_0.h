#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWorkBenchInformation02PageController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIWORKBENCHINFORMATIONSCROLLITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1564BCD0)
#define MOLEMOLE_UIWORKBENCHINFORMATIONSCROLLITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__ONGAMEPADMODULESELECTINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1564C250)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInformationScrollItemWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 67558;

	class UIWorkBenchInformationScrollItemWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWorkBenchInformation02PageController* workBenchInformation02PageController; // 0x10
		::UnityEngine::Transform* trans; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATIONSCROLLITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGamepadModuleSelectIndex_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATIONSCROLLITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__ONGAMEPADMODULESELECTINDEX_B__0_OFFSET))(this);
		}
	};
}
