#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BAPCJMBDBNE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CC0610)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CC0340)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14CC03E0)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC0680)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CC06E0)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14CC0780)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABResultBangbooDataStatWidgetController_TypeDefinitionIndex = 74580;

	class UIRABResultBangbooDataStatWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::BAPCJMBDBNE* OGMPOGIHBIK()
		{
			return ((::BAPCJMBDBNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
