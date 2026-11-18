#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class KDMFGLGCHMM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18235BA0)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18235E80)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18235BB0)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18235EF0)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18235C50)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18235F90)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18235FA0)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18236040)
#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18236100)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballLevelInfoPageController_TypeDefinitionIndex = 56981;

	class UIPinballLevelInfoPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::KDMFGLGCHMM* OGMPOGIHBIK()
		{
			return ((::KDMFGLGCHMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
