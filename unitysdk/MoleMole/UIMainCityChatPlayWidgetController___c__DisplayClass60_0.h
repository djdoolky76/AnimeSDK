#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F96040)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS60_0__SHOW3DMODEL_G__OPENMODELDIALOG_0_OFFSET UNITYSDK_OFFSET(0x17F96050)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass60_0_TypeDefinitionIndex = 55416;

	class UIMainCityChatPlayWidgetController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::GalGame::ModelConfigTemplateType templateType; // 0x18
		::System::Int32 modelID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show3DModel_g__OpenModelDialog_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS60_0__SHOW3DMODEL_G__OPENMODELDIALOG_0_OFFSET))(this);
		}
	};
}
