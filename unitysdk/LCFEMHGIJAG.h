#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIKGMGBHLEN;
namespace RPG::Client { class ChatMessageData; }
namespace System { class String; }

#define LCFEMHGIJAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB613990)
#define LCFEMHGIJAG_GET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xB613830)
#define LCFEMHGIJAG_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xB613850)
#define LCFEMHGIJAG_GET_OPUID_OFFSET UNITYSDK_OFFSET(0xB613810)
#define LCFEMHGIJAG_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB613870)
#define LCFEMHGIJAG_GODCPFEFMIA_OFFSET UNITYSDK_OFFSET(0xB613890)
#define LCFEMHGIJAG_LKDCHMMCKGP_OFFSET UNITYSDK_OFFSET(0xB613C40)
#define LCFEMHGIJAG_ODCMFEACOGK_OFFSET UNITYSDK_OFFSET(0xB6138E0)
#define LCFEMHGIJAG_SET_CHATMSG_OFFSET UNITYSDK_OFFSET(0xB613840)
#define LCFEMHGIJAG_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0xB613860)
#define LCFEMHGIJAG_SET_OPUID_OFFSET UNITYSDK_OFFSET(0xB613820)
#define LCFEMHGIJAG_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB613880)

inline static constexpr unsigned int LCFEMHGIJAG_TypeDefinitionIndex = 66408;

	class LCFEMHGIJAG : public ::System::Object
	{
	public:
		::System::String* _ChatMsg_k__BackingField; // 0x10
		::System::Int64 _TimeStamp_k__BackingField; // 0x18
		::System::UInt32 _OpUid_k__BackingField; // 0x20
		::System::UInt32 _EmojiId_k__BackingField; // 0x24
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
