#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FODCAMHFBMH;
class LKMLFIAKFOO;
namespace MoleMole { class DebugPathGuidePoints; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_INODPGHCNEJ_OFFSET UNITYSDK_OFFSET(0x185EB590)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x185EB380)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x185EAFC0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x185EB080)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x185EB3F0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x185EB450)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x185EB4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetController_TypeDefinitionIndex = 92960;

	class UIUrbanMapTrackLineWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::DebugPathGuidePoints* DCJLDKAMNPE; // 0x2C8
		::UnityEngine::UI::Extension::PathGuide* IIPGJNECNKN; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::LKMLFIAKFOO* INODPGHCNEJ()
		{
			return ((::LKMLFIAKFOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_INODPGHCNEJ_OFFSET))(this);
		}

		::FODCAMHFBMH* OGMPOGIHBIK()
		{
			return ((::FODCAMHFBMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
