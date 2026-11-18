#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class ComplexTypeSerializerCache; }
namespace Sirenix::Serialization { class IComplexTypeValueHelper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERSHAREDCODES_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F8557C0)
#define SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERSHAREDCODES_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1F85A330)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ComplexTypeSerializerSharedCodes_TypeDefinitionIndex = 7556;

	class ComplexTypeSerializerSharedCodes : public ::System::Object
	{
	public:
		static ::System::Void ReadValue(::Sirenix::Serialization::ComplexTypeSerializerCache* cache, ::PVOID storageAddr, ::Sirenix::Serialization::IDataReader* reader, ::Sirenix::Serialization::IComplexTypeValueHelper* helper)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::ComplexTypeSerializerCache*, ::PVOID, ::Sirenix::Serialization::IDataReader*, ::Sirenix::Serialization::IComplexTypeValueHelper*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERSHAREDCODES_READVALUE_OFFSET))(cache, storageAddr, reader, helper);
		}

		static ::System::Void WriteValue(::Sirenix::Serialization::ComplexTypeSerializerCache* cache, ::PVOID storageAddr, ::System::String* name, ::Sirenix::Serialization::IDataWriter* writer, ::Sirenix::Serialization::IComplexTypeValueHelper* helper)
		{
			return ((::System::Void(*)(::Sirenix::Serialization::ComplexTypeSerializerCache*, ::PVOID, ::System::String*, ::Sirenix::Serialization::IDataWriter*, ::Sirenix::Serialization::IComplexTypeValueHelper*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERSHAREDCODES_WRITEVALUE_OFFSET))(cache, storageAddr, name, writer, helper);
		}
	};
}
