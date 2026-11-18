#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class MABGJHNHADP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABDepositoryElementTextTagRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18FF3BB0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18FF3860)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18FF3900)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18FF35F0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18FF36E0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF39C0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18FF39D0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18FF3A70)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18FF3B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryElementTextTagRowWidgetController_TypeDefinitionIndex = 81466;

	class UIRABDepositoryElementTextTagRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::MABGJHNHADP* OGMPOGIHBIK()
		{
			return ((::MABGJHNHADP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
