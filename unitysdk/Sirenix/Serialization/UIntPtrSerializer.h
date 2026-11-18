#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FCD4430)
#define SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FCD4A70)
#define SIRENIX_SERIALIZATION_UINTPTRSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD4B80)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UIntPtrSerializer_TypeDefinitionIndex = 7573;

	class UIntPtrSerializer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINTPTRSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::UIntPtr ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::UIntPtr(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::UIntPtr value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UIntPtr, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UINTPTRSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
