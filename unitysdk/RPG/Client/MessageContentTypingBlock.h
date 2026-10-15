#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
namespace RPG::Client { class MessageContentBlock; }

#define RPG_CLIENT_MESSAGECONTENTTYPINGBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xD69B510)
#define RPG_CLIENT_MESSAGECONTENTTYPINGBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD69B4C0)
#define RPG_CLIENT_MESSAGECONTENTTYPINGBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD69B470)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentTypingBlock_TypeDefinitionIndex = 63270;

	class MessageContentTypingBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTYPINGBLOCK_CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTYPINGBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTYPINGBLOCK_EQUALS_OFFSET))(this, a1);
		}

	};
}
