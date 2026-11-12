#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client { class MessageContentGotoBlock; }
namespace RPG::Client { class MessageContentGotoBlock_IGotoCommand; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xE12DFB0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xE12E130)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE12E200)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xE12E350)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE12DEB0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENAVATARGUIDE_OFFSET UNITYSDK_OFFSET(0xE12E080)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET UNITYSDK_OFFSET(0xE12DF00)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENHANDBOOK_OFFSET UNITYSDK_OFFSET(0xE12DFC0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xE12E360)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_TypeDefinitionIndex = 64679;

	class MessageContentGotoBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::MessageContentGotoBlock_IGotoCommand* _Command; // 0x18
		::System::String* _CommandName_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::MessageContentGotoBlock_IGotoCommand* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentGotoBlock_IGotoCommand*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET))(this);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenGameTool(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET))(a1);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenHandBook(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENHANDBOOK_OFFSET))(a1);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenAvatarGuide(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENAVATARGUIDE_OFFSET))(a1);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET))(this);
		}

		::System::String* get_CommandName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_COMMANDNAME_OFFSET))(this);
		}

		::System::Void set_CommandName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_SET_COMMANDNAME_OFFSET))(this, a1);
		}

	};
}
