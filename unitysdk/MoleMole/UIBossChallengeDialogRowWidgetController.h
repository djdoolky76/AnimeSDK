#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FEMAPLFNHNO;
class HLCKDBBPGDA;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17050030)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1704FCD0)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_SETLAYERRECORD_OFFSET UNITYSDK_OFFSET(0x1704FD90)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170500A0)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17050100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeDialogRowWidgetController_TypeDefinitionIndex = 84681;

	class UIBossChallengeDialogRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetLayerRecord(::System::Int32 zoneID, ::HLCKDBBPGDA* layerRecord)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HLCKDBBPGDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_SETLAYERRECORD_OFFSET))(this, zoneID, layerRecord);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::FEMAPLFNHNO* OGMPOGIHBIK()
		{
			return ((::FEMAPLFNHNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
