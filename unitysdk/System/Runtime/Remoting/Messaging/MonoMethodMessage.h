#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/A36A82D6CEA528D1.h"
#include "unitysdk/System/Object.h"

class AD2F8EBAD652187E;
class BBD3C12A3B9020C5;
class F0ED5E7943333EE7;
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class BDBE9A312148D1B6; }
namespace System::Runtime::Remoting::Messaging { class AsyncResult; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_EA22DBC95D5F70E3_OFFSET UNITYSDK_OFFSET(0x3B50AA0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MonoMethodMessage_TypeDefinitionIndex = 10301;

	class MonoMethodMessage : public ::System::Object
	{
	public:
		::System::Reflection::BDBE9A312148D1B6* A22D81D52A4A9BF5; // 0x10
		::Il2CppArray<::System::Object*>* F41C735A79FD631E; // 0x18
		::Il2CppArray<::System::String*>* A2E71F16FFA02304; // 0x20
		::Il2CppArray<::System::Byte>* E907BB0C00CF8021; // 0x28
		::BBD3C12A3B9020C5* FD76D4F06AA7D851; // 0x30
		::System::Object* E667CA5DE81F679C; // 0x38
		::System::Exception* B64A6911A6449FC8; // 0x40
		::System::Runtime::Remoting::Messaging::AsyncResult* BB2034C33E00A304; // 0x48
		::System::Runtime::Remoting::Messaging::A36A82D6CEA528D1 AA60CDA1B5350DD1; // 0x50
		::System::Byte _padding0[0x4];
		::System::String* EA68B26253257D84; // 0x58
		::F0ED5E7943333EE7* B20E844C2F600E14; // 0x60
		::AD2F8EBAD652187E* BD633D75518DF6FB; // 0x68
		::Il2CppArray<::System::Type*>* EE7C4B49599EA68F; // 0x70

		::System::Void EA22DBC95D5F70E3(::System::Reflection::BDBE9A312148D1B6* EA8FABEC6D125B33, ::Il2CppArray<::System::Object*>* BF312841E529CF12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::BDBE9A312148D1B6*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_EA22DBC95D5F70E3_OFFSET))(this, EA8FABEC6D125B33, BF312841E529CF12);
		}
	};
}
