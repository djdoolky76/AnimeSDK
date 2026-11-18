#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class JPDPLIKJFOP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABBossTopTabWidgetController_Context; }

#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18FF3210)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18FF2FB0)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18FF3050)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x18FF3280)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF3400)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18FF3460)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18FF3500)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossTopTabWidgetController_TypeDefinitionIndex = 86261;

	class UIRABBossTopTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetContext(::MoleMole::UIRABBossTopTabWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABBossTopTabWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_SETCONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::JPDPLIKJFOP* OGMPOGIHBIK()
		{
			return ((::JPDPLIKJFOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
