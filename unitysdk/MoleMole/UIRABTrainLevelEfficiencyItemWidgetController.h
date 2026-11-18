#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CAJGAEIAFPO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRABTrainLevelEfficiencyItemWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18EE6D80)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EE68E0)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18EE6980)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18EE6A40)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE6C30)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EE6C40)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18EE6CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainLevelEfficiencyItemWidgetController_TypeDefinitionIndex = 39365;

	class UIRABTrainLevelEfficiencyItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIRABTrainLevelEfficiencyItemWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABTrainLevelEfficiencyItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::CAJGAEIAFPO* OGMPOGIHBIK()
		{
			return ((::CAJGAEIAFPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
