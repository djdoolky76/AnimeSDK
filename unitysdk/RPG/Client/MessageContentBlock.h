#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHOMPJJEEMI;
namespace RPG::Client { class MessageContentBlock; }
namespace System { class Object; }

#define RPG_CLIENT_MESSAGECONTENTBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E933350)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E933110)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E933060)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E932E00)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E932EC0)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E933210)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E9332F0)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_SETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E933010)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentBlock_TypeDefinitionIndex = 64671;

	class MessageContentBlock : public ::System::Object
	{
	public:
		::DHOMPJJEEMI* _Message; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISLASTMESSAGE_OFFSET))(this);
		}

		::System::Void SetMessage(::DHOMPJJEEMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHOMPJJEEMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_SETMESSAGE_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::MessageContentBlock* a1, ::RPG::Client::MessageContentBlock* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageContentBlock*, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::MessageContentBlock* a1, ::RPG::Client::MessageContentBlock* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageContentBlock*, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_OP_INEQUALITY_OFFSET))(a1, a2);
		}

	};
}
