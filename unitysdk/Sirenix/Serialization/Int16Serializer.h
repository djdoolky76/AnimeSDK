#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_INT16SERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FE95750)
#define SIRENIX_SERIALIZATION_INT16SERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FE95D40)
#define SIRENIX_SERIALIZATION_INT16SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE95E20)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Int16Serializer_TypeDefinitionIndex = 7561;

	class Int16Serializer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT16SERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Int16 ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Int16(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT16SERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Int16 value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT16SERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
