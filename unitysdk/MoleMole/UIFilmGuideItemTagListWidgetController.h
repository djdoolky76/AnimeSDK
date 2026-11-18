#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AEOPAPFLGMC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19997A60)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19997800)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x199978A0)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_REFRESHTAGICONLIST_OFFSET UNITYSDK_OFFSET(0x19997AD0)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19997B80)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19997BE0)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19997C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemTagListWidgetController_TypeDefinitionIndex = 62701;

	class UIFilmGuideItemTagListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshTagIconList(::System::Collections::Generic::List_1<::System::Int32>* tags, ::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_REFRESHTAGICONLIST_OFFSET))(this, tags, isGrey);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::AEOPAPFLGMC* OGMPOGIHBIK()
		{
			return ((::AEOPAPFLGMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
