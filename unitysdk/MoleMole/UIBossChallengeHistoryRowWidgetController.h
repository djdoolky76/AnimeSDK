#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/UIBossChallengeHistoryRowBaseWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEHISTORYROWWIDGETCONTROLLER_CREATEROWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18484F00)
#define MOLEMOLE_UIBOSSCHALLENGEHISTORYROWWIDGETCONTROLLER_GET_BINDERCTRLKEY_OFFSET UNITYSDK_OFFSET(0x18484EF0)
#define MOLEMOLE_UIBOSSCHALLENGEHISTORYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18484F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeHistoryRowWidgetController_TypeDefinitionIndex = 67841;

	class UIBossChallengeHistoryRowWidgetController : public ::MoleMole::UIBossChallengeHistoryRowBaseWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MIKOMFIBMBN get_BinderCtrlKey()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYROWWIDGETCONTROLLER_GET_BINDERCTRLKEY_OFFSET))(this);
		}

		::System::Void CreateRowViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYROWWIDGETCONTROLLER_CREATEROWVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}
	};
}
