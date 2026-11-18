#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_REFLECTIONFORMATTERSHAREDCODES_DESERIALIZEIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1FF86E70)
#define SIRENIX_SERIALIZATION_REFLECTIONFORMATTERSHAREDCODES_SERIALIZEIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1FF87CF0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ReflectionFormatterSharedCodes_TypeDefinitionIndex = 7494;

	class ReflectionFormatterSharedCodes : public ::System::Object
	{
	public:
		static ::System::Void DeserializeImplementation(::System::Object* value, ::Sirenix::Serialization::IDataReader* reader, ::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Void(*)(::System::Object*, ::Sirenix::Serialization::IDataReader*, ::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REFLECTIONFORMATTERSHAREDCODES_DESERIALIZEIMPLEMENTATION_OFFSET))(value, reader, type, policy);
		}

		static ::System::Void SerializeImplementation(::System::Object* value, ::Sirenix::Serialization::IDataWriter* writer, ::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Void(*)(::System::Object*, ::Sirenix::Serialization::IDataWriter*, ::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REFLECTIONFORMATTERSHAREDCODES_SERIALIZEIMPLEMENTATION_OFFSET))(value, writer, type, policy);
		}
	};
}
