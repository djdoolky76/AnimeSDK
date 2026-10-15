#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIBubbleItemState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HHJHEDFNHAK;
namespace RPG::Client { class UIBubbleItem; }
namespace RPG::Client { class UIBubbleManager; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIBUBBLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xE383180)
#define RPG_CLIENT_UIBUBBLEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE3839C0)
#define RPG_CLIENT_UIBUBBLEITEM_DESTROYBUBBLE_OFFSET UNITYSDK_OFFSET(0xE383770)
#define RPG_CLIENT_UIBUBBLEITEM_GET_BUBBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xE383980)
#define RPG_CLIENT_UIBUBBLEITEM_GET_OFFSET UNITYSDK_OFFSET(0xE383070)
#define RPG_CLIENT_UIBUBBLEITEM_GET_POOL_OFFSET UNITYSDK_OFFSET(0xE3839A0)
#define RPG_CLIENT_UIBUBBLEITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xE383400)
#define RPG_CLIENT_UIBUBBLEITEM_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xE383390)
#define RPG_CLIENT_UIBUBBLEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE383200)
#define RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWENTITY_OFFSET UNITYSDK_OFFSET(0xE383520)
#define RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xE383460)
#define RPG_CLIENT_UIBUBBLEITEM_SETLIFETIME_OFFSET UNITYSDK_OFFSET(0xE383620)
#define RPG_CLIENT_UIBUBBLEITEM_SETSHOWFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xE3835D0)
#define RPG_CLIENT_UIBUBBLEITEM_SET_BUBBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xE383990)
#define RPG_CLIENT_UIBUBBLEITEM_SET_POOL_OFFSET UNITYSDK_OFFSET(0xE3839B0)
#define RPG_CLIENT_UIBUBBLEITEM_SHOW_1_OFFSET UNITYSDK_OFFSET(0xE3836D0)
#define RPG_CLIENT_UIBUBBLEITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xE383680)
#define RPG_CLIENT_UIBUBBLEITEM_START_OFFSET UNITYSDK_OFFSET(0xE3831C0)
#define RPG_CLIENT_UIBUBBLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xE383260)
#define RPG_CLIENT_UIBUBBLEITEM__COUNTDOWNBUBBLELIFETIME_OFFSET UNITYSDK_OFFSET(0xE3832C0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIBubbleItem_TypeDefinitionIndex = 68913;

	class UIBubbleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::XLua::LuaTable* UserObject; // 0x18
		::System::Single LifeTime; // 0x20
		::System::Boolean IsManualUpdate; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single _CurLifeTime; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::Client::UIBubbleManager* _BubbleManager_k__BackingField; // 0x30
		::HHJHEDFNHAK* _Pool_k__BackingField; // 0x38
		::RPG::Client::UIBubbleItemState _State; // 0x40
		::System::Byte _padding2[0x4];
		::RPG::Client::UIFollow3DTarget* _FollowTarget; // 0x48
		::System::Action* _ShowFinishCallback; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIBubbleItem* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_UPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_MANUALUPDATE_OFFSET))(this, a1);
		}

		::System::Void _CountDownBubbleLifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM__COUNTDOWNBUBBLELIFETIME_OFFSET))(this, a1);
		}

		::System::Void SetFollowTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWTARGET_OFFSET))(this, a1);
		}

		::System::Void SetFollowEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWENTITY_OFFSET))(this, a1);
		}

		::System::Void SetShowFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETSHOWFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetLifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETLIFETIME_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SHOW_OFFSET))(this);
		}

		::System::Void Show_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SHOW_1_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_HIDE_OFFSET))(this);
		}

		::System::Void DestroyBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_DESTROYBUBBLE_OFFSET))(this);
		}

		::RPG::Client::UIBubbleManager* get_BubbleManager()
		{
			return ((::RPG::Client::UIBubbleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_BUBBLEMANAGER_OFFSET))(this);
		}

		::System::Void set_BubbleManager(::RPG::Client::UIBubbleManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SET_BUBBLEMANAGER_OFFSET))(this, a1);
		}

		::HHJHEDFNHAK* get_Pool()
		{
			return ((::HHJHEDFNHAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_POOL_OFFSET))(this);
		}

		::System::Void set_Pool(::HHJHEDFNHAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJHEDFNHAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SET_POOL_OFFSET))(this, a1);
		}

	};
}
