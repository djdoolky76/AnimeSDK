#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize; }
namespace MessagePack { class MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize; }
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD52130)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD52170)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_4_OFFSET UNITYSDK_OFFSET(0x1CD52180)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_5_OFFSET UNITYSDK_OFFSET(0x1CD521D0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c_TypeDefinitionIndex = 7230;

	class MessagePackSerializer_CompiledMethods___c : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize** StaticGet___9__14_5()
		{
			return (::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize**)UnitySDK::FromName("MessagePack", "<>c")->GetStaticField(0x4EB20);
		}

		static ::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize** StaticGet___9__14_4()
		{
			return (::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize**)UnitySDK::FromName("MessagePack", "<>c")->GetStaticField(0x4EB28);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack", "<>c")->GetStaticField(0x4EB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__14_4(::MessagePack::MessagePackWriter a1, ::System::Object* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* __ctor_b__14_5(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_5_OFFSET))(this, a1, a2);
		}

	};
}
