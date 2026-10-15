#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EDNECKFHLEM;
class NJOJGMKFPFA;
namespace RPG::Client { class DynamicPrefabLoader; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TABVIEW_ADD_LOCKEDTABCLICKED_OFFSET UNITYSDK_OFFSET(0xE18DB10)
#define RPG_CLIENT_TABVIEW_ADD_OFFSET UNITYSDK_OFFSET(0xE18DE10)
#define RPG_CLIENT_TABVIEW_ADD_SELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE18DA10)
#define RPG_CLIENT_TABVIEW_ADD_SELECTEDTABPRECHANGING_OFFSET UNITYSDK_OFFSET(0xE18D910)
#define RPG_CLIENT_TABVIEW_ADD_TABADDED_OFFSET UNITYSDK_OFFSET(0xE18DC10)
#define RPG_CLIENT_TABVIEW_ADD_TABREMOVED_OFFSET UNITYSDK_OFFSET(0xE18DD10)
#define RPG_CLIENT_TABVIEW_ALIJGDHHGLA_OFFSET UNITYSDK_OFFSET(0xE18FDC0)
#define RPG_CLIENT_TABVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xE18FB20)
#define RPG_CLIENT_TABVIEW_BCFKKOHHPGC_OFFSET UNITYSDK_OFFSET(0xE18EBE0)
#define RPG_CLIENT_TABVIEW_BDFJDMNLBNG_OFFSET UNITYSDK_OFFSET(0xE18D6C0)
#define RPG_CLIENT_TABVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0xE18ED00)
#define RPG_CLIENT_TABVIEW_CNPLGBPIPCJ_OFFSET UNITYSDK_OFFSET(0xE18E350)
#define RPG_CLIENT_TABVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xE190050)
#define RPG_CLIENT_TABVIEW_EKINJAAICJK_OFFSET UNITYSDK_OFFSET(0xE18EA40)
#define RPG_CLIENT_TABVIEW_GCIJOEGJHOE_OFFSET UNITYSDK_OFFSET(0xE18E080)
#define RPG_CLIENT_TABVIEW_GETTABHEADERPREFAB_OFFSET UNITYSDK_OFFSET(0xE18D2E0)
#define RPG_CLIENT_TABVIEW_GETTABHEADER_OFFSET UNITYSDK_OFFSET(0xE18EFE0)
#define RPG_CLIENT_TABVIEW_GETTAB_OFFSET UNITYSDK_OFFSET(0xE18EF50)
#define RPG_CLIENT_TABVIEW_GET_CONTENTROOTS_OFFSET UNITYSDK_OFFSET(0xE18D370)
#define RPG_CLIENT_TABVIEW_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xE18D120)
#define RPG_CLIENT_TABVIEW_GET_DYNAMICCONTENTPREFABS_OFFSET UNITYSDK_OFFSET(0xE18D3B0)
#define RPG_CLIENT_TABVIEW_GET_HEADERCONTAINER_OFFSET UNITYSDK_OFFSET(0xE18D170)
#define RPG_CLIENT_TABVIEW_GET_HEADERPREFABS_OFFSET UNITYSDK_OFFSET(0xE18D2A0)
#define RPG_CLIENT_TABVIEW_GET_PREVIOUSSELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xE18D8D0)
#define RPG_CLIENT_TABVIEW_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xE18D680)
#define RPG_CLIENT_TABVIEW_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xE18D3F0)
#define RPG_CLIENT_TABVIEW_GET_TABS_OFFSET UNITYSDK_OFFSET(0xE18D0E0)
#define RPG_CLIENT_TABVIEW_GJCMEMEPLNM_OFFSET UNITYSDK_OFFSET(0xE18E440)
#define RPG_CLIENT_TABVIEW_GLNMMIEPAIO_OFFSET UNITYSDK_OFFSET(0xE18F260)
#define RPG_CLIENT_TABVIEW_HOOKHOIKLKC_OFFSET UNITYSDK_OFFSET(0xE18D220)
#define RPG_CLIENT_TABVIEW_IIANGFHPKEK_OFFSET UNITYSDK_OFFSET(0xE18D760)
#define RPG_CLIENT_TABVIEW_INDEXOF_OFFSET UNITYSDK_OFFSET(0xE18F070)
#define RPG_CLIENT_TABVIEW_INSERT_OFFSET UNITYSDK_OFFSET(0xE18DE70)
#define RPG_CLIENT_TABVIEW_JEKHNNPPDME_OFFSET UNITYSDK_OFFSET(0xE18F100)
#define RPG_CLIENT_TABVIEW_NBHHKKANDGN_OFFSET UNITYSDK_OFFSET(0xE18F620)
#define RPG_CLIENT_TABVIEW_NIJDCJNLAHO_OFFSET UNITYSDK_OFFSET(0xE18FEE0)
#define RPG_CLIENT_TABVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE18FCA0)
#define RPG_CLIENT_TABVIEW_REMOVEAT_OFFSET UNITYSDK_OFFSET(0xE18E7A0)
#define RPG_CLIENT_TABVIEW_REMOVE_LOCKEDTABCLICKED_OFFSET UNITYSDK_OFFSET(0xE18DB90)
#define RPG_CLIENT_TABVIEW_REMOVE_OFFSET UNITYSDK_OFFSET(0xE18E700)
#define RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE18DA90)
#define RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABPRECHANGING_OFFSET UNITYSDK_OFFSET(0xE18D990)
#define RPG_CLIENT_TABVIEW_REMOVE_TABADDED_OFFSET UNITYSDK_OFFSET(0xE18DC90)
#define RPG_CLIENT_TABVIEW_REMOVE_TABREMOVED_OFFSET UNITYSDK_OFFSET(0xE18DD90)
#define RPG_CLIENT_TABVIEW_REORDERTAB_OFFSET UNITYSDK_OFFSET(0xE18F440)
#define RPG_CLIENT_TABVIEW_SELECTNEXT_OFFSET UNITYSDK_OFFSET(0xE18F3E0)
#define RPG_CLIENT_TABVIEW_SELECTPREVIOUS_OFFSET UNITYSDK_OFFSET(0xE18F200)
#define RPG_CLIENT_TABVIEW_SET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xE18D610)
#define RPG_CLIENT_TABVIEW_SET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xE18D480)

namespace RPG::Client
{
	inline static constexpr unsigned int TabView_TypeDefinitionIndex = 72675;

	class TabView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _HeaderContainer; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HeaderPrefabs; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ContentRoots; // 0x28
		::RPG::Client::DynamicPrefabLoader* _DynamicContentPrefabs; // 0x30
		::UnityEngine::GameObject* _EmptyStateNode; // 0x38
		::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>* SelectedTabPreChanging; // 0x40
		::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>* SelectedTabChanged; // 0x48
		::System::Action_1<::EDNECKFHLEM*>* LockedTabClicked; // 0x50
		::System::Action_1<::EDNECKFHLEM*>* TabAdded; // 0x58
		::System::Action_1<::EDNECKFHLEM*>* TabRemoved; // 0x60
		::System::Collections::Generic::List_1<::EDNECKFHLEM*>* HEFOLKEGHEM; // 0x68
		::System::Int32 LAKBMOEGNGD; // 0x70
		::System::Int32 CLNHCPBMEEA; // 0x74
		::System::Int32 DPNMLDLLBLA; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EDNECKFHLEM*>* get_Tabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EDNECKFHLEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_TABS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HeaderContainer()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_HEADERCONTAINER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* get_HeaderPrefabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_HEADERPREFABS_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTabHeaderPrefab(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GETTABHEADERPREFAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* get_ContentRoots()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_CONTENTROOTS_OFFSET))(this);
		}

		::RPG::Client::DynamicPrefabLoader* get_DynamicContentPrefabs()
		{
			return ((::RPG::Client::DynamicPrefabLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_DYNAMICCONTENTPREFABS_OFFSET))(this);
		}

		::EDNECKFHLEM* get_SelectedTab()
		{
			return ((::EDNECKFHLEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_SELECTEDTAB_OFFSET))(this);
		}

		::System::Void set_SelectedTab(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SET_SELECTEDTAB_OFFSET))(this, a1);
		}

		::System::Int32 get_SelectedTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_SELECTEDTABINDEX_OFFSET))(this);
		}

		::System::Void set_SelectedTabIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SET_SELECTEDTABINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_PreviousSelectedTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_PREVIOUSSELECTEDTABINDEX_OFFSET))(this);
		}

		::System::Void add_SelectedTabPreChanging(::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_SELECTEDTABPRECHANGING_OFFSET))(this, a1);
		}

		::System::Void remove_SelectedTabPreChanging(::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABPRECHANGING_OFFSET))(this, a1);
		}

		::System::Void add_SelectedTabChanged(::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_SELECTEDTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_SelectedTabChanged(::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_LockedTabClicked(::System::Action_1<::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_LOCKEDTABCLICKED_OFFSET))(this, a1);
		}

		::System::Void remove_LockedTabClicked(::System::Action_1<::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_LOCKEDTABCLICKED_OFFSET))(this, a1);
		}

		::System::Void add_TabAdded(::System::Action_1<::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_TABADDED_OFFSET))(this, a1);
		}

		::System::Void remove_TabAdded(::System::Action_1<::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_TABADDED_OFFSET))(this, a1);
		}

		::System::Void add_TabRemoved(::System::Action_1<::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_TABREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_TabRemoved(::System::Action_1<::EDNECKFHLEM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EDNECKFHLEM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_TABREMOVED_OFFSET))(this, a1);
		}

		::System::Void Add(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::EDNECKFHLEM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::EDNECKFHLEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_CLEAR_OFFSET))(this);
		}

		::EDNECKFHLEM* GetTab(::System::Int32 a1)
		{
			return ((::EDNECKFHLEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GETTAB_OFFSET))(this, a1);
		}

		::NJOJGMKFPFA* GetTabHeader(::System::Int32 a1)
		{
			return ((::NJOJGMKFPFA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GETTABHEADER_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::EDNECKFHLEM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void JEKHNNPPDME(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_JEKHNNPPDME_OFFSET))(this, a1);
		}

		::System::Boolean SelectPrevious(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SELECTPREVIOUS_OFFSET))(this, a1);
		}

		::System::Boolean SelectNext(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SELECTNEXT_OFFSET))(this, a1);
		}

		::System::Void ReorderTab(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REORDERTAB_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void HOOKHOIKLKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_HOOKHOIKLKC_OFFSET))(this);
		}

		::System::Void GCIJOEGJHOE(::EDNECKFHLEM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GCIJOEGJHOE_OFFSET))(this, a1, a2);
		}

		::System::Void NBHHKKANDGN(::EDNECKFHLEM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_NBHHKKANDGN_OFFSET))(this, a1, a2);
		}

		::System::Void EKINJAAICJK(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_EKINJAAICJK_OFFSET))(this, a1);
		}

		::System::Void ALIJGDHHGLA(::EDNECKFHLEM* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ALIJGDHHGLA_OFFSET))(this, a1, a2);
		}

		::System::Void CNPLGBPIPCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_CNPLGBPIPCJ_OFFSET))(this);
		}

		::System::Boolean GLNMMIEPAIO(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GLNMMIEPAIO_OFFSET))(this, a1, a2);
		}

		::System::Boolean BDFJDMNLBNG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_BDFJDMNLBNG_OFFSET))(this, a1);
		}

		::System::Void IIANGFHPKEK(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_IIANGFHPKEK_OFFSET))(this, a1, a2);
		}

		::System::Void GJCMEMEPLNM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GJCMEMEPLNM_OFFSET))(this, a1);
		}

		::System::Void BCFKKOHHPGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_BCFKKOHHPGC_OFFSET))(this);
		}

		::System::Void NIJDCJNLAHO(::EDNECKFHLEM* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_NIJDCJNLAHO_OFFSET))(this, a1, a2, a3);
		}

	};
}
