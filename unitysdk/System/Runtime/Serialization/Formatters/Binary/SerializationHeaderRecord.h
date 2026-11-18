#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_GETINT32_OFFSET UNITYSDK_OFFSET(0x1D426030)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_READ_OFFSET UNITYSDK_OFFSET(0x1D4260D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_WRITE_OFFSET UNITYSDK_OFFSET(0x1D425F60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D425F30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D425F20)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerializationHeaderRecord_TypeDefinitionIndex = 1181;

	class SerializationHeaderRecord : public ::System::Object
	{
	public:
		::System::Int32 binaryFormatterMinorVersion; // 0x10
		::System::Int32 majorVersion; // 0x14
		::System::Int32 headerId; // 0x18
		::System::Int32 topId; // 0x1C
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum; // 0x20
		::System::Int32 binaryFormatterMajorVersion; // 0x24
		::System::Int32 minorVersion; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, ::System::Int32 topId, ::System::Int32 headerId, ::System::Int32 majorVersion, ::System::Int32 minorVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_1_OFFSET))(this, binaryHeaderEnum, topId, headerId, majorVersion, minorVersion);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_WRITE_OFFSET))(this, sout);
		}

		static ::System::Int32 GetInt32(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_GETINT32_OFFSET))(buffer, index);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_READ_OFFSET))(this, input);
		}
	};
}
