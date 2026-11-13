#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE75C00)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONICON_OFFSET UNITYSDK_OFFSET(0x1AE77920)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1AE77980)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONTEXTPARAM_OFFSET UNITYSDK_OFFSET(0x1AE77960)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1AE77940)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1AE779C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_HOSTRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1AE779A0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_SHOWPRIORITY_OFFSET UNITYSDK_OFFSET(0x1AE779E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONICON_OFFSET UNITYSDK_OFFSET(0x1AE77930)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1AE77990)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONTEXTPARAM_OFFSET UNITYSDK_OFFSET(0x1AE77970)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1AE77950)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1AE779D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_HOSTRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1AE779B0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_SHOWPRIORITY_OFFSET UNITYSDK_OFFSET(0x1AE779F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ButtonListTrigger_RuntimeButton_TypeDefinitionIndex = 58731;

	class ButtonListTrigger_RuntimeButton : public ::System::Object
	{
	public:
		::System::String* _ButtonName_k__BackingField; // 0x10
		::System::String* _ButtonIcon_k__BackingField; // 0x18
		::System::String* _ButtonTextParam_k__BackingField; // 0x20
		::System::Boolean _Enable_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ButtonShowPriority _ShowPriority_k__BackingField; // 0x2C
		::System::UInt32 _HostRuntimeID_k__BackingField; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _ButtonText_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_CTOR_OFFSET))(this);
		}

		::System::String* get_ButtonIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONICON_OFFSET))(this);
		}

		::System::Void set_ButtonIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONICON_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ButtonText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONTEXT_OFFSET))(this);
		}

		::System::Void set_ButtonText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_ButtonTextParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONTEXTPARAM_OFFSET))(this);
		}

		::System::Void set_ButtonTextParam(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONTEXTPARAM_OFFSET))(this, a1);
		}

		::System::String* get_ButtonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONNAME_OFFSET))(this);
		}

		::System::Void set_ButtonName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_HostRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_HOSTRUNTIMEID_OFFSET))(this);
		}

		::System::Void set_HostRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_HOSTRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_ENABLE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ButtonShowPriority get_ShowPriority()
		{
			return ((::RPG::GameCore::ButtonShowPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_SHOWPRIORITY_OFFSET))(this);
		}

		::System::Void set_ShowPriority(::RPG::GameCore::ButtonShowPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ButtonShowPriority))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_SHOWPRIORITY_OFFSET))(this, a1);
		}

	};
}
