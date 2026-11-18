#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HPABCJKOMMN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_EFOLGMPAIJK_OFFSET UNITYSDK_OFFSET(0x19FB7800)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19FB72A0)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_INKDNMHNCDO_OFFSET UNITYSDK_OFFSET(0x19FB7A50)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19FB7580)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19FB72B0)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19FB7350)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19FB75F0)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB76C0)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19FB76D0)
#define MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19FB7770)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooMainPageController_TypeDefinitionIndex = 65882;

	class UIDigibooMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EFOLGMPAIJK(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_EFOLGMPAIJK_OFFSET))(this, KOIBHLHLMFC);
		}

		::HPABCJKOMMN* OGMPOGIHBIK()
		{
			return ((::HPABCJKOMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void INKDNMHNCDO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINPAGECONTROLLER_INKDNMHNCDO_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
