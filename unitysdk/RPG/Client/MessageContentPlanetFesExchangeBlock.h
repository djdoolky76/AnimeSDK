#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
class NDDOMFBJMKE;
namespace RPG::Client { class ChatMessageExtendData; }
namespace RPG::Client { class ChatMessagePlanetfesExchangeData; }
namespace RPG::Client { class MessageContentBlock; }

#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x19639840)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x196398C0)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_PLANETFESDATA_OFFSET UNITYSDK_OFFSET(0x19639950)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x196397F0)
#define RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET UNITYSDK_OFFSET(0x19639910)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentPlanetFesExchangeBlock_TypeDefinitionIndex = 64690;

	class MessageContentPlanetFesExchangeBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::ChatMessagePlanetfesExchangeData* _PlanetFesData_k__BackingField; // 0x18
		::System::Void _ctor(::NDDOMFBJMKE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDOMFBJMKE*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::ChatMessageExtendData* RPG_Client_IMessageExtendDataGetter_GetExtendData()
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET))(this);
		}

		::RPG::Client::ChatMessagePlanetfesExchangeData* get_PlanetFesData()
		{
			return ((::RPG::Client::ChatMessagePlanetfesExchangeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLANETFESEXCHANGEBLOCK_GET_PLANETFESDATA_OFFSET))(this);
		}

	};
}
