#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class OGFFGMJOGNC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABEnemyInfoInnerWidgetController_Context; }

#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1679C340)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1679C000)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1679C0A0)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1679C150)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1679C3B0)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1679C410)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1679C4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEnemyInfoInnerWidgetController_TypeDefinitionIndex = 86548;

	class UIRABEnemyInfoInnerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetContext(::MoleMole::UIRABEnemyInfoInnerWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABEnemyInfoInnerWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_SETCONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::OGFFGMJOGNC* OGMPOGIHBIK()
		{
			return ((::OGFFGMJOGNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
