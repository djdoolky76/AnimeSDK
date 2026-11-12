#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class PEKFHPMIPDD;
namespace RPG::Client::LimaoNews { class LimaoNewsBoxMessageViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEMS_OFFSET UNITYSDK_OFFSET(0xDDD5620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEM_OFFSET UNITYSDK_OFFSET(0xDDD6320)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xDDD6880)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xDDD6700)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_OPTIONCLICKED_OFFSET UNITYSDK_OFFSET(0xDDD67C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_APPENDMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0xDDD6400)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDDD61D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDDD5450)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDDD5590)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETMESSAGEITEMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDD6480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETOPTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDD6510)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_HISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xDDD6A40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_MESSAGEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xDDD69A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xDDD6980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xDDD6940)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0xDDD6960)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_OPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xDDD69F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xDDD68E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xDDD6760)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_OPTIONCLICKED_OFFSET UNITYSDK_OFFSET(0xDDD6820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SETOPTIONS_OFFSET UNITYSDK_OFFSET(0xDDD5AF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_HISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0xDDD6A50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xDDD6990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xDDD6950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0xDDD6970)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xDDD6060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONALLITEMSPLAYED_OFFSET UNITYSDK_OFFSET(0xDDD66A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONITEMPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0xDDD65A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONOPTIONCLICK_OFFSET UNITYSDK_OFFSET(0xDDD6610)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsBoxMessageViewModel_TypeDefinitionIndex = 83220;

	class LimaoNewsBoxMessageViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OnAllItemsPlayed_k__BackingField; // 0x20
		::System::Action_1<::System::Int32>* OptionClicked; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* _OptionViewModels; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsMessageSequence* _CurrentSequence; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* _MessageItemViewModels; // 0x40
		::PEKFHPMIPDD* _OnItemPlayFinished_k__BackingField; // 0x48
		::System::Action* AllItemsPlayed; // 0x50
		::System::Action_1<::System::Int32>* ItemPlayFinished; // 0x58
		::PEKFHPMIPDD* _OnOptionClick_k__BackingField; // 0x60
		::System::Int32 _HistoryMessageCount_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* Create(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel* Create_1(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsBoxMessageViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsMessageSequence*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_CREATE_1_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void AddInitialItem(::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEM_OFFSET))(this, a1);
		}

		::System::Void AddInitialItems(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADDINITIALITEMS_OFFSET))(this, a1);
		}

		::System::Void SetOptions(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SETOPTIONS_OFFSET))(this, a1);
		}

		::System::Void AppendMessageSequence(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_APPENDMESSAGESEQUENCE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel* GetMessageItemViewModel(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETMESSAGEITEMVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel* GetOptionViewModel(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GETOPTIONVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void _OnItemPlayFinished(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnOptionClick(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONOPTIONCLICK_OFFSET))(this, a1);
		}

		::System::Void _OnAllItemsPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL__ONALLITEMSPLAYED_OFFSET))(this);
		}

		::System::Void add_ItemPlayFinished(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_ItemPlayFinished(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_OptionClicked(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_OPTIONCLICKED_OFFSET))(this, a1);
		}

		::System::Void remove_OptionClicked(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_OPTIONCLICKED_OFFSET))(this, a1);
		}

		::System::Void add_AllItemsPlayed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_ADD_ALLITEMSPLAYED_OFFSET))(this, a1);
		}

		::System::Void remove_AllItemsPlayed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_REMOVE_ALLITEMSPLAYED_OFFSET))(this, a1);
		}

		::PEKFHPMIPDD* get_OnItemPlayFinished()
		{
			return ((::PEKFHPMIPDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONITEMPLAYFINISHED_OFFSET))(this);
		}

		::System::Void set_OnItemPlayFinished(::PEKFHPMIPDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEKFHPMIPDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONITEMPLAYFINISHED_OFFSET))(this, a1);
		}

		::PEKFHPMIPDD* get_OnOptionClick()
		{
			return ((::PEKFHPMIPDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONOPTIONCLICK_OFFSET))(this);
		}

		::System::Void set_OnOptionClick(::PEKFHPMIPDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEKFHPMIPDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONOPTIONCLICK_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnAllItemsPlayed()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_ONALLITEMSPLAYED_OFFSET))(this);
		}

		::System::Void set_OnAllItemsPlayed(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_ONALLITEMSPLAYED_OFFSET))(this, a1);
		}

		::System::Int32 get_MessageItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_MESSAGEITEMCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OptionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_OPTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_HistoryMessageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_GET_HISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_HistoryMessageCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSBOXMESSAGEVIEWMODEL_SET_HISTORYMESSAGECOUNT_OFFSET))(this, a1);
		}

	};
}
