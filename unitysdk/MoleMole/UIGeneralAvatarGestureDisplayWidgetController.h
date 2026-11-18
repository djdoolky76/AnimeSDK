#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AJDINALMEGL;
class FKABGAHPDBG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x173C9350)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_NABPKKNIFHK_OFFSET UNITYSDK_OFFSET(0x173C9650)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x173C92E0)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x173C8F40)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x173C9010)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_REFRESHFETCHPANEL_OFFSET UNITYSDK_OFFSET(0x173C9400)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173C94B0)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x173C9510)
#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x173C95B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAvatarGestureDisplayWidgetController_TypeDefinitionIndex = 89900;

	class UIGeneralAvatarGestureDisplayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitData(::System::Collections::Generic::List_1<::FKABGAHPDBG*>* gestureItemDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FKABGAHPDBG*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_INITDATA_OFFSET))(this, gestureItemDatas);
		}

		::System::Void RefreshFetchPanel(::FKABGAHPDBG* gestureData)
		{
			return ((::System::Void(*)(::PVOID, ::FKABGAHPDBG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_REFRESHFETCHPANEL_OFFSET))(this, gestureData);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void NABPKKNIFHK(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_NABPKKNIFHK_OFFSET))(this, KOIBHLHLMFC);
		}

		::AJDINALMEGL* OGMPOGIHBIK()
		{
			return ((::AJDINALMEGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
