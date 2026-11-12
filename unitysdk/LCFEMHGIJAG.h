#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIKGMGBHLEN;
namespace RPG::Client { class ChatMessageData; }
namespace System { class String; }

#define LCFEMHGIJAG_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA63C0)
#define LCFEMHGIJAG_GET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xBEA6260)
#define LCFEMHGIJAG_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xBEA6280)
#define LCFEMHGIJAG_GET_OPUID_OFFSET UNITYSDK_OFFSET(0xBEA6240)
#define LCFEMHGIJAG_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBEA62A0)
#define LCFEMHGIJAG_GODCPFEFMIA_OFFSET UNITYSDK_OFFSET(0xBEA62C0)
#define LCFEMHGIJAG_LKDCHMMCKGP_OFFSET UNITYSDK_OFFSET(0xBEA6670)
#define LCFEMHGIJAG_ODCMFEACOGK_OFFSET UNITYSDK_OFFSET(0xBEA6310)
#define LCFEMHGIJAG_SET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xBEA6270)
#define LCFEMHGIJAG_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xBEA6290)
#define LCFEMHGIJAG_SET_OPUID_OFFSET UNITYSDK_OFFSET(0xBEA6250)
#define LCFEMHGIJAG_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBEA62B0)

inline static constexpr unsigned int LCFEMHGIJAG_TypeDefinitionIndex = 68344;

	class LCFEMHGIJAG : public ::System::Object
	{
	public:
		::System::String* _ChatMsg_k__BackingField; // 0x10
		::System::UInt32 _EmojiId_k__BackingField; // 0x18
		::System::UInt32 _OpUid_k__BackingField; // 0x1C
		::System::Int64 _TimeStamp_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::MIKGMGBHLEN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MIKGMGBHLEN*))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_OpUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_GET_OPUID_OFFSET))(this);
		}

		::System::Void set_OpUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_SET_OPUID_OFFSET))(this, a1);
		}

		::System::String* get_ChatMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_GET_CHATMSG_OFFSET))(this);
		}

		::System::Void set_ChatMsg(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_SET_CHATMSG_OFFSET))(this, a1);
		}

		::System::UInt32 get_EmojiId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_GET_EMOJIID_OFFSET))(this);
		}

		::System::Void set_EmojiId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_SET_EMOJIID_OFFSET))(this, a1);
		}

		::System::Int64 get_TimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_SET_TIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean GODCPFEFMIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_GODCPFEFMIA_OFFSET))(this);
		}

		::System::Boolean ODCMFEACOGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_ODCMFEACOGK_OFFSET))(this);
		}

		::RPG::Client::ChatMessageData* LKDCHMMCKGP()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFEMHGIJAG_LKDCHMMCKGP_OFFSET))(this);
		}

	};
