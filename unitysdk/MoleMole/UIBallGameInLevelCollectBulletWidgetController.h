#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBallGameCollectBulletWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HFJBHBKDMJO;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1887E0D0)
#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1887E140)
#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1887E1E0)
#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1887E240)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameInLevelCollectBulletWidgetController_TypeDefinitionIndex = 54673;

	class UIBallGameInLevelCollectBulletWidgetController : public ::MoleMole::UIBallGameCollectBulletWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::HFJBHBKDMJO* get__viewModel()
		{
			return ((::HFJBHBKDMJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
