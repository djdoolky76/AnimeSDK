#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CAHECPHBGBD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x17C3C4F0)
#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17C3C760)
#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17C3C500)
#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17C3C5A0)
#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3C7D0)
#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17C3C830)
#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17C3C8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPlayHoldBeatItemWidgetController_TypeDefinitionIndex = 72798;

	class UIHouseRhythmPlayHoldBeatItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::CAHECPHBGBD* OGMPOGIHBIK()
		{
			return ((::CAHECPHBGBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
