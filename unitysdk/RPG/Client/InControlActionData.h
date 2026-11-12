#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class InControlActionData; }
namespace RPG::GameCore { class ActionSettingRow; }
namespace RPG::GameCore { class InControlActionMapRow; }
namespace System { class String; }

#define RPG_CLIENT_INCONTROLACTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD76910)
#define RPG_CLIENT_INCONTROLACTIONDATA_GETCONFLICTACTIONDATA_OFFSET UNITYSDK_OFFSET(0xDD793E0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GETGAMEPADTIPICON_OFFSET UNITYSDK_OFFSET(0xDD77930)
#define RPG_CLIENT_INCONTROLACTIONDATA_GETKEYBOARDTIPTEXTID_OFFSET UNITYSDK_OFFSET(0xDD776C0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GETMOUSETIPICON_OFFSET UNITYSDK_OFFSET(0xDD77620)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0xDD775C0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONSETTINGROW_OFFSET UNITYSDK_OFFSET(0xDD775B0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONTYPELIST_OFFSET UNITYSDK_OFFSET(0xDD77600)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPEINDEX_OFFSET UNITYSDK_OFFSET(0xDD78800)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPES_OFFSET UNITYSDK_OFFSET(0xDD77C90)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDKEYBOARD_OFFSET UNITYSDK_OFFSET(0xDD777D0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDMOUSE_OFFSET UNITYSDK_OFFSET(0xDD78280)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDGAMEPAD_OFFSET UNITYSDK_OFFSET(0xDD773D0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDKEYBOARD_OFFSET UNITYSDK_OFFSET(0xDD77360)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBIND_OFFSET UNITYSDK_OFFSET(0xDD77280)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_GOTOIDLIST_OFFSET UNITYSDK_OFFSET(0xDD775E0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_INCONTROLACTIONMAPROW_OFFSET UNITYSDK_OFFSET(0xDD775A0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ISSUBMITORCANCELACTION_OFFSET UNITYSDK_OFFSET(0xDD78730)
#define RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDCONFLICT_OFFSET UNITYSDK_OFFSET(0xDD79A00)
#define RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDINBLACKLIST_OFFSET UNITYSDK_OFFSET(0xDD78ED0)
#define RPG_CLIENT_INCONTROLACTIONDATA_ISSAMEBINDKEYBOARD_OFFSET UNITYSDK_OFFSET(0xDD79280)
#define RPG_CLIENT_INCONTROLACTIONDATA_SWITCHDEFAULTSUBMITANDCANCEL_OFFSET UNITYSDK_OFFSET(0xDD78A10)
#define RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEGAMEPADACTIONBIND_OFFSET UNITYSDK_OFFSET(0xDD7A600)
#define RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEKEYBOARDACTIONBIND_OFFSET UNITYSDK_OFFSET(0xDD79F00)
#define RPG_CLIENT_INCONTROLACTIONDATA__CHECKCONTROLKEYCONFLICT_OFFSET UNITYSDK_OFFSET(0xDD79990)
#define RPG_CLIENT_INCONTROLACTIONDATA__CHECKMODIFIABLEBYSWITCHAB_OFFSET UNITYSDK_OFFSET(0xDD77440)
#define RPG_CLIENT_INCONTROLACTIONDATA__GETNONDEFAULTBINDCONTROLTYPES_OFFSET UNITYSDK_OFFSET(0xDD784F0)
#define RPG_CLIENT_INCONTROLACTIONDATA__GETPS4BINDCONTROLTYPES_OFFSET UNITYSDK_OFFSET(0xDD78290)
#define RPG_CLIENT_INCONTROLACTIONDATA__ISHASINPUTCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0xDD781D0)
#define RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONGAMEPADBIND_OFFSET UNITYSDK_OFFSET(0xDD7A880)
#define RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONKEYBOARDBIND_OFFSET UNITYSDK_OFFSET(0xDD7A140)

namespace RPG::Client
{
	inline static constexpr unsigned int InControlActionData_TypeDefinitionIndex = 62680;

	class InControlActionData : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* _DefaultControlTypes; // 0x10
		::RPG::GameCore::ActionSettingRow* _ActionSettingRow; // 0x18
		::RPG::GameCore::InControlActionMapRow* _InControlActionMapRow; // 0x20
		::InControl::Mouse _DefaultMouse; // 0x28
		::InControl::Key _DefaultKey; // 0x2C
		// static const ::System::String* _ConfirmActionName; // 0x0
		// static const ::System::String* _CancelActionName; // 0x0
		// static const ::System::String* _UnChangeActionStr; // 0x0
		::System::Void _ctor(::RPG::GameCore::InControlActionMapRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InControlActionMapRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableBind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBIND_OFFSET))(this);
		}

		::System::Boolean get_EnableBindKeyboard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDKEYBOARD_OFFSET))(this);
		}

		::System::Boolean get_EnableBindGamepad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDGAMEPAD_OFFSET))(this);
		}

		::RPG::GameCore::InControlActionMapRow* get_InControlActionMapRow()
		{
			return ((::RPG::GameCore::InControlActionMapRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_INCONTROLACTIONMAPROW_OFFSET))(this);
		}

		::RPG::GameCore::ActionSettingRow* get_ActionSettingRow()
		{
			return ((::RPG::GameCore::ActionSettingRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONSETTINGROW_OFFSET))(this);
		}

		::System::String* get_ActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GotoIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_GOTOIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ActionTypeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONTYPELIST_OFFSET))(this);
		}

		::System::String* GetMouseTipIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETMOUSETIPICON_OFFSET))(this);
		}

		::RPG::Client::TextID GetKeyboardTipTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETKEYBOARDTIPTEXTID_OFFSET))(this);
		}

		::System::String* GetGamepadTipIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETGAMEPADTIPICON_OFFSET))(this);
		}

		::InControl::Key get_BindKeyboard()
		{
			return ((::InControl::Key(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDKEYBOARD_OFFSET))(this);
		}

		::InControl::Mouse get_BindMouse()
		{
			return ((::InControl::Mouse(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDMOUSE_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* get_BindControlTypes()
		{
			return ((::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPES_OFFSET))(this);
		}

		::System::Boolean get_IsSubmitOrCancelAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ISSUBMITORCANCELACTION_OFFSET))(this);
		}

		::System::Int32 get_BindControlTypeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPEINDEX_OFFSET))(this);
		}

		::System::Void SwitchDefaultSubmitAndCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_SWITCHDEFAULTSUBMITANDCANCEL_OFFSET))(this);
		}

		::System::Boolean IsBindKeyboardInBlackList(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDINBLACKLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsSameBindKeyboard(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_ISSAMEBINDKEYBOARD_OFFSET))(this, a1);
		}

		::RPG::Client::InControlActionData* GetConflictActionData(::System::String* a1)
		{
			return ((::RPG::Client::InControlActionData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETCONFLICTACTIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsBindKeyboardConflict(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDCONFLICT_OFFSET))(this, a1);
		}

		::System::Boolean TrySaveKeyboardActionBind(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEKEYBOARDACTIONBIND_OFFSET))(this, a1);
		}

		::System::Boolean TrySaveGamepadActionBind(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEGAMEPADACTIONBIND_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateOtherActionKeyboardBind(::InControl::Key a1, ::InControl::Key a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONKEYBOARDBIND_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckControlKeyConflict(::InControl::Key a1, ::InControl::Key a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__CHECKCONTROLKEYCONFLICT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _UpdateOtherActionGamepadBind(::InControl::InputControlType a1, ::InControl::InputControlType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONGAMEPADBIND_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* _GetPS4BindControlTypes()
		{
			return ((::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__GETPS4BINDCONTROLTYPES_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* _GetNonDefaultBindControlTypes()
		{
			return ((::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__GETNONDEFAULTBINDCONTROLTYPES_OFFSET))(this);
		}

		::System::Boolean _CheckModifiableBySwitchAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__CHECKMODIFIABLEBYSWITCHAB_OFFSET))(this);
		}

		::System::Boolean _IsHasInputControlType(::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* a1, ::InControl::InputControlType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__ISHASINPUTCONTROLTYPE_OFFSET))(this, a1, a2);
		}

	};
}
