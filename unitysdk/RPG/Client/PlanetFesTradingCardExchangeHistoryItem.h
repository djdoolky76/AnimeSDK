#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
class PGPOCFOKCNN;
namespace RPG::Client { class PlanetFesTradingCardExchangeHistoryItem; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xDBD3DA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDBD3E30)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GETRARITY_OFFSET UNITYSDK_OFFSET(0xDBD3E40)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0xDBD4290)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xDBD3FD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xDBD43E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_TIME_OFFSET UNITYSDK_OFFSET(0xDBD4140)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0xDBD3FF0)
#define RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xDBD3FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardExchangeHistoryItem_TypeDefinitionIndex = 66579;

	class PlanetFesTradingCardExchangeHistoryItem : public ::System::Object
	{
	public:
		::PGPOCFOKCNN* _Data; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* Create(::PGPOCFOKCNN* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*(*)(::PGPOCFOKCNN*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 GetRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GETRARITY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_USERNAME_OFFSET))(this);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_TIME_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_DateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_DATETIME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDEXCHANGEHISTORYITEM_GET_ITEMNAME_OFFSET))(this);
		}

	};
}
