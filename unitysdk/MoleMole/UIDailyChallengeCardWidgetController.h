#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/HCIGHKBNBHJ.h"
#include "unitysdk/MoleMole/UIDailyChallengeCardWidgetController___c__DisplayClass15_0.h"

class CLBIPJJNLHK;
class FAKGOOMIIIO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x173A17B0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_DDKCJNHLCLF_OFFSET UNITYSDK_OFFSET(0x173A3F30)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_HAEBEAIDNOF_OFFSET UNITYSDK_OFFSET(0x173A35D0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_MHMFELEOKLG_OFFSET UNITYSDK_OFFSET(0x173A40D0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173A18D0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x173A1C70)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x173A1960)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173A1B40)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173A1740)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_OPENREWARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x173A1D50)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_PGCJHNEPHIA_OFFSET UNITYSDK_OFFSET(0x173A3FB0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x173A2590)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETCLICKEDACTION_OFFSET UNITYSDK_OFFSET(0x173A16F0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x173A1AD0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x173A3BB0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173A3BA0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__OPENREWARDPREVIEW_G__GETLEVELREWARD_15_0_OFFSET UNITYSDK_OFFSET(0x173A2530)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173A3C50)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x173A3CE0)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x173A3D70)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173A3E10)
#define MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173A3EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeCardWidgetController_TypeDefinitionIndex = 87809;

	class UIDailyChallengeCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::String*>*>** StaticGet_CNCCOOEMLBK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengeCardWidgetController_TypeDefinitionIndex)->GetStaticField(0x521E0);
		}
		::CLBIPJJNLHK* _view; // 0x2F8
		::System::UInt32 OOEOHNBJMGD; // 0x300
		::System::Boolean LBBADCOOJMH; // 0x304
		::System::Byte _padding0[0x3];
		::System::Action_1<::System::Int32>* EBBCMABGADO; // 0x308
		::System::Int32 ODMBOOBOFAE; // 0x310
		::System::Byte _padding1[0x4];
		::FAKGOOMIIIO* NDDNONCGABO; // 0x318
		::UnityEngine::Coroutine* CKMCBNELFGC; // 0x320
		::MoleMole::UIDoubleTipsInfoWidgetController* PFAPPMIONFJ; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void SetClickedAction(::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETCLICKEDACTION_OFFSET))(this, callback);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OpenRewardPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_OPENREWARDPREVIEW_OFFSET))(this);
		}

		::System::Void SetData(::HCIGHKBNBHJ info)
		{
			return ((::System::Void(*)(::PVOID, ::HCIGHKBNBHJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_SETDATA_OFFSET))(this, info);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* _OpenRewardPreview_g__GetLevelReward_15_0(::System::Int32 level, ::MoleMole::UIDailyChallengeCardWidgetController___c__DisplayClass15_0& param_1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::MoleMole::UIDailyChallengeCardWidgetController___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER__OPENREWARDPREVIEW_G__GETLEVELREWARD_15_0_OFFSET))(level, param_1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DDKCJNHLCLF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_DDKCJNHLCLF_OFFSET))(this);
		}

		::System::Void PGCJHNEPHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_PGCJHNEPHIA_OFFSET))(this);
		}

		::System::Void HAEBEAIDNOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_HAEBEAIDNOF_OFFSET))(this);
		}

		::System::Void MHMFELEOKLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDWIDGETCONTROLLER_MHMFELEOKLG_OFFSET))(this);
		}
	};
}
