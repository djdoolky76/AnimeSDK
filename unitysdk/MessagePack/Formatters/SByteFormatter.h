#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class SByteFormatter; }

#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD08750)
#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD08690)
#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD086B0)
#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD086A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SByteFormatter_TypeDefinitionIndex = 7484;

	class SByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SByteFormatter**)UnitySDK::FromName("MessagePack.Formatters", "SByteFormatter")->GetStaticField(0x47AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::SByte a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::SByte, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::SByte Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::SByte(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
