#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FLLAONJONLJ;
class PCBAHCDHHEG;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x16EBB470)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EBB160)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x16EBB220)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBB4E0)
#define MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EBB540)

namespace MoleMole
{
	inline static constexpr unsigned int UICommonRewardItemWidgetController_TypeDefinitionIndex = 72034;

	class UICommonRewardItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetData(::PCBAHCDHHEG* data)
		{
			return ((::System::Void(*)(::PVOID, ::PCBAHCDHHEG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::FLLAONJONLJ* OGMPOGIHBIK()
		{
			return ((::FLLAONJONLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONREWARDITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
