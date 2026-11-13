#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
class ECCKHOLLPPC;
namespace RPG::Client { class ChatMessageExtendData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class FriendBriefData; }
namespace RPG::Client { class MessageContentBlock; }

#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E935750)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E935810)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_FRIENDDATA_OFFSET UNITYSDK_OFFSET(0x1E935A10)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_INVITEDATA_OFFSET UNITYSDK_OFFSET(0x1E9359F0)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E935700)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET UNITYSDK_OFFSET(0x1E9359B0)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_FRIENDDATA_OFFSET UNITYSDK_OFFSET(0x1E935A20)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_INVITEDATA_OFFSET UNITYSDK_OFFSET(0x1E935A00)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentInviteBlock_TypeDefinitionIndex = 64688;

	class MessageContentInviteBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::FriendBriefData* _FriendData_k__BackingField; // 0x18
		::RPG::Client::ChatMessageInviteData* _InviteData_k__BackingField; // 0x20
		::System::Void _ctor(::ECCKHOLLPPC* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ECCKHOLLPPC*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::ChatMessageExtendData* RPG_Client_IMessageExtendDataGetter_GetExtendData()
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET))(this);
		}

		::RPG::Client::ChatMessageInviteData* get_InviteData()
		{
			return ((::RPG::Client::ChatMessageInviteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_INVITEDATA_OFFSET))(this);
		}

		::System::Void set_InviteData(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_INVITEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FriendBriefData* get_FriendData()
		{
			return ((::RPG::Client::FriendBriefData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_FRIENDDATA_OFFSET))(this);
		}

		::System::Void set_FriendData(::RPG::Client::FriendBriefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FriendBriefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_FRIENDDATA_OFFSET))(this, a1);
		}

	};
}
