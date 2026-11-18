#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MEGMENEKJBO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12C14A40)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12C14940)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C14840)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ALNPBEELAPG_OFFSET UNITYSDK_OFFSET(0x12C142B0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12C14BE0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GDBIOMPMMNI_OFFSET UNITYSDK_OFFSET(0x12C14C90)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_HASCREATE_OFFSET UNITYSDK_OFFSET(0x12C141C0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_INS_OFFSET UNITYSDK_OFFSET(0x12C14590)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x12C147E0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12C14B90)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_OGHLNBJCPPM_OFFSET UNITYSDK_OFFSET(0x12C14F30)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C14C30)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_PJGFFMOJHOB_OFFSET UNITYSDK_OFFSET(0x12C14D90)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12C14AC0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12C149C0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C148C0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C14B40)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x12C14D40)

namespace MoleMole::UpdateWindow
{
	inline static constexpr unsigned int UpdateBehaviour_TypeDefinitionIndex = 41003;

	class UpdateBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::UpdateWindow::UpdateBehaviour** StaticGet_PMKINFHDLFD()
		{
			return (::MoleMole::UpdateWindow::UpdateBehaviour**)Il2CppClass::FromTypeDefinitionIndex(UpdateBehaviour_TypeDefinitionIndex)->GetStaticField(0x50E40);
		}
		::System::Action* CHNNLBPHMEP; // 0x18
		::System::Action* PHOJLBPNJEB; // 0x20
		::System::Action* EJCCEMCGGLP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_HasCreate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_HASCREATE_OFFSET))();
		}

		static ::MoleMole::UpdateWindow::UpdateBehaviour* get_Ins()
		{
			return ((::MoleMole::UpdateWindow::UpdateBehaviour*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_INS_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::MEGMENEKJBO*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::MEGMENEKJBO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_ITEMS_OFFSET))(this);
		}

		::System::Void add_onUpdate(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONUPDATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_onUpdate(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONUPDATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void add_onLateUpdate(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONLATEUPDATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_onLateUpdate(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONLATEUPDATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void add_onFixedUpdate(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONFIXEDUPDATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_onFixedUpdate(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONFIXEDUPDATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void PJGFFMOJHOB(::System::Action*& KHGFAKJKDGG, ::System::Action* AOKHOHCJNFJ)
		{
			return ((::System::Void(*)(::System::Action*&, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_PJGFFMOJHOB_OFFSET))(KHGFAKJKDGG, AOKHOHCJNFJ);
		}

		static ::System::Void GDBIOMPMMNI(::MoleMole::UpdateWindow::UpdateBehaviour* ECMMKCJLBMD)
		{
			return ((::System::Void(*)(::MoleMole::UpdateWindow::UpdateBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GDBIOMPMMNI_OFFSET))(ECMMKCJLBMD);
		}

		::System::Void OGHLNBJCPPM(::System::Action* BKELEIOAIKP, ::System::Action* PDHLCEHDIKF, ::System::Action* ONLIKFONIOF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_OGHLNBJCPPM_OFFSET))(this, BKELEIOAIKP, PDHLCEHDIKF, ONLIKFONIOF);
		}

		static ::MoleMole::UpdateWindow::UpdateBehaviour* ALNPBEELAPG()
		{
			return ((::MoleMole::UpdateWindow::UpdateBehaviour*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ALNPBEELAPG_OFFSET))();
		}
	};
}
