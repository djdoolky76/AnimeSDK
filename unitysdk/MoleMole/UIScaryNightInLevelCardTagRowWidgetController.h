#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CBGPBLDHDCC;
class EMFEHAKJNOD;
namespace MoleMole { class UIControlReference; }
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x14CCE0B0)
#define MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CCE160)
#define MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CCE010)
#define MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCE1D0)
#define MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CCE230)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelCardTagRowWidgetController_TypeDefinitionIndex = 53513;

	class UIScaryNightInLevelCardTagRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void Bind(::JIOLFCAGOFH_1<::EMFEHAKJNOD*>* config, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::EMFEHAKJNOD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER_BIND_OFFSET))(this, config, index);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::CBGPBLDHDCC* OGMPOGIHBIK()
		{
			return ((::CBGPBLDHDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELCARDTAGROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
