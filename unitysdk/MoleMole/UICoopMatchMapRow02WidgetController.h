#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BAMDFFGPAFN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UICoopMatchMapRow02WidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_LPEJKCPFAHC_OFFSET UNITYSDK_OFFSET(0x19FB5A80)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19FB5670)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19FB5450)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19FB56E0)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x19FB57A0)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB5930)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19FB5940)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19FB59E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchMapRow02WidgetController_TypeDefinitionIndex = 74419;

	class UICoopMatchMapRow02WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UICoopMatchMapRow02WidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchMapRow02WidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void LPEJKCPFAHC(::System::Boolean CGPBOKCEGAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_LPEJKCPFAHC_OFFSET))(this, CGPBOKCEGAO);
		}

		::BAMDFFGPAFN* OGMPOGIHBIK()
		{
			return ((::BAMDFFGPAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
