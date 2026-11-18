#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_BOOLEANSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FFD64A0)
#define SIRENIX_SERIALIZATION_BOOLEANSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FFD6A90)
#define SIRENIX_SERIALIZATION_BOOLEANSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD6B70)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BooleanSerializer_TypeDefinitionIndex = 7549;

	class BooleanSerializer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BOOLEANSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Boolean(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BOOLEANSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Boolean value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BOOLEANSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
