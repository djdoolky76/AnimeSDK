#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_BYTESERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F17F8A0)
#define SIRENIX_SERIALIZATION_BYTESERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1F17FE90)
#define SIRENIX_SERIALIZATION_BYTESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F17FF70)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ByteSerializer_TypeDefinitionIndex = 7550;

	class ByteSerializer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BYTESERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Byte ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Byte(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BYTESERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Byte value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Byte, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BYTESERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
