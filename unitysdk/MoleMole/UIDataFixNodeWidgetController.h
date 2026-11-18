#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/IMHLAGJKEPB.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class APNMGOHIMKO;
class DEOKAMDBJJH;
class FGCOIBFFCHB;
class NNFEMOFGIHJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class MonoDataFixNodeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_BEHKKBHOABG_OFFSET UNITYSDK_OFFSET(0x18923970)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x1891F530)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLICK_OFFSET UNITYSDK_OFFSET(0x18921EB0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_DCALENBAHNC_OFFSET UNITYSDK_OFFSET(0x18921B10)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_DESELECT_OFFSET UNITYSDK_OFFSET(0x18921D50)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_EHKNNFFAGLC_OFFSET UNITYSDK_OFFSET(0x18921F00)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_FBFPLGBCFCE_OFFSET UNITYSDK_OFFSET(0x18922D40)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_FDFDCNKEMKI_OFFSET UNITYSDK_OFFSET(0x189238E0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NEEDUNLOCK_OFFSET UNITYSDK_OFFSET(0x1891F720)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NODE_OFFSET UNITYSDK_OFFSET(0x1891ECC0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_HDAINNPHMII_OFFSET UNITYSDK_OFFSET(0x189204F0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_HNNLCPEHDOK_OFFSET UNITYSDK_OFFSET(0x189225C0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_HOIALAGDOOG_OFFSET UNITYSDK_OFFSET(0x18923EB0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_JMLGADNMOJD_OFFSET UNITYSDK_OFFSET(0x18924200)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_KDODBGPCEMF_OFFSET UNITYSDK_OFFSET(0x189200C0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_KMOEKJJBPKF_OFFSET UNITYSDK_OFFSET(0x18920DA0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x18921570)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_LINCJOIEDHC_OFFSET UNITYSDK_OFFSET(0x18924060)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_OKPEANDPOHH_OFFSET UNITYSDK_OFFSET(0x18923FC0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18920360)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONNODERESET_OFFSET UNITYSDK_OFFSET(0x18921A30)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18920BA0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18920D20)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1891F7C0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18920430)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1891EF20)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18920B00)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x18921B90)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SET_NODE_OFFSET UNITYSDK_OFFSET(0x1891ECD0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18922350)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189222F0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18922370)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18922400)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18922410)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189224A0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18922530)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController_TypeDefinitionIndex = 47368;

	class UIDataFixNodeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Single* StaticGet_UpdateInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIDataFixNodeWidgetController_TypeDefinitionIndex)->GetStaticField(0x101F0);
		}
		static ::System::Single* StaticGet_NullNodeCompensation()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIDataFixNodeWidgetController_TypeDefinitionIndex)->GetStaticField(0x101F4);
		}
		static ::System::Single* StaticGet_NullNodeTotalTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIDataFixNodeWidgetController_TypeDefinitionIndex)->GetStaticField(0x101F8);
		}
		::NNFEMOFGIHJ* _view; // 0x2C8
		::DEOKAMDBJJH* CBBEJBGIAKA; // 0x2D0
		::APNMGOHIMKO* OPOLMJLMHCD; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle OFAJAJOFGNC; // 0x2E0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* AIGOKMGBGBP; // 0x2E8
		::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* AEBGEPNFPLB; // 0x2F0
		::MoleMole::Config::MonoDataFixNodeConfig* OADEFLADNDA; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* PGGGDMGEFFL; // 0x300
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* JLHNKMEBNJG; // 0x308
		::System::Boolean IsControlNode; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::DEOKAMDBJJH* get_Node()
		{
			return ((::DEOKAMDBJJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NODE_OFFSET))(this);
		}

		::System::Void set_Node(::DEOKAMDBJJH* value)
		{
			return ((::System::Void(*)(::PVOID, ::DEOKAMDBJJH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SET_NODE_OFFSET))(this, value);
		}

		::System::Boolean get_NeedUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NEEDUNLOCK_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean RefreshView(::System::Boolean needAnim, ::IMHLAGJKEPB flowDir, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::IMHLAGJKEPB, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, needAnim, flowDir, speed);
		}

		::System::Void OnNodeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONNODERESET_OFFSET))(this);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SELECT_OFFSET))(this);
		}

		::System::Void DeSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_DESELECT_OFFSET))(this);
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void EHKNNFFAGLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_EHKNNFFAGLC_OFFSET))(this);
		}

		::System::Void BEHKKBHOABG(::UnityEngine::Transform* FLKPNHJDGDH, ::UnityEngine::Transform* BEKAGNFAFGI, ::UnityEngine::Transform* GFOJOMAHCGJ, ::IMHLAGJKEPB MGODOGMDPCH, ::System::Single IAKPGBCAAKM, ::System::Boolean ELPPLDHJKHK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::IMHLAGJKEPB, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_BEHKKBHOABG_OFFSET))(this, FLKPNHJDGDH, BEKAGNFAFGI, GFOJOMAHCGJ, MGODOGMDPCH, IAKPGBCAAKM, ELPPLDHJKHK);
		}

		::System::Boolean LCOMPIBAKEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_LCOMPIBAKEI_OFFSET))(this);
		}

		::System::Boolean LINCJOIEDHC(::System::Int32 HBJOLKHGGDD, ::System::Boolean JNGDLBDHGNB)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_LINCJOIEDHC_OFFSET))(this, HBJOLKHGGDD, JNGDLBDHGNB);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FDFDCNKEMKI(::System::Boolean HIOKLCKGBOH)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_FDFDCNKEMKI_OFFSET))(this, HIOKLCKGBOH);
		}

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_PHOADBJGFBE_OFFSET))(this);
		}

		::System::Void FBFPLGBCFCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_FBFPLGBCFCE_OFFSET))(this);
		}

		::System::Void HNNLCPEHDOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_HNNLCPEHDOK_OFFSET))(this);
		}

		::System::Void HDAINNPHMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_HDAINNPHMII_OFFSET))(this);
		}

		::System::Void HOIALAGDOOG(::UnityEngine::Animation* BKOLCDPOJAL, ::System::String* HIAIKHDFCLN, ::System::Action* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_HOIALAGDOOG_OFFSET))(this, BKOLCDPOJAL, HIAIKHDFCLN, EJGDHCIBCJH);
		}

		::System::Boolean KMOEKJJBPKF(::System::Boolean CHDOOFKJMLG, ::IMHLAGJKEPB MGODOGMDPCH, ::System::Single IAKPGBCAAKM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::IMHLAGJKEPB, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_KMOEKJJBPKF_OFFSET))(this, CHDOOFKJMLG, MGODOGMDPCH, IAKPGBCAAKM);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* DCALENBAHNC()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_DCALENBAHNC_OFFSET))(this);
		}

		::System::Void OKPEANDPOHH(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_OKPEANDPOHH_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Void KDODBGPCEMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_KDODBGPCEMF_OFFSET))(this);
		}

		::System::Void JMLGADNMOJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_JMLGADNMOJD_OFFSET))(this);
		}
	};
}
