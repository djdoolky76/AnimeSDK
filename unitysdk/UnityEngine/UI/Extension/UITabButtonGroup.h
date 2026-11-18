#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/UnityEngine/UI/Extension/UITabButtonGroup___c__DisplayClass49_0.h"

class HNLACBJDCGI;
class IBENDELLLAO;
namespace MoleMole::Config { class ConfigSoundAction_SwitchAction; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDLOCKTAB_OFFSET UNITYSDK_OFFSET(0x1EC42390)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDTAB_1_OFFSET UNITYSDK_OFFSET(0x1EC42840)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDTAB_2_OFFSET UNITYSDK_OFFSET(0x1EC428F0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDTAB_OFFSET UNITYSDK_OFFSET(0x1EC42190)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC3EEF0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0x1EC3FF00)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x1EC3FDC0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CHANGEENDTABINDEX_OFFSET UNITYSDK_OFFSET(0x1EC41560)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CHANGETWOTABINDEX_OFFSET UNITYSDK_OFFSET(0x1EC41950)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLEARSELECTTAB_OFFSET UNITYSDK_OFFSET(0x1EC42FF0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLEARTABS_OFFSET UNITYSDK_OFFSET(0x1EC420E0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLICKTAB_OFFSET UNITYSDK_OFFSET(0x1EC3F140)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_COLLECTUITABLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1EC43ED0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GETENABLETABBUTTONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC438C0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GETORDEREDENABLEDTABS_OFFSET UNITYSDK_OFFSET(0x1EC44320)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_CURPOSINDEX_OFFSET UNITYSDK_OFFSET(0x1EC3EBC0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_CURSELECTKEY_OFFSET UNITYSDK_OFFSET(0x1EC3EBB0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1EC3EBD0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EC41E70)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_ORDEREDKEYS_OFFSET UNITYSDK_OFFSET(0x1EC3EBF0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x1EC3EE90)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EC3EE80)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_TABBUTTONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC3EE50)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_HIDEALLTABS_OFFSET UNITYSDK_OFFSET(0x1EC43740)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ISCANCLICKLOGIC_OFFSET UNITYSDK_OFFSET(0x1EC42B40)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x1EC44290)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC3F0E0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_PLAYCLICKSOUND_OFFSET UNITYSDK_OFFSET(0x1EC43B30)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_REGISTERCLICK_OFFSET UNITYSDK_OFFSET(0x1EC440D0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_RESIZE_OFFSET UNITYSDK_OFFSET(0x1EC44490)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SAFESETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1EC41070)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SELECTANDCALLMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC42BD0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x1EC42C70)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETASSETLOADPROXY_OFFSET UNITYSDK_OFFSET(0x1EC41F50)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETBUTTONACTIVE_OFFSET UNITYSDK_OFFSET(0x1EC3F330)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETCANCLICKLOGIC_OFFSET UNITYSDK_OFFSET(0x1EC42AF0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETCLICKPRECHECK_OFFSET UNITYSDK_OFFSET(0x1EC44120)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETEMPTYBYMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC40620)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1EC40870)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1EC43160)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETFINISHBYMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC40990)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1EC40BE0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETSELECTEDIMAGEBYKEY_OFFSET UNITYSDK_OFFSET(0x1EC434E0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETSELECTEDIMAGE_OFFSET UNITYSDK_OFFSET(0x1EC43280)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC41180)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABICON_1_OFFSET UNITYSDK_OFFSET(0x1EC3F950)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABICON_OFFSET UNITYSDK_OFFSET(0x1EC3F7E0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABLOCKBYMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC402B0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABLOCK_OFFSET UNITYSDK_OFFSET(0x1EC40500)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABNAMEBYMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC3F470)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABNAME_OFFSET UNITYSDK_OFFSET(0x1EC3F6C0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABNOTIFICATIONNODEBYMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC40060)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABSELECTICON_1_OFFSET UNITYSDK_OFFSET(0x1EC3FC40)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABSELECTICON_OFFSET UNITYSDK_OFFSET(0x1EC3FAD0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1EC3EBE0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SHOWADDITIONALROOTBYMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC40D00)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SHOWADDITIONALROOT_OFFSET UNITYSDK_OFFSET(0x1EC40F50)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SHOWBUTTONBYCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC3F2A0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP__ADDLOCKTAB_G__WRAPCALLBACK_49_0_OFFSET UNITYSDK_OFFSET(0x1EC425D0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC44C80)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP__GETORDEREDENABLEDTABS_B__78_0_OFFSET UNITYSDK_OFFSET(0x1EC44D80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup_TypeDefinitionIndex = 57565;

	class UITabButtonGroup : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Boolean muteClick; // 0x58
		::System::Byte _padding0[0x3];
		::System::Int32 clickSoundID; // 0x5C
		::MoleMole::Config::ConfigSoundAction_SwitchAction* tabClickSoundAction; // 0x60
		::System::Func_2<::System::Int32, ::System::Boolean>* _clickPreCheck; // 0x68
		::System::Int32 _previousChangeEndTabIndex; // 0x70
		::System::Boolean _interactable; // 0x74
		::System::Byte _padding1[0x3];
		::System::Int32 _curSelectKey; // 0x78
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* _orderedKeys; // 0x80
		::System::Boolean _isDictDirty; // 0x88
		::System::Byte _padding3[0x3];
		::System::Int32 _curPosIndex; // 0x8C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>* _tabButtonDict; // 0x90
		::System::Boolean lazyMode; // 0x98
		::System::Byte _padding4[0x7];
		::System::Action_1<::System::Int32>* _onClickTab; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurSelectKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_CURSELECTKEY_OFFSET))(this);
		}

		::System::Int32 get_CurPosIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_CURPOSINDEX_OFFSET))(this);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_OrderedKeys()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_ORDEREDKEYS_OFFSET))(this);
		}

		::System::Int32 get_TabButtonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_TABBUTTONCOUNT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void ShowButtonByCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SHOWBUTTONBYCOUNT_OFFSET))(this, count);
		}

		::System::Void SetTabNameByMethod(::System::Func_2<::System::Int32, ::System::String*>* nameMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABNAMEBYMETHOD_OFFSET))(this, nameMethod);
		}

		::System::Void SetTabName(::System::Int32 index, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABNAME_OFFSET))(this, index, name);
		}

		::System::Void SetTabIcon(::System::Int32 index, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABICON_OFFSET))(this, index, path);
		}

		::System::Void SetTabIcon_1(::System::Int32 index, ::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABICON_1_OFFSET))(this, index, path);
		}

		::System::Void SetTabSelectIcon(::System::Int32 index, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABSELECTICON_OFFSET))(this, index, path);
		}

		::System::Void SetTabSelectIcon_1(::System::Int32 index, ::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABSELECTICON_1_OFFSET))(this, index, path);
		}

		::System::Void BindNotificationNode(::System::Int32 index, ::Share::ENotificationBadgeType notificationBadgeType, ::NodeGraph::VariantUnion subKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_BINDNOTIFICATIONNODE_OFFSET))(this, index, notificationBadgeType, subKey);
		}

		::System::Void BindNotificationNode_1(::System::Int32 index, ::IBENDELLLAO* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_BINDNOTIFICATIONNODE_1_OFFSET))(this, index, node);
		}

		::System::Void SetTabNotificationNodeByMethod(::System::Func_2<::System::Int32, ::IBENDELLLAO*>* notificationNodeMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::IBENDELLLAO*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABNOTIFICATIONNODEBYMETHOD_OFFSET))(this, notificationNodeMethod);
		}

		::System::Void SetTabLockByMethod(::System::Func_2<::System::Int32, ::System::Boolean>* isLockMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABLOCKBYMETHOD_OFFSET))(this, isLockMethod);
		}

		::System::Void SetTabLock(::System::Int32 index, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABLOCK_OFFSET))(this, index, isLock);
		}

		::System::Void SetEmptyByMethod(::System::Func_2<::System::Int32, ::System::Boolean>* isEmptyMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETEMPTYBYMETHOD_OFFSET))(this, isEmptyMethod);
		}

		::System::Void SetEmpty(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETEMPTY_OFFSET))(this, index, value);
		}

		::System::Void SetFinishByMethod(::System::Func_2<::System::Int32, ::System::Boolean>* isFinishMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETFINISHBYMETHOD_OFFSET))(this, isFinishMethod);
		}

		::System::Void SetFinish(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETFINISH_OFFSET))(this, index, value);
		}

		::System::Void ShowAdditionalRootByMethod(::System::Func_2<::System::Int32, ::System::Boolean>* showMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SHOWADDITIONALROOTBYMETHOD_OFFSET))(this, showMethod);
		}

		::System::Void ShowAdditionalRoot(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SHOWADDITIONALROOT_OFFSET))(this, index, value);
		}

		::System::Void SafeSetInteractable(::System::Int32 index, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SAFESETINTERACTABLE_OFFSET))(this, index, active);
		}

		::System::Void SetTabCount(::System::Int32 count, ::System::Boolean isUseEndTab, ::System::Action_1<::System::Int32>* indexAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETTABCOUNT_OFFSET))(this, count, isUseEndTab, indexAction);
		}

		::System::Void ChangeEndTabIndex(::System::Int32 endTabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CHANGEENDTABINDEX_OFFSET))(this, endTabIndex);
		}

		::System::Void ChangeTwoTabIndex(::System::Int32 firstTabIndex, ::System::Int32 secondTabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CHANGETWOTABINDEX_OFFSET))(this, firstTabIndex, secondTabIndex);
		}

		::System::Void SetButtonActive(::System::Int32 index, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETBUTTONACTIVE_OFFSET))(this, index, isActive);
		}

		::System::Void SetAssetLoadProxy(::HNLACBJDCGI* assetLoadProxy)
		{
			return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETASSETLOADPROXY_OFFSET))(this, assetLoadProxy);
		}

		::System::Void ClearTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLEARTABS_OFFSET))(this);
		}

		::System::Void AddTab(::System::Int32 index, ::UnityEngine::UI::Extension::UITabButton* tabButton, ::UnityEngine::Events::UnityAction* onPressedCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDTAB_OFFSET))(this, index, tabButton, onPressedCB);
		}

		::System::Void AddLockTab(::System::Int32 index, ::UnityEngine::UI::Extension::UITabButton* tabButton, ::System::Action_1<::System::Int32>* onPressedCB, ::System::Int32 lockid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*, ::System::Action_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDLOCKTAB_OFFSET))(this, index, tabButton, onPressedCB, lockid);
		}

		::System::Void AddTab_1(::System::Int32 index, ::UnityEngine::UI::Extension::UITabButton* tabButton)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDTAB_1_OFFSET))(this, index, tabButton);
		}

		::System::Void AddTab_2(::System::Int32 index, ::UnityEngine::UI::Extension::UITabButton* tabButton, ::System::Action_1<::System::Int32>* onPressedCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ADDTAB_2_OFFSET))(this, index, tabButton, onPressedCB);
		}

		::System::Void SetCanClickLogic(::System::Func_2<::System::Int32, ::System::Boolean>* logic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETCANCLICKLOGIC_OFFSET))(this, logic);
		}

		::System::Boolean IsCanClickLogic(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ISCANCLICKLOGIC_OFFSET))(this, index);
		}

		::System::Void ClickTab(::System::Int32 index, ::System::Boolean forceCB, ::System::Boolean ignoreCB, ::System::Boolean isInitCal, ::System::Boolean forceCheckCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLICKTAB_OFFSET))(this, index, forceCB, ignoreCB, isInitCal, forceCheckCD);
		}

		::System::Void SelectAndCallMethod(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SELECTANDCALLMETHOD_OFFSET))(this, index);
		}

		::System::Void SelectTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SELECTTAB_OFFSET))(this, index);
		}

		::System::Void ClearSelectTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLEARSELECTTAB_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETENABLE_OFFSET))(this, index, enable);
		}

		::System::Void SetSelectedImage(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETSELECTEDIMAGE_OFFSET))(this, index);
		}

		::System::Void SetSelectedImageByKey(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETSELECTEDIMAGEBYKEY_OFFSET))(this, key);
		}

		::System::Void HideAllTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_HIDEALLTABS_OFFSET))(this);
		}

		::System::Int32 GetEnableTabButtonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GETENABLETABBUTTONCOUNT_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_Item(::System::Int32 key)
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void PlayClickSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_PLAYCLICKSOUND_OFFSET))(this);
		}

		::System::Void CollectUITableButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_COLLECTUITABLEBUTTON_OFFSET))(this);
		}

		::System::Void RegisterClick(::System::Action_1<::System::Int32>* onClickTab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_REGISTERCLICK_OFFSET))(this, onClickTab);
		}

		::System::Void SetClickPreCheck(::System::Func_2<::System::Int32, ::System::Boolean>* clickPreCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_SETCLICKPRECHECK_OFFSET))(this, clickPreCheck);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_ONCLICKTAB_OFFSET))(this, index);
		}

		::Il2CppArray<::UnityEngine::UI::Extension::UITabButton*>* GetOrderedEnabledTabs()
		{
			return ((::Il2CppArray<::UnityEngine::UI::Extension::UITabButton*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_GETORDEREDENABLEDTABS_OFFSET))(this);
		}

		::System::Void Resize(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_RESIZE_OFFSET))(this, count);
		}

		static ::System::Action_1<::System::Int32>* _AddLockTab_g__WrapCallback_49_0(::UnityEngine::UI::Extension::UITabButtonGroup___c__DisplayClass49_0& param_0)
		{
			return ((::System::Action_1<::System::Int32>*(*)(::UnityEngine::UI::Extension::UITabButtonGroup___c__DisplayClass49_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP__ADDLOCKTAB_G__WRAPCALLBACK_49_0_OFFSET))(param_0);
		}

		::UnityEngine::UI::Extension::UITabButton* _GetOrderedEnabledTabs_b__78_0(::System::Int32 x)
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP__GETORDEREDENABLEDTABS_B__78_0_OFFSET))(this, x);
		}
	};
}
