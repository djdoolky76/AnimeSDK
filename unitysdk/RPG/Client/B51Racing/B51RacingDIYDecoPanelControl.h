#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYDecoItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
class CKNMJMCFPME;
class DNKONAKNCOL;
class KIIGKJKMCHP;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_1_OFFSET UNITYSDK_OFFSET(0xC733B50)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xC7338E0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC733DD0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_GETSELECTEDITEMID_OFFSET UNITYSDK_OFFSET(0xC732D30)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETCONTENTVISIBLE_OFFSET UNITYSDK_OFFSET(0xC732C20)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7328F0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SWITCHTOSTATE_OFFSET UNITYSDK_OFFSET(0xC732CC0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETSELECTEDITEMINDEX_OFFSET UNITYSDK_OFFSET(0xC733270)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC7337F0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONDECOITEMCLICKED_OFFSET UNITYSDK_OFFSET(0xC7335F0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONGETDECOITEM_OFFSET UNITYSDK_OFFSET(0xC7333E0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7327C0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHACCESSORIESLIST_OFFSET UNITYSDK_OFFSET(0xC733020)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHCURRENTLIST_OFFSET UNITYSDK_OFFSET(0xC732A80)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHPAINTLIST_OFFSET UNITYSDK_OFFSET(0xC732DD0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__SETUPNAVITARGET_OFFSET UNITYSDK_OFFSET(0xC733370)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__UPDATESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xC733750)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYDecoPanelControl_TypeDefinitionIndex = 81772;

	class B51RacingDIYDecoPanelControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::StaticListView* _PaintListView; // 0x40
		::RPG::Client::StaticListView* _AccessoriesListView; // 0x48
		::RPG::Client::LocalizedText* _DecoTitle; // 0x50
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x58
		::System::Action_1<::System::UInt32>* OnDecoSelected; // 0x60
		::System::Boolean _PaintListInitialized; // 0x68
		::System::Boolean _AccessoriesListInitialized; // 0x69
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::B51RacingDIYDecoItemType, ::RPG::Client::TextID>* _ITEM_TYPE_TEXT_ID_MAP; // 0x70
		// static const ::System::Object _MAX_DECO_NUM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetContentVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETCONTENTVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SwitchToState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SWITCHTOSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 GetSelectedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_GETSELECTEDITEMID_OFFSET))(this);
		}

		::System::Void _RefreshCurrentList(::DNKONAKNCOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNKONAKNCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHCURRENTLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshPaintList(::DNKONAKNCOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNKONAKNCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHPAINTLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshAccessoriesList(::DNKONAKNCOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNKONAKNCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHACCESSORIESLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnGetDecoItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONGETDECOITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnDecoItemClicked(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONDECOITEMCLICKED_OFFSET))(this, a1);
		}

		::System::Void _UpdateSelectionState(::DNKONAKNCOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNKONAKNCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__UPDATESELECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Int32 _GetSelectedItemIndex(::DNKONAKNCOL* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DNKONAKNCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETSELECTEDITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void _SetupNaviTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__SETUPNAVITARGET_OFFSET))(this, a1);
		}

		::System::Void BuildItemViewModels(::Il2CppArray<::CKNMJMCFPME*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CKNMJMCFPME*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_OFFSET))(this, a1, a2);
		}

		::System::Void BuildItemViewModels_1(::Il2CppArray<::KIIGKJKMCHP*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::KIIGKJKMCHP*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_1_OFFSET))(this, a1, a2);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

	};
}
