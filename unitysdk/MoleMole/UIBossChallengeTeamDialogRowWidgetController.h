#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class GKDEEFFEOLL;
class IPNDIJHHFNP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18066AA0)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18066860)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18066C90)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETBRIGHT_OFFSET UNITYSDK_OFFSET(0x18066B10)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETTEAMINFO_OFFSET UNITYSDK_OFFSET(0x18066920)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18066D00)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18066D60)
#define MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18066E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTeamDialogRowWidgetController_TypeDefinitionIndex = 61994;

	class UIBossChallengeTeamDialogRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetTeamInfo(::GKDEEFFEOLL* teamInfo)
		{
			return ((::System::Void(*)(::PVOID, ::GKDEEFFEOLL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETTEAMINFO_OFFSET))(this, teamInfo);
		}

		::System::Void SetBright(::System::Boolean showBright)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_SETBRIGHT_OFFSET))(this, showBright);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::IPNDIJHHFNP* OGMPOGIHBIK()
		{
			return ((::IPNDIJHHFNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMDIALOGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
