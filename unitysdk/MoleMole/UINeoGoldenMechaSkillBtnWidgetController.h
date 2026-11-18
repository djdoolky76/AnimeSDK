#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CKBGHPCPGFN;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x186E62D0)
#define MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x186E6160)
#define MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186E6220)
#define MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x186E6230)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaSkillBtnWidgetController_TypeDefinitionIndex = 69929;

	class UINeoGoldenMechaSkillBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::CKBGHPCPGFN* OGMPOGIHBIK()
		{
			return ((::CKBGHPCPGFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
