#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF18C40)
#define MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF18BE0)
#define MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF18E00)
#define MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF18DF0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_Position_Formatter_TypeDefinitionIndex = 30313;

	class Graph_Position_Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Graph_Position_Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Graph_Position_Formatter**)Il2CppClass::FromTypeDefinitionIndex(Graph_Position_Formatter_TypeDefinitionIndex)->GetStaticField(0x27180);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Vector2 instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::UnityEngine::Vector2 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_POSITION_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
