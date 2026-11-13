#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class MGPHMNHKHIE;
class OBJANKHLNGO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::LimaoNews { class LimaoNewsCommentListControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsLocationControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostDetailViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsStateTagControl; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCB550)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1DFCCAE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBOTTOMVIEW_OFFSET UNITYSDK_OFFSET(0x1DFCD5E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBTNSVIEW_OFFSET UNITYSDK_OFFSET(0x1DFCD750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDPOSTBASICVIEW_OFFSET UNITYSDK_OFFSET(0x1DFCCB90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDRIGHTVIEW_OFFSET UNITYSDK_OFFSET(0x1DFCD3A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CLEARREDDOT_OFFSET UNITYSDK_OFFSET(0x1DFCE4A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__MOVETOCOMMENT_OFFSET UNITYSDK_OFFSET(0x1DFCEE60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1DFCC920)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1DFCE500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1DFCB640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSCLOSEPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0x1DFCF040)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTDETAILOPERATION_OFFSET UNITYSDK_OFFSET(0x1DFCEF00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DFCE6F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0x1DFCF1C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET UNITYSDK_OFFSET(0x1DFCEC10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET UNITYSDK_OFFSET(0x1DFCE790)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONNEWCOMMENTITEM_OFFSET UNITYSDK_OFFSET(0x1DFCF9D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DFCC860)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow_TypeDefinitionIndex = 83186;

	class LimaoNewsPostDetailWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Image* _UserImage; // 0x48
		::UnityEngine::Transform* _NodeBannedMask; // 0x50
		::UnityEngine::Transform* _NodeComicLoadRoot; // 0x58
		::OBJANKHLNGO* _Messenger; // 0x60
		::RPG::Client::AnimatorButton* _BtnImage; // 0x68
		::UnityEngine::UI::ScrollRect* _RightScrollRect; // 0x70
		::UnityEngine::Transform* _NodeBottom; // 0x78
		::RPG::Client::StaticListView* _CommentListView; // 0x80
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeControl* _SurveyTypeControl; // 0x88
		::UnityEngine::Transform* _NodeComic; // 0x90
		::UnityEngine::RectTransform* _NodeDescContent; // 0x98
		::UnityEngine::Transform* _NodeVideoMask; // 0xA0
		::RPG::Client::LimaoNews::LimaoNewsCommentListControl* _CommentListControl; // 0xA8
		::RPG::Client::AnimatorButton* _BtnGo; // 0xB0
		::RPG::Client::AnimatorButton* _BtnClose; // 0xB8
		::RPG::Client::LimaoNews::LimaoNewsStateTagControl* _StateTagControl; // 0xC0
		::UnityEngine::Transform* _NodeImage; // 0xC8
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0xD0
		::UnityEngine::Transform* _NodeComicMask; // 0xD8
		::UnityEngine::Transform* _NodeDivider; // 0xE0
		::UnityEngine::UI::Text* _PostDesc; // 0xE8
		::UnityEngine::UI::Text* _BtnGoText; // 0xF0
		::UnityEngine::UI::Text* _PostTitle; // 0xF8
		::RPG::Client::AnimatorButton* _BtnLink; // 0x100
		::RPG::Client::LimaoNews::LimaoNewsLocationControl* _LocationControl; // 0x108
		::UnityEngine::UI::Text* _UserName; // 0x110
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x118
		::UnityEngine::Transform* _UserOfficialTag; // 0x120
		::UnityEngine::UI::Image* _PostImage; // 0x128
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsPostMessage(::MGPHMNHKHIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGPHMNHKHIE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsSubmitPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsReplayPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsPostDetailOperation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTDETAILOPERATION_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsClosePostDetail(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSCLOSEPOSTDETAIL_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsRefreshUpvote(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET))(this, a1);
		}

		::System::Void _BindPostBasicView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDPOSTBASICVIEW_OFFSET))(this);
		}

		::System::Void _BindRightView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDRIGHTVIEW_OFFSET))(this, a1);
		}

		::System::Void _BindBottomView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBOTTOMVIEW_OFFSET))(this);
		}

		::System::Void _BindBtnsView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBTNSVIEW_OFFSET))(this);
		}

		::System::Void _ClearRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CLEARREDDOT_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnNewCommentItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONNEWCOMMENTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _MoveToComment(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__MOVETOCOMMENT_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
