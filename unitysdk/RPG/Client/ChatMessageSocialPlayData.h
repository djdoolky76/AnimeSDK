#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"
class PJLMOOPKHEM;
namespace RPG::Client { class ChatMessageSocialPlayData; }
namespace System { class Object; }

#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCA24680)
#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCA250A0)
#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xCA25030)
#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCA25280)
#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xCA25010)
#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCA25180)
#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCA25220)
#define RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xCA25020)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageSocialPlayData_TypeDefinitionIndex = 63223;

	class ChatMessageSocialPlayData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::CBPDACMBHGL _RoomType_k__BackingField; // 0x18
		::System::Void _ctor(::PJLMOOPKHEM* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PJLMOOPKHEM*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::CBPDACMBHGL get_RoomType()
		{
			return ((::CBPDACMBHGL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::CBPDACMBHGL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_SET_ROOMTYPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::ChatMessageSocialPlayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageSocialPlayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ChatMessageSocialPlayData* a1, ::RPG::Client::ChatMessageSocialPlayData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageSocialPlayData*, ::RPG::Client::ChatMessageSocialPlayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ChatMessageSocialPlayData* a1, ::RPG::Client::ChatMessageSocialPlayData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageSocialPlayData*, ::RPG::Client::ChatMessageSocialPlayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGESOCIALPLAYDATA_GETHASHCODE_OFFSET))(this);
		}

	};
}
