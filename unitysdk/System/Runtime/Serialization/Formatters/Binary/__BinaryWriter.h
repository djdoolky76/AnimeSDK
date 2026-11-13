#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterTypeStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class Stream; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryArray; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryAssembly; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryMethodCall; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryMethodReturn; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObject; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectString; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectWithMap; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectWithMapTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberPrimitiveTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberPrimitiveUnTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberReference; }
namespace System::Runtime::Serialization::Formatters::Binary { class NameInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectNull; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectWriter; }
namespace System::Runtime::Serialization::Formatters::Binary { class WriteObjectInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE0390)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_INTERNALWRITEITEMNULL_OFFSET UNITYSDK_OFFSET(0x1AEE1B90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEARRAYASBYTES_OFFSET UNITYSDK_OFFSET(0x1AEE2210)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1AEE3440)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBEGIN_OFFSET UNITYSDK_OFFSET(0x1AEE0400)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1AEE04A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_1_OFFSET UNITYSDK_OFFSET(0x1AEE0660)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x1AEE05C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1AEE0530)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AEE07A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHAR_OFFSET UNITYSDK_OFFSET(0x1AEE0710)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDATETIME_OFFSET UNITYSDK_OFFSET(0x1AEE0DE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1AEE0840)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDELAYEDNULLITEM_OFFSET UNITYSDK_OFFSET(0x1AEE3310)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AEE0A50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x1AEE0410)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x1AEE0AF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1AEE0B80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x1AEE0C10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMEND_OFFSET UNITYSDK_OFFSET(0x1AEE3320)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMOBJECTREF_OFFSET UNITYSDK_OFFSET(0x1AEE33A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEM_OFFSET UNITYSDK_OFFSET(0x1AEE31D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEJAGGEDARRAY_OFFSET UNITYSDK_OFFSET(0x1AEE26D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERNESTED_OFFSET UNITYSDK_OFFSET(0x1AEE3080)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBEROBJECTREF_OFFSET UNITYSDK_OFFSET(0x1AEE2F80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERSTRING_OFFSET UNITYSDK_OFFSET(0x1AEE3110)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBER_OFFSET UNITYSDK_OFFSET(0x1AEE2D00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODCALL_OFFSET UNITYSDK_OFFSET(0x1AEE11A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODRETURN_OFFSET UNITYSDK_OFFSET(0x1AEE1200)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLITEM_OFFSET UNITYSDK_OFFSET(0x1AEE3280)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLMEMBER_OFFSET UNITYSDK_OFFSET(0x1AEE2E70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1AEE2C60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTEND_OFFSET UNITYSDK_OFFSET(0x1AEE1040)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTSTRING_OFFSET UNITYSDK_OFFSET(0x1AEE1C10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AEE1260)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITERECTANGLEARRAY_OFFSET UNITYSDK_OFFSET(0x1AEE29B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESBYTE_OFFSET UNITYSDK_OFFSET(0x1AEE0CB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADEREND_OFFSET UNITYSDK_OFFSET(0x1AEE1050)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADER_OFFSET UNITYSDK_OFFSET(0x1AEE1130)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLEARRAY_OFFSET UNITYSDK_OFFSET(0x1AEE1D10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLE_OFFSET UNITYSDK_OFFSET(0x1AEE09B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AEE0910)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITETIMESPAN_OFFSET UNITYSDK_OFFSET(0x1AEE0D40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x1AEE0E80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x1AEE0F10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x1AEE0FA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1AEE3570)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int __BinaryWriter_TypeDefinitionIndex = 1180;

	class __BinaryWriter : public ::System::Object
	{
	public:
		::System::IO::Stream* sout; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference; // 0x40
		::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn; // 0x50
		::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly; // 0x58
		::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull; // 0x60
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x68
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped; // 0x70
		::System::IO::BinaryWriter* dataWriter; // 0x78
		::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped; // 0x80
		::System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray; // 0x88
		::System::Collections::Hashtable* objectMapTable; // 0x90
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle; // 0x98
		::System::Int32 m_nestedObjectCount; // 0x9C
		::System::Int32 nullCount; // 0xA0
		::System::Int32 chunkSize; // 0xA4
		::System::Void _ctor(::System::IO::Stream* a1, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* a2, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBEGIN_OFFSET))(this);
		}

		::System::Void WriteEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEEND_OFFSET))(this);
		}

		::System::Void WriteBoolean(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBOOLEAN_OFFSET))(this, a1);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTE_OFFSET))(this, a1);
		}

		::System::Void WriteBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_OFFSET))(this, a1);
		}

		::System::Void WriteBytes_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteChar(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHAR_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHARS_OFFSET))(this, a1);
		}

		::System::Void WriteDecimal(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDECIMAL_OFFSET))(this, a1);
		}

		::System::Void WriteSingle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLE_OFFSET))(this, a1);
		}

		::System::Void WriteDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDOUBLE_OFFSET))(this, a1);
		}

		::System::Void WriteInt16(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT16_OFFSET))(this, a1);
		}

		::System::Void WriteInt32(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT32_OFFSET))(this, a1);
		}

		::System::Void WriteInt64(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT64_OFFSET))(this, a1);
		}

		::System::Void WriteSByte(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESBYTE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteTimeSpan(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITETIMESPAN_OFFSET))(this, a1);
		}

		::System::Void WriteDateTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDATETIME_OFFSET))(this, a1);
		}

		::System::Void WriteUInt16(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT16_OFFSET))(this, a1);
		}

		::System::Void WriteUInt32(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT32_OFFSET))(this, a1);
		}

		::System::Void WriteUInt64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT64_OFFSET))(this, a1);
		}

		::System::Void WriteObjectEnd(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTEND_OFFSET))(this, a1, a2);
		}

		::System::Void WriteSerializationHeaderEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADEREND_OFFSET))(this);
		}

		::System::Void WriteSerializationHeader(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteMethodCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODCALL_OFFSET))(this);
		}

		::System::Void WriteMethodReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODRETURN_OFFSET))(this);
		}

		::System::Void WriteObject(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Int32 a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteObjectString(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void WriteSingleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a3, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Array* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::System::Int32, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLEARRAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WriteArrayAsBytes(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEARRAYASBYTES_OFFSET))(this, a1, a2);
		}

		::System::Void WriteJaggedArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a3, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEJAGGEDARRAY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteRectangleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a3, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a4, ::System::Int32 a5, ::Il2CppArray<::System::Int32>* a6, ::Il2CppArray<::System::Int32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITERECTANGLEARRAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WriteObjectByteArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a3, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a4, ::System::Int32 a5, ::System::Int32 a6, ::Il2CppArray<::System::Byte>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTBYTEARRAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WriteMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteNullMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void WriteMemberObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBEROBJECTREF_OFFSET))(this, a1, a2);
		}

		::System::Void WriteMemberNested(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERNESTED_OFFSET))(this, a1);
		}

		::System::Void WriteMemberString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteNullItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLITEM_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDelayedNullItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDELAYEDNULLITEM_OFFSET))(this);
		}

		::System::Void WriteItemEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMEND_OFFSET))(this);
		}

		::System::Void InternalWriteItemNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_INTERNALWRITEITEMNULL_OFFSET))(this);
		}

		::System::Void WriteItemObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMOBJECTREF_OFFSET))(this, a1, a2);
		}

		::System::Void WriteAssembly(::System::Type* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEASSEMBLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEVALUE_OFFSET))(this, a1, a2);
		}

	};
}
