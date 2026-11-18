#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BPHGNMNLLHF;
class OJFIJHKKCHA;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_BAGPIIBEBCO_OFFSET UNITYSDK_OFFSET(0x164AB3B0)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_GET_CURRENTAVATARDATA_OFFSET UNITYSDK_OFFSET(0x164AA310)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_GET_ISTEAMTIPSMODE_OFFSET UNITYSDK_OFFSET(0x164AA4F0)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_LOJNPOGBOIM_OFFSET UNITYSDK_OFFSET(0x164AAE50)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x164AA480)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x164AA720)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x164AAD50)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x164AA7C0)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x164AACF0)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164AA560)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_REFRESHTIPSROOT_OFFSET UNITYSDK_OFFSET(0x164AAB50)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_SETSELECTFOCUS_OFFSET UNITYSDK_OFFSET(0x164AB000)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x164AAF20)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164AB0B0)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x164AB0C0)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x164AB160)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x164AB1F0)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x164AB290)
#define MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164AB320)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideAvatarListItemRowWidgetController_TypeDefinitionIndex = 76976;

	class UIStrategyGuideAvatarListItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TipsTeam1()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideAvatarListItemRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4EC40);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TipsTeam2()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideAvatarListItemRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4EC48);
		}
		static ::System::Int32* StaticGet_TipsAvatarId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideAvatarListItemRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x12AA0);
		}
		static ::System::Boolean* StaticGet_IsSingleTeamMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideAvatarListItemRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x12AA4);
		}
		::System::Action_1<::BPHGNMNLLHF*>* OnDirectClickCallback; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::BPHGNMNLLHF* get_CurrentAvatarData()
		{
			return ((::BPHGNMNLLHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_GET_CURRENTAVATARDATA_OFFSET))(this);
		}

		static ::System::Boolean get_IsTeamTipsMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_GET_ISTEAMTIPSMODE_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnSetData(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetSelectState(::System::Boolean select, ::System::Boolean isFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_SETSELECTSTATE_OFFSET))(this, select, isFocused);
		}

		::System::Void SetSelectFocus(::System::Boolean isFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_SETSELECTFOCUS_OFFSET))(this, isFocused);
		}

		::System::Void RefreshTipsRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_REFRESHTIPSROOT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnSetData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void LOJNPOGBOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_LOJNPOGBOIM_OFFSET))(this);
		}

		::OJFIJHKKCHA* OGMPOGIHBIK()
		{
			return ((::OJFIJHKKCHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void BAGPIIBEBCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEAVATARLISTITEMROWWIDGETCONTROLLER_BAGPIIBEBCO_OFFSET))(this);
		}
	};
}
