#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace FlowCanvas::Nodes { class ReflectedMethodNodeWrapper; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDMETHOD_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB81580)
#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDMETHOD_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB80EF0)
#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDMETHOD_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB81DC0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_ReflectedMethod_Formatter_TypeDefinitionIndex = 29525;

	class Graph_ReflectedMethod_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDMETHOD_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::FlowCanvas::Nodes::ReflectedMethodNodeWrapper* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::FlowCanvas::Nodes::ReflectedMethodNodeWrapper*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDMETHOD_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::FlowCanvas::Nodes::ReflectedMethodNodeWrapper* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::FlowCanvas::Nodes::ReflectedMethodNodeWrapper*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDMETHOD_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
