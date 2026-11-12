#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsManagementPlanInfoItemViewModelState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class OBJANKHLNGO;
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanStateRefreshMessage; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDDF6CE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF6E70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDF6FA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xDDF71F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xDDF7210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_LOCKDESC_OFFSET UNITYSDK_OFFSET(0xDDF7250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANDESCWAITING_OFFSET UNITYSDK_OFFSET(0xDDF71B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xDDF7190)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xDDF71D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xDDF7230)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_REGISTERREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0xDDF6E90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xDDF7200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xDDF7220)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANDESCWAITING_OFFSET UNITYSDK_OFFSET(0xDDF71C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xDDF71A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xDDF71E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_STATE_OFFSET UNITYSDK_OFFSET(0xDDF7240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_UNREGISTERREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0xDDF6EE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__GETLOCKDESC_OFFSET UNITYSDK_OFFSET(0xDDF7030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__ONPLANSTATEREFRESHMESSAGE_OFFSET UNITYSDK_OFFSET(0xDDF6F30)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsManagementPlanInfoViewModel_TypeDefinitionIndex = 83207;

	class LimaoNewsManagementPlanInfoViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Action* _RefreshCallback; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* _Items_k__BackingField; // 0x28
		::OBJANKHLNGO* _Messenger; // 0x30
		::System::String* _ImagePath_k__BackingField; // 0x38
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService; // 0x40
		::RPG::Client::TextID _PlanDescWaiting_k__BackingField; // 0x48
		::RPG::Client::TextID _PlanTitle_k__BackingField; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState _State_k__BackingField; // 0x68
		::System::UInt32 _RewardID_k__BackingField; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel* Create(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::UInt32 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* a5, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState a6, ::OBJANKHLNGO* a7, ::RPG::Client::LimaoNews::LimaoNewsOfferingService* a8)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState, ::OBJANKHLNGO*, ::RPG::Client::LimaoNews::LimaoNewsOfferingService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void RegisterRefreshCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_REGISTERREFRESHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterRefreshCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_UNREGISTERREFRESHCALLBACK_OFFSET))(this);
		}

		::System::Void _OnPlanStateRefreshMessage(::RPG::Client::LimaoNews::LimaoNewsPlanStateRefreshMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanStateRefreshMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__ONPLANSTATEREFRESHMESSAGE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::TextID _GetLockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__GETLOCKDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_PlanTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANTITLE_OFFSET))(this);
		}

		::System::Void set_PlanTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlanDescWaiting()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANDESCWAITING_OFFSET))(this);
		}

		::System::Void set_PlanDescWaiting(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANDESCWAITING_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_REWARDID_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_ITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState get_State()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_LOCKDESC_OFFSET))(this);
		}

	};
}
