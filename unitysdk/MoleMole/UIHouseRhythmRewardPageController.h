#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EPFLCIKGLJO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A29E2E0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_HCOFGLPHLBF_OFFSET UNITYSDK_OFFSET(0x1A29F580)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_MDLFHIJADOH_OFFSET UNITYSDK_OFFSET(0x1A29F6C0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_NCHGMOAPGNK_OFFSET UNITYSDK_OFFSET(0x1A29E550)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1A29F3C0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A29E2F0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A29F080)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A29E390)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29F430)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A29F440)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A29F4E0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A29F4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardPageController_TypeDefinitionIndex = 46188;

	class UIHouseRhythmRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::EPFLCIKGLJO* OGMPOGIHBIK()
		{
			return ((::EPFLCIKGLJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void NCHGMOAPGNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_NCHGMOAPGNK_OFFSET))(this);
		}

		::System::Void HCOFGLPHLBF(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_HCOFGLPHLBF_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void MDLFHIJADOH(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_MDLFHIJADOH_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
