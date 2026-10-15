#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_CBPOMADILDL; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_BFELJNIEENB_OFFSET UNITYSDK_OFFSET(0xD649AE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_BINDVIEWMODEL_1_OFFSET UNITYSDK_OFFSET(0xD6498E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD649800)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD64A040)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GETBOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0xD62C3A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GET_BINDITEM_OFFSET UNITYSDK_OFFSET(0xD6497E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GET_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xD6497C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xD6495A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_HPMAIAFCNEK_OFFSET UNITYSDK_OFFSET(0xD6499A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD6495E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_KPPAINPHLGN_OFFSET UNITYSDK_OFFSET(0xD649F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_SET_BINDITEM_OFFSET UNITYSDK_OFFSET(0xD6497F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_SET_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xD6497D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xD62C420)

namespace RPG::Client::MechCraft::View
{
	class MechCraftNodeListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* GCIKKMGIPIO; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KFEBMMBEPOO; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KCEOMKFBICF; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* FOOLPPOKOPJ; // 0x30
		::System::Func_1<::UnityEngine::GameObject*>* _CreateItem_k__BackingField; // 0x38
		::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL* _BindItem_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_SET_ITEMS_OFFSET))(this, a1);
		}

		::System::Func_1<::UnityEngine::GameObject*>* get_CreateItem()
		{
			return ((::System::Func_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GET_CREATEITEM_OFFSET))(this);
		}

		::System::Void set_CreateItem(::System::Func_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_SET_CREATEITEM_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL* get_BindItem()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GET_BINDITEM_OFFSET))(this);
		}

		::System::Void set_BindItem(::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_SET_BINDITEM_OFFSET))(this, a1);
		}

		::System::Void BindViewModel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_BINDVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void BindViewModel_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_BINDVIEWMODEL_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetBoundObject(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_GETBOUNDOBJECT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BFELJNIEENB(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_BFELJNIEENB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Action*>* KPPAINPHLGN(::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Action*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_KPPAINPHLGN_OFFSET))(this, a1, a2);
		}

		::System::Void HPMAIAFCNEK(::System::Collections::Generic::List_1<::System::Action*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Action*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL_HPMAIAFCNEK_OFFSET))(this, a1);
		}

	};
}
