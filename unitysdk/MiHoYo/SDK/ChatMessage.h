#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CHATMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1F4ED960)
#define MIHOYO_SDK_CHATMESSAGE_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0x1F4ED940)
#define MIHOYO_SDK_CHATMESSAGE_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1F4ED980)
#define MIHOYO_SDK_CHATMESSAGE_GET_SPEAKERNAME_OFFSET UNITYSDK_OFFSET(0x1F4ED920)
#define MIHOYO_SDK_CHATMESSAGE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1F4ED8E0)
#define MIHOYO_SDK_CHATMESSAGE_GET_UIDTIMEMD5_OFFSET UNITYSDK_OFFSET(0x1F4ED900)
#define MIHOYO_SDK_CHATMESSAGE_GET_UID_OFFSET UNITYSDK_OFFSET(0x1F4ED8C0)
#define MIHOYO_SDK_CHATMESSAGE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1F4ED970)
#define MIHOYO_SDK_CHATMESSAGE_SET_ISNPC_OFFSET UNITYSDK_OFFSET(0x1F4ED950)
#define MIHOYO_SDK_CHATMESSAGE_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1F4ED990)
#define MIHOYO_SDK_CHATMESSAGE_SET_SPEAKERNAME_OFFSET UNITYSDK_OFFSET(0x1F4ED930)
#define MIHOYO_SDK_CHATMESSAGE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1F4ED8F0)
#define MIHOYO_SDK_CHATMESSAGE_SET_UIDTIMEMD5_OFFSET UNITYSDK_OFFSET(0x1F4ED910)
#define MIHOYO_SDK_CHATMESSAGE_SET_UID_OFFSET UNITYSDK_OFFSET(0x1F4ED8D0)
#define MIHOYO_SDK_CHATMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4ED9A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ChatMessage_TypeDefinitionIndex = 35604;

	class ChatMessage : public ::System::Object
	{
	public:
		::System::String* _Content_k__BackingField; // 0x10
		::System::String* _UidTimeMd5_k__BackingField; // 0x18
		::System::String* _SpeakerName_k__BackingField; // 0x20
		::System::String* _Uid_k__BackingField; // 0x28
		::System::String* _Language_k__BackingField; // 0x30
		::System::String* _Time_k__BackingField; // 0x38
		::System::Boolean _IsNPC_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE__CTOR_OFFSET))(this);
		}

		::System::String* get_Uid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_UID_OFFSET))(this, value);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_TIME_OFFSET))(this, value);
		}

		::System::String* get_UidTimeMd5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_UIDTIMEMD5_OFFSET))(this);
		}

		::System::Void set_UidTimeMd5(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_UIDTIMEMD5_OFFSET))(this, value);
		}

		::System::String* get_SpeakerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_SPEAKERNAME_OFFSET))(this);
		}

		::System::Void set_SpeakerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_SPEAKERNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_ISNPC_OFFSET))(this);
		}

		::System::Void set_IsNPC(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_ISNPC_OFFSET))(this, value);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_CONTENT_OFFSET))(this, value);
		}

		::System::String* get_Language()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Void set_Language(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_LANGUAGE_OFFSET))(this, value);
		}
	};
}
