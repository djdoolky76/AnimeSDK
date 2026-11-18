#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FOGDCKAOGMM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_FINISHAPPEARANIMATION_OFFSET UNITYSDK_OFFSET(0x13EA6E50)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_IKNPMHKNDIB_OFFSET UNITYSDK_OFFSET(0x13EA7310)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_LKGGBGMGACE_OFFSET UNITYSDK_OFFSET(0x13EA6EA0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x13EA72A0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13EA6D30)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13EA6FB0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13EA7410)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA75D0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13EA75E0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13EA7680)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13EA7720)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffItemWidgetController_TypeDefinitionIndex = 65407;

	class UIZenkovGemDebuffItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::UnityEngine::Animation* EEFOCCNFJCO; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void FinishAppearAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_FINISHAPPEARANIMATION_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::FOGDCKAOGMM* OGMPOGIHBIK()
		{
			return ((::FOGDCKAOGMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void IKNPMHKNDIB(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_IKNPMHKNDIB_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void LKGGBGMGACE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_LKGGBGMGACE_OFFSET))(this);
		}
	};
}
