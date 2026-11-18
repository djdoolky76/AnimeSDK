#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_INT32SERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FF1F910)
#define SIRENIX_SERIALIZATION_INT32SERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FF1FF00)
#define SIRENIX_SERIALIZATION_INT32SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1FFE0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Int32Serializer_TypeDefinitionIndex = 7562;

	class Int32Serializer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT32SERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Int32 ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Int32(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT32SERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Int32 value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INT32SERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
