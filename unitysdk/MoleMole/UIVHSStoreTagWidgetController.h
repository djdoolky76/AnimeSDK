#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CMNHAFFCHFA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVHSStoreTagWidgetController_Data; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_AHFGGJCPKMG_OFFSET UNITYSDK_OFFSET(0x164D6170)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALALLTAGSUCCESS_OFFSET UNITYSDK_OFFSET(0x164D5A60)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALTAGLAYER_OFFSET UNITYSDK_OFFSET(0x164D5520)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALVHSATLEASTMATCHONETAG_OFFSET UNITYSDK_OFFSET(0x164D58C0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_EOEIJDLCENG_OFFSET UNITYSDK_OFFSET(0x164D52C0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_FMGMGDJENAO_OFFSET UNITYSDK_OFFSET(0x164D5230)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_KGBEKNPNJDO_OFFSET UNITYSDK_OFFSET(0x164D6230)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164D4F30)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x164D5080)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164D4FC0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164D4E60)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164D4EC0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_PMDHHAJCKKO_OFFSET UNITYSDK_OFFSET(0x164D6370)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHTAGLAYER_OFFSET UNITYSDK_OFFSET(0x164D3850)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x164D5E50)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164D5DE0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164D5E90)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x164D5F20)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164D5FC0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164D6050)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164D60E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController_TypeDefinitionIndex = 83380;

	class UIVHSStoreTagWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::String** StaticGet_HGNHEPHIDOL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreTagWidgetController_TypeDefinitionIndex)->GetStaticField(0x3C7B0);
		}
		::CMNHAFFCHFA* _view; // 0x2F8
		::System::Boolean CMGJAIEHFPO; // 0x300
		::System::Byte _padding0[0x7];
		::MoleMole::UIVHSStoreTagWidgetController_Data* AKAKMKODFDF; // 0x308
		::System::Int32 DHMJOKECEHD; // 0x310
		::System::Byte _padding1[0x4];
		::System::Threading::CancellationTokenSource* FNMOPIAKGOJ; // 0x318
		::System::Boolean KGMNBADIDHB; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshTagLayer(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* selectedVhs, ::System::Single animDelayTime, ::System::Boolean skipAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHTAGLAYER_OFFSET))(this, selectedVhs, animDelayTime, skipAnim);
		}

		static ::System::Boolean CalVhsAtLeastMatchOneTag(::System::Int32 vhsId, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* tagIds)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALVHSATLEASTMATCHONETAG_OFFSET))(vhsId, tagIds);
		}

		static ::System::Int32 CalTagLayer(::System::Int32 tagId, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* selectedVhs)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALTAGLAYER_OFFSET))(tagId, selectedVhs);
		}

		static ::System::Boolean CalAllTagSuccess(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* tags, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* selectedVhs)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALALLTAGSUCCESS_OFFSET))(tags, selectedVhs);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid AHFGGJCPKMG(::System::Boolean JMEADFIICEP, ::System::Single OLANOAAOCIJ, ::System::Boolean HCOIINOJPFN, ::System::Threading::CancellationToken AMIDHEAIANO)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_AHFGGJCPKMG_OFFSET))(this, JMEADFIICEP, OLANOAAOCIJ, HCOIINOJPFN, AMIDHEAIANO);
		}

		::System::Void FMGMGDJENAO(::MoleMole::UIVHSStoreTagWidgetController_Data* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreTagWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_FMGMGDJENAO_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void EOEIJDLCENG(::System::Int32 PBKFAAHBDDK, ::System::Single OLANOAAOCIJ, ::System::Boolean HCOIINOJPFN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_EOEIJDLCENG_OFFSET))(this, PBKFAAHBDDK, OLANOAAOCIJ, HCOIINOJPFN);
		}

		::MoleMole::UIVHSStoreTagWidgetController_Data* PMDHHAJCKKO()
		{
			return ((::MoleMole::UIVHSStoreTagWidgetController_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_PMDHHAJCKKO_OFFSET))(this);
		}

		::System::Void KGBEKNPNJDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_KGBEKNPNJDO_OFFSET))(this);
		}
	};
}
