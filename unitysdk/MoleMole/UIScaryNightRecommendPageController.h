#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DEIIJNHACAO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_GET_SELECTEDBUILDINDEX_OFFSET UNITYSDK_OFFSET(0x1889B8A0)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1889B890)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1889B9E0)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1889BA50)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1889BAF0)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1889BD30)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1889BD40)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1889BDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightRecommendPageController_TypeDefinitionIndex = 71011;

	class UIScaryNightRecommendPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Int32 get_SelectedBuildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_GET_SELECTEDBUILDINDEX_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::DEIIJNHACAO* OGMPOGIHBIK()
		{
			return ((::DEIIJNHACAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
