#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/UIBossChallengeHistoryRowBaseWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_CREATEROWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17FFA100)
#define MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_GET_BINDERCTRLKEY_OFFSET UNITYSDK_OFFSET(0x17FFA0F0)
#define MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17FFA190)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeHistoryHardRowWidgetController_TypeDefinitionIndex = 49536;

	class UIBossChallengeHistoryHardRowWidgetController : public ::MoleMole::UIBossChallengeHistoryRowBaseWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MIKOMFIBMBN get_BinderCtrlKey()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_GET_BINDERCTRLKEY_OFFSET))(this);
		}

		::System::Void CreateRowViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_CREATEROWVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}
	};
}
