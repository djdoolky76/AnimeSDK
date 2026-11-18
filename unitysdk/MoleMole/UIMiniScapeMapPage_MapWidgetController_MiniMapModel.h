#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFANIOOGFA_PKPGICNJDHK;
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET UNITYSDK_OFFSET(0x17F9E900)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17F9E930)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapWidgetController_MiniMapModel_TypeDefinitionIndex = 90442;

	class UIMiniScapeMapPage_MapWidgetController_MiniMapModel : public ::System::Object
	{
	public:
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIMiniScapeMapPage_MapWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniScapeMapPage_MapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET))(this, uiController);
		}

		::MKFANIOOGFA_PKPGICNJDHK* get_SubMapData()
		{
			return ((::MKFANIOOGFA_PKPGICNJDHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET))(this);
		}
	};
}
