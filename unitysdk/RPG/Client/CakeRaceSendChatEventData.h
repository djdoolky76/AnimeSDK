#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceChatEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeRaceSendChatEventData; }

#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D306D90)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D306E10)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_DATAID_OFFSET UNITYSDK_OFFSET(0x1D306E40)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D306E20)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_DATAID_OFFSET UNITYSDK_OFFSET(0x1D306E50)
#define RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D306E30)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceSendChatEventData_TypeDefinitionIndex = 64473;

	class CakeRaceSendChatEventData : public ::System::Object
	{
	public:
		::System::UInt32 _DataID_k__BackingField; // 0x10
		::RPG::Client::CakeRaceChatEventType _Type_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::Client::CakeRaceChatEventType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::CakeRaceSendChatEventData* Create(::RPG::Client::CakeRaceChatEventType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::CakeRaceSendChatEventData*(*)(::RPG::Client::CakeRaceChatEventType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::CakeRaceChatEventType get_Type()
		{
			return ((::RPG::Client::CakeRaceChatEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::CakeRaceChatEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_GET_DATAID_OFFSET))(this);
		}

		::System::Void set_DataID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESENDCHATEVENTDATA_SET_DATAID_OFFSET))(this, a1);
		}

	};
}
