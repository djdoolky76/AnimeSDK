#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_6_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC91E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_6___CTOR_B__8_OFFSET UNITYSDK_OFFSET(0x1BBCA0C0)

namespace MessagePack
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class MessagePackSerializer_CompiledMethods___c__DisplayClass14_6 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* deserialize; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_6_CTOR_OFFSET))(this);
		}

		::System::Object* __ctor_b__8(::System::ReadOnlyMemory_1<::System::Byte> a1, ::MessagePack::MessagePackSerializerOptions* a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__DISPLAYCLASS14_6___CTOR_B__8_OFFSET))(this, a1, a2, a3);
		}

	};
}
