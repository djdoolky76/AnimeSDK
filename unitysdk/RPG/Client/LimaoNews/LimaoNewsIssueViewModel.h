#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/System/Guid.h"
class OBJANKHLNGO;
class PEKFHPMIPDD;
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueService; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueSubmitWindow; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueTabViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDDEFB10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCANSUBMITISSUECOUNT_OFFSET UNITYSDK_OFFSET(0xDDF0690)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCURRENTISSUEREWARDID_OFFSET UNITYSDK_OFFSET(0xDDE93B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETINTERVIEWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDE9180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDDF0820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_CURTABICONPATH_OFFSET UNITYSDK_OFFSET(0xDDF0900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0xDDF0880)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0xDDF08A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0xDDF0860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xDDF0840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xDDF08C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDF08E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xDDE9340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISISSUECANSUBMIT_OFFSET UNITYSDK_OFFSET(0xDDEFA10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_REFRESHISSUE_OFFSET UNITYSDK_OFFSET(0xDDF00B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SETDEFAULTSELECTEDISSUE_OFFSET UNITYSDK_OFFSET(0xDDF0310)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDDF0830)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0xDDF0890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0xDDF08B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0xDDF0870)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xDDF0850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xDDF08D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDF08F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SHOWSUBMITISSUEWINDOW_OFFSET UNITYSDK_OFFSET(0xDDE9D80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xDDF0460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0xDDF03C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL__GETCURRENTISSUEDATA_OFFSET UNITYSDK_OFFSET(0xDDF0020)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueViewModel_TypeDefinitionIndex = 83246;

	class LimaoNewsIssueViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* _SurveyTypeViewModel_k__BackingField; // 0x28
		::PEKFHPMIPDD* _OnBtnTabClick_k__BackingField; // 0x30
		::Sofa::Core::SimpleCommand* _OnBtnSelectRight_k__BackingField; // 0x38
		::OBJANKHLNGO* _Messenger; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueData*>* _AllIssues; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsIssueService* _IssueService; // 0x58
		::Sofa::Core::SimpleCommand* _OnBtnSelectLeft_k__BackingField; // 0x60
		::Sofa::Core::SimpleCommand* _OnBtnSubmit_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>* _AllTabViewModels_k__BackingField; // 0x70
		::Sofa::Core::SimpleCommand* _ShowIssueSubmitWindow_k__BackingField; // 0x78
		::System::Int32 CurrentTabIndex; // 0x80
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsNetworkService* a1, ::RPG::Client::LimaoNews::LimaoNewsIssueService* a2, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a3, ::OBJANKHLNGO* a4, ::System::Guid a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::RPG::Client::LimaoNews::LimaoNewsIssueService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::OBJANKHLNGO*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* GetInterviewViewModel(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETINTERVIEWVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void RefreshIssue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_REFRESHISSUE_OFFSET))(this);
		}

		::System::Void SetDefaultSelectedIssue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SETDEFAULTSELECTEDISSUE_OFFSET))(this, a1);
		}

		::System::Void SwitchTab(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SWITCHTAB_OFFSET))(this, a1);
		}

		::System::Void SubmitIssue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SUBMITISSUE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow* ShowSubmitIssueWindow()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SHOWSUBMITISSUEWINDOW_OFFSET))(this);
		}

		::System::Boolean IsCanSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISCANSUBMIT_OFFSET))(this);
		}

		::System::UInt32 GetCanSubmitIssueCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCANSUBMITISSUECOUNT_OFFSET))(this);
		}

		::System::Boolean IsIssueCanSubmit(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_ISISSUECANSUBMIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentIssueRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GETCURRENTISSUEREWARDID_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueData* _GetCurrentIssueData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL__GETCURRENTISSUEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>* get_AllTabViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ALLTABVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_AllTabViewModels(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ALLTABVIEWMODELS_OFFSET))(this, a1);
		}

		::PEKFHPMIPDD* get_OnBtnTabClick()
		{
			return ((::PEKFHPMIPDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNTABCLICK_OFFSET))(this);
		}

		::System::Void set_OnBtnTabClick(::PEKFHPMIPDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEKFHPMIPDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNTABCLICK_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnSubmit()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSUBMIT_OFFSET))(this);
		}

		::System::Void set_OnBtnSubmit(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSUBMIT_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnSelectLeft()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTLEFT_OFFSET))(this);
		}

		::System::Void set_OnBtnSelectLeft(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTLEFT_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnSelectRight()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_ONBTNSELECTRIGHT_OFFSET))(this);
		}

		::System::Void set_OnBtnSelectRight(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_ONBTNSELECTRIGHT_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ShowIssueSubmitWindow()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SHOWISSUESUBMITWINDOW_OFFSET))(this);
		}

		::System::Void set_ShowIssueSubmitWindow(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SHOWISSUESUBMITWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* get_SurveyTypeViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_SURVEYTYPEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SurveyTypeViewModel(::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_SET_SURVEYTYPEVIEWMODEL_OFFSET))(this, a1);
		}

		::System::String* get_CurTabIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEVIEWMODEL_GET_CURTABICONPATH_OFFSET))(this);
		}

	};
}
