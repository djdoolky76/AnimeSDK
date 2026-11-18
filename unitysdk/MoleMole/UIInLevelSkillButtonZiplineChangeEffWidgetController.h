#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class OCMABNOJDNE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x187E7180)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x187E6E50)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x187E6EF0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_PLAYFEEDBACK_OFFSET UNITYSDK_OFFSET(0x187E71F0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187E7550)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x187E75B0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x187E7650)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonZiplineChangeEffWidgetController_TypeDefinitionIndex = 62596;

	class UIInLevelSkillButtonZiplineChangeEffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Foundation::Coroutine::CoroutineHandle LJGIIOCOMLF; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void PlayFeedBack(::System::Single animRatio, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_PLAYFEEDBACK_OFFSET))(this, animRatio, callback);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::OCMABNOJDNE* OGMPOGIHBIK()
		{
			return ((::OCMABNOJDNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
