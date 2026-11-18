#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_INTPTRSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FFD7810)
#define SIRENIX_SERIALIZATION_INTPTRSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FFD7E00)
#define SIRENIX_SERIALIZATION_INTPTRSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD7EE0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int IntPtrSerializer_TypeDefinitionIndex = 7564;

	class IntPtrSerializer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INTPTRSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::IntPtr ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::IntPtr(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INTPTRSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::IntPtr value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IntPtr, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INTPTRSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
