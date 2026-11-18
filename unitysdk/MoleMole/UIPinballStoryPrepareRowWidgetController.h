#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class KGPGHKJIFCM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIPinballStoryPrepareRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CB7A90)
#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CB76E0)
#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14CB7780)
#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x14CB7840)
#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x14CB79C0)
#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB7B00)
#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CB7B10)
#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14CB7BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballStoryPrepareRowWidgetController_TypeDefinitionIndex = 69129;

	class UIPinballStoryPrepareRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_SETSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::KGPGHKJIFCM* OGMPOGIHBIK()
		{
			return ((::KGPGHKJIFCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIPinballStoryPrepareRowWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPinballStoryPrepareRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
