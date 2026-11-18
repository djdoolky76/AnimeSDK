#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/NALGCBINDPE.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class ANHOLIOLKHH;
class EDOGNMJGGKO;
class ILCKLJMLBJO;
class KCFGFLAIJOM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_BINDCLICK_OFFSET UNITYSDK_OFFSET(0x1757A6C0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x17579260)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CMPLHGCOMNO_OFFSET UNITYSDK_OFFSET(0x175791B0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CNLPDJLMDFD_OFFSET UNITYSDK_OFFSET(0x17579A20)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_GETANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x17579020)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_HHMOMNOPGKN_OFFSET UNITYSDK_OFFSET(0x1757B5C0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_HJDHBEHJHIP_OFFSET UNITYSDK_OFFSET(0x1757B2E0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_IMOBADCIAPI_OFFSET UNITYSDK_OFFSET(0x1757A490)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_MDLNMBLEGPE_OFFSET UNITYSDK_OFFSET(0x1757BCD0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_MHEOKCCMBPA_OFFSET UNITYSDK_OFFSET(0x17579400)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_OBGIDKLJKLK_OFFSET UNITYSDK_OFFSET(0x17579FE0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_OKOELLIAMCM_OFFSET UNITYSDK_OFFSET(0x17579EA0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17578BC0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17578F40)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17579320)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17578C50)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REFRESHDIGIBOO_OFFSET UNITYSDK_OFFSET(0x175796B0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATECOMPLETEONCE_OFFSET UNITYSDK_OFFSET(0x1757ABE0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1757AB10)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1757A710)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1757A7E0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATENORMALIZEDTIMEEVENT_OFFSET UNITYSDK_OFFSET(0x1757A9D0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATETIMEEVENT_OFFSET UNITYSDK_OFFSET(0x1757A8B0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_SETMACHINEBUILDER_OFFSET UNITYSDK_OFFSET(0x175790B0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1757AC60)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1757AE40)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1757B090)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1757B120)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1757B1C0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1757B250)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooSpineWidgetController_TypeDefinitionIndex = 87511;

	class UIDigibooSpineWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 FKCAHHPHEJP; // 0x2C8
		::System::Int32 HKFJICLHELF; // 0x2CC
		::ANHOLIOLKHH* Animation; // 0x2D0
		::KCFGFLAIJOM* StateMachine; // 0x2D8
		::ILCKLJMLBJO* _view; // 0x2E0
		::System::Action* BFOMBFMONJG; // 0x2E8
		::System::UInt32 GGCKFEGMPLC; // 0x2F0
		::System::Int32 LPMLKILGCDM; // 0x2F4
		::EDOGNMJGGKO* HLNMOHDDLAE; // 0x2F8
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Action_1<::System::String*>*>>* GCLFMHKIAGO; // 0x300
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Action_1<::System::String*>*>>* JEFGPMLOIDB; // 0x308
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Action_1<::System::String*>*>>* MNHCOKAPAMF; // 0x310
		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::String*, ::System::Single, ::System::Action*>>* LPPCECDANFE; // 0x318
		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::String*, ::System::Single, ::System::Action*>>* BNCOAPOHMFK; // 0x320
		::System::String* JBICFCOMNGE; // 0x328
		::UnityEngine::GameObject* GELMGNNCGEK; // 0x330
		::Foundation::AssetRequestHandle NJBAECOFFIJ; // 0x338
		::NALGCBINDPE FGFGEOJDIBC; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Single GetAnimationLength(::System::String* anim, ::System::Single defaultLength)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_GETANIMATIONLENGTH_OFFSET))(this, anim, defaultLength);
		}

		::System::Void SetMachineBuilder(::EDOGNMJGGKO* MachineBuilder)
		{
			return ((::System::Void(*)(::PVOID, ::EDOGNMJGGKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_SETMACHINEBUILDER_OFFSET))(this, MachineBuilder);
		}

		::System::Void ChangeState(::System::String* stateName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CHANGESTATE_OFFSET))(this, stateName);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshDigiboo(::System::Int32 digibooID, ::System::UInt32 uid, ::NALGCBINDPE widget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NALGCBINDPE))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REFRESHDIGIBOO_OFFSET))(this, digibooID, uid, widget);
		}

		::System::Void BindClick(::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_BINDCLICK_OFFSET))(this, onClick);
		}

		::System::Void RegisterStateEnter(::System::String* state, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATEENTER_OFFSET))(this, state, callback);
		}

		::System::Void RegisterStateExit(::System::String* state, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATEEXIT_OFFSET))(this, state, callback);
		}

		::System::Void RegisterStateTimeEvent(::System::String* state, ::System::Single time, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATETIMEEVENT_OFFSET))(this, state, time, callback);
		}

		::System::Void RegisterStateNormalizedTimeEvent(::System::String* state, ::System::Single normalizedTime, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATENORMALIZEDTIMEEVENT_OFFSET))(this, state, normalizedTime, callback);
		}

		::System::Void RegisterStateComplete(::System::String* state, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATECOMPLETE_OFFSET))(this, state, callback);
		}

		::System::Void RegisterStateCompleteOnce(::System::String* state, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_REGISTERSTATECOMPLETEONCE_OFFSET))(this, state, callback);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void OBGIDKLJKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_OBGIDKLJKLK_OFFSET))(this);
		}

		::System::Void IMOBADCIAPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_IMOBADCIAPI_OFFSET))(this);
		}

		::System::Void MHEOKCCMBPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_MHEOKCCMBPA_OFFSET))(this);
		}

		::System::Void MDLNMBLEGPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_MDLNMBLEGPE_OFFSET))(this);
		}

		::System::String* HJDHBEHJHIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_HJDHBEHJHIP_OFFSET))(this);
		}

		::System::Void OKOELLIAMCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_OKOELLIAMCM_OFFSET))(this);
		}

		::System::Void HHMOMNOPGKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_HHMOMNOPGKN_OFFSET))(this);
		}

		::System::Void CMPLHGCOMNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CMPLHGCOMNO_OFFSET))(this);
		}

		::System::Void CNLPDJLMDFD(::System::String* OMMOFJOLHNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CNLPDJLMDFD_OFFSET))(this, OMMOFJOLHNN);
		}
	};
}
