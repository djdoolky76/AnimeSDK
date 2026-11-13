#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
#include "unitysdk/UnityEngine/Vector2.h"
class AHEFEKMLDJC;
class OBJANKHLNGO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewDetailViewModel; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF03F30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CF05160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONCONTENTITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x1CF061D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONTABITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x1CF06080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETCENTERITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1CF05610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETTABITEMINDEXBYCONTENTITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1CF056B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ISCENTERCONTENTITEM_OFFSET UNITYSDK_OFFSET(0x1CF05710)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CF04930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONCONTENTSCROLL_OFFSET UNITYSDK_OFFSET(0x1CF053B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1CF058A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CF040A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSCLOSEINTERVIEWDETAIL_OFFSET UNITYSDK_OFFSET(0x1CF05C10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CF05A90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0x1CF05D90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONTICK_OFFSET UNITYSDK_OFFSET(0x1CF05210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SETCONTENTBGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CF05270)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CF04870)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailWindow_TypeDefinitionIndex = 83154;

	class LimaoNewsInterviewDetailWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::AnimatorButton* _BtnClose; // 0x48
		::UnityEngine::RectTransform* _NodeLoopListContent; // 0x50
		::OBJANKHLNGO* _Messenger; // 0x58
		::SuperScrollView::LoopListView2* _LoopListContent; // 0x60
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x68
		::UnityEngine::RectTransform* _NodeViewport; // 0x70
		::SuperScrollView::LoopListView2* _LoopListTab; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _ItemHeights; // 0x80
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x88
		::UnityEngine::RectTransform* _NodeContentBg; // 0x90
		::UnityEngine::UI::ScrollRect* _ScrollRectContent; // 0x98
		::System::Single _CommentPosition; // 0xA0
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnContentScroll(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONCONTENTSCROLL_OFFSET))(this, a1);
		}

		::System::Int32 _GetTabItemIndexByContentItemIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETTABITEMINDEXBYCONTENTITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 _GetCenterItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETCENTERITEMINDEX_OFFSET))(this);
		}

		::System::Boolean _IsCenterContentItem(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ISCENTERCONTENTITEM_OFFSET))(this, a1);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsInterviewMessage(::AHEFEKMLDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFEKMLDJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsCloseInterviewDetail(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSCLOSEINTERVIEWDETAIL_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsInterviewUpvote(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWUPVOTE_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* OnTabItemChange(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONTABITEMCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopListViewItem2* OnContentItemChange(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONCONTENTITEMCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetContentBgHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SETCONTENTBGHEIGHT_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
