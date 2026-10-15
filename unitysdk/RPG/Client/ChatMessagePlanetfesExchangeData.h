#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABCPJBMIACC.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"
class NDDOMFBJMKE;

#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCA2C300)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GETRUNTIMEVAILD_OFFSET UNITYSDK_OFFSET(0xCA2CA90)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xCA2CCA0)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xCA2CCC0)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xCA2CCB0)
#define RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xCA2CCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessagePlanetfesExchangeData_TypeDefinitionIndex = 63222;

	class ChatMessagePlanetfesExchangeData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::System::UInt64 _ItemID_k__BackingField; // 0x18
		::ABCPJBMIACC _ContentType_k__BackingField; // 0x20
		::System::Void _ctor(::NDDOMFBJMKE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDOMFBJMKE*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetRunTimeVaild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GETRUNTIMEVAILD_OFFSET))(this);
		}

		::ABCPJBMIACC get_ContentType()
		{
			return ((::ABCPJBMIACC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::ABCPJBMIACC a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABCPJBMIACC))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::UInt64 get_ItemID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEPLANETFESEXCHANGEDATA_SET_ITEMID_OFFSET))(this, a1);
		}

	};
}
