#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class BNIPDPNMLPA;
class OBJANKHLNGO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client { class UIMeta; }
namespace RPG::Client::LimaoNews { class LimaoNewsForumControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsWebsiteViewModel; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC7230)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CBC8D50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__EXITVIEW_OFFSET UNITYSDK_OFFSET(0x1CBC91E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__INITNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1CBC8FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CBC7EF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x1CBC8E00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1CBC92C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x1CBC9190)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CBC7330)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSCLOSEWEBSITE_OFFSET UNITYSDK_OFFSET(0x1CBC9C20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSFORUMOPERATION_OFFSET UNITYSDK_OFFSET(0x1CBC9670)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0x1CBC9A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET UNITYSDK_OFFSET(0x1CBC9620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0x1CBC9450)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET UNITYSDK_OFFSET(0x1CBC9580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBC93B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHCONDITION_OFFSET UNITYSDK_OFFSET(0x1CBC94C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0x1CBC9860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0x1CBC98B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1CBC87D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBC7E30)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWebsiteWindow_TypeDefinitionIndex = 83184;

	class LimaoNewsWebsiteWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsIssueControl* _IssueControl; // 0x48
		::UnityEngine::Transform* _NodeForumRedDotPoint; // 0x50
		::RPG::Client::UIMeta* _UIMeta; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsForumControl* _ForumControl; // 0x60
		::UnityEngine::Transform* _NodeForumRedDot; // 0x68
		::RPG::Client::LimaoNews::LimaoNewsSponsorControl* _SponsorControl; // 0x70
		::RPG::Client::AnimatorButton* _BtnIssue; // 0x78
		::RPG::Client::AnimatorButton* _BtnForum; // 0x80
		::RPG::Client::MonoPrefabSwitcher* _MonoPrefabSwitcher; // 0x88
		::UnityEngine::Transform* _NodeForumRedDotNew; // 0x90
		::UnityEngine::Transform* _NodeIssueRedDot; // 0x98
		::RPG::Client::AnimatorButton* _BtnClose; // 0xA0
		::UnityEngine::Transform* _NodeBtnForumTag; // 0xA8
		::UnityEngine::Transform* _NodeBtnIssueTag; // 0xB0
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0xB8
		::OBJANKHLNGO* _Messenger; // 0xC0
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _ExitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__EXITVIEW_OFFSET))(this);
		}

		::System::Void _InitNavigationTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__INITNAVIGATIONTARGET_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsWebsiteStateChangeMessage(::BNIPDPNMLPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNIPDPNMLPA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsSubmitIssue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITISSUE_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshCondition(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHCONDITION_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsSubmitPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsReplayPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsForumOperation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSFORUMOPERATION_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHREDDOT_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsRefreshUpvote(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsCloseWebsite(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSCLOSEWEBSITE_OFFSET))(this, a1);
		}

		::System::Void _RefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHREDDOTNODE_OFFSET))(this);
		}

		::System::Void _RefreshView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHVIEW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
