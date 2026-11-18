#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFANIOOGFA_PKPGICNJDHK;
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController; }

#define MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET UNITYSDK_OFFSET(0x182D2BF0)
#define MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x182D2C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController_MiniMapModel_TypeDefinitionIndex = 39173;

	class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController_MiniMapModel : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET))(this, uiController);
		}

		::MKFANIOOGFA_PKPGICNJDHK* get_SubMapData()
		{
			return ((::MKFANIOOGFA_PKPGICNJDHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET))(this);
		}
	};
}
