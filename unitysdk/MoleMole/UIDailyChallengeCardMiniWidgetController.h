#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class KJNMOAODAAO;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1705FCC0)
#define MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1705FB00)
#define MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1705FBC0)
#define MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1705FC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeCardMiniWidgetController_TypeDefinitionIndex = 58599;

	class UIDailyChallengeCardMiniWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::KJNMOAODAAO* OGMPOGIHBIK()
		{
			return ((::KJNMOAODAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDMINIWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
