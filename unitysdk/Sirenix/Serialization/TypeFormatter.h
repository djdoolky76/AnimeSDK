#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_TYPEFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x200223E0)
#define SIRENIX_SERIALIZATION_TYPEFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x20021CA0)
#define SIRENIX_SERIALIZATION_TYPEFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x200220A0)
#define SIRENIX_SERIALIZATION_TYPEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x200223F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int TypeFormatter_TypeDefinitionIndex = 7501;

	class TypeFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TYPEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Read(::System::Type*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TYPEFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::System::Type*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TYPEFORMATTER_WRITE_OFFSET))(this, value, writer);
		}

		::System::Type* GetUninitializedObject()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TYPEFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET))(this);
		}
	};
}
