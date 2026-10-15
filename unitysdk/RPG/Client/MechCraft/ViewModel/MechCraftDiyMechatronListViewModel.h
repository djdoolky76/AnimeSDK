#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJILMHOMGP;
class CEEGMMCFCBG;
class EJCLAFODBMD;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronTabViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiySignal; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyViewEvent; }
namespace RPG::Client::MechCraft::ViewModel { template <typename T> class MechCraftDiySignal_1; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD673E00)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD674CE0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_DISPLAYITEMS_OFFSET UNITYSDK_OFFSET(0xD673D80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTEDITEMINDEX_OFFSET UNITYSDK_OFFSET(0xD673CA0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTEDITEM_OFFSET UNITYSDK_OFFSET(0xD673D20)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xD673C80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTITEMCOMMAND_OFFSET UNITYSDK_OFFSET(0xD673DD0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTNEXTCOMMAND_OFFSET UNITYSDK_OFFSET(0xD673DF0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTPREVCOMMAND_OFFSET UNITYSDK_OFFSET(0xD673DE0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTTABCOMMAND_OFFSET UNITYSDK_OFFSET(0xD673DC0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_TABS_OFFSET UNITYSDK_OFFSET(0xD673D40)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_REQUESTLEFTLISTFADEIN_OFFSET UNITYSDK_OFFSET(0xD6746F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SET_SELECTEDITEM_OFFSET UNITYSDK_OFFSET(0xD673D30)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xD673C90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SUBSCRIBECHANGED_OFFSET UNITYSDK_OFFSET(0xD674600)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SUBSCRIBEVIEWEVENT_OFFSET UNITYSDK_OFFSET(0xD674660)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__FINDDEFAULTITEM_OFFSET UNITYSDK_OFFSET(0xD674950)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__FINDTABINDEX_OFFSET UNITYSDK_OFFSET(0xD674120)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__ONSELECTNEXT_OFFSET UNITYSDK_OFFSET(0xD6748A0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__ONSELECTPREV_OFFSET UNITYSDK_OFFSET(0xD6747B0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTITEM_OFFSET UNITYSDK_OFFSET(0xD674BB0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTRELATIVETAB_OFFSET UNITYSDK_OFFSET(0xD674800)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTTAB_1_OFFSET UNITYSDK_OFFSET(0xD6743A0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTTAB_OFFSET UNITYSDK_OFFSET(0xD6748F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SETSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0xD674AC0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronListViewModel_TypeDefinitionIndex = 79629;

	class MechCraftDiyMechatronListViewModel : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal_1<::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent*>* _ViewEvent; // 0x10
		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel* _SelectedItem_k__BackingField; // 0x18
		::CEEGMMCFCBG* _SelectNextCommand_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*>* _TabItems; // 0x28
		::CEEGMMCFCBG* _SelectPrevCommand_k__BackingField; // 0x30
		::CBJILMHOMGP* _SelectTabCommand_k__BackingField; // 0x38
		::EJCLAFODBMD* _QueryUserPrefsService; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>* _DisplayItems; // 0x48
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal* _Changed; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronTabViewModel*>* _Tabs; // 0x58
		::CBJILMHOMGP* _SelectItemCommand_k__BackingField; // 0x60
		::System::Int32 _SelectedTabIndex_k__BackingField; // 0x68
		::System::UInt32 _DefaultMechatronID; // 0x6C
		::System::Boolean _Disposed; // 0x70
		::System::Void _ctor(::EJCLAFODBMD* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::EJCLAFODBMD*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_SelectedTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTEDTABINDEX_OFFSET))(this);
		}

		::System::Void set_SelectedTabIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SET_SELECTEDTABINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_SelectedItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTEDITEMINDEX_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel* get_SelectedItem()
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTEDITEM_OFFSET))(this);
		}

		::System::Void set_SelectedItem(::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SET_SELECTEDITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronTabViewModel*>* get_Tabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_TABS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>* get_DisplayItems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_DISPLAYITEMS_OFFSET))(this);
		}

		::CBJILMHOMGP* get_SelectTabCommand()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTTABCOMMAND_OFFSET))(this);
		}

		::CBJILMHOMGP* get_SelectItemCommand()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTITEMCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_SelectPrevCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTPREVCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_SelectNextCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_GET_SELECTNEXTCOMMAND_OFFSET))(this);
		}

		::System::IDisposable* SubscribeChanged(::System::Action* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SUBSCRIBECHANGED_OFFSET))(this, a1);
		}

		::System::IDisposable* SubscribeViewEvent(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent*>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_SUBSCRIBEVIEWEVENT_OFFSET))(this, a1);
		}

		::System::Void RequestLeftListFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_REQUESTLEFTLISTFADEIN_OFFSET))(this);
		}

		::System::Void _OnSelectPrev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__ONSELECTPREV_OFFSET))(this);
		}

		::System::Void _OnSelectNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__ONSELECTNEXT_OFFSET))(this);
		}

		::System::Void _SelectRelativeTab(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTRELATIVETAB_OFFSET))(this, a1);
		}

		::System::Void _SelectTab(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTTAB_OFFSET))(this, a1);
		}

		::System::Void _SelectTab_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTTAB_1_OFFSET))(this, a1, a2);
		}

		::System::Void _SelectItem(::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SELECTITEM_OFFSET))(this, a1);
		}

		::System::Void _SetSelectedItem(::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__SETSELECTEDITEM_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel* _FindDefaultItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__FINDDEFAULTITEM_OFFSET))(this, a1);
		}

		::System::Int32 _FindTabIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL__FINDTABINDEX_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONLISTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

	};
}
