#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReader.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class JsonTextReader; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_JSONDATAREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F85D5C0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERARRAY_OFFSET UNITYSDK_OFFSET(0x1F85E500)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERNODE_OFFSET UNITYSDK_OFFSET(0x1F85D700)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_EXITARRAY_OFFSET UNITYSDK_OFFSET(0x1F85EA30)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_EXITNODE_OFFSET UNITYSDK_OFFSET(0x1F85E2D0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_GETDATADUMP_OFFSET UNITYSDK_OFFSET(0x1F861380)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1F85D4B0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_MARKENTRYCONSUMED_OFFSET UNITYSDK_OFFSET(0x1F85ED50)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_1_OFFSET UNITYSDK_OFFSET(0x1F85E170)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_OFFSET UNITYSDK_OFFSET(0x1F85D5E0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1F8612B0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READANYINTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F85EE80)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1F85EC00)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1F8602A0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x1F85F7D0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1F860910)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1F860F50)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1F85F390)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1F85F6E0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F85F290)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READGUID_OFFSET UNITYSDK_OFFSET(0x1F85FA40)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x1F860180)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x1F85E1B0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x1F85FE70)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F85ED80)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x1F861260)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1F85FD50)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1F860C40)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1F85F930)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READTONEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1F85E190)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x1F8606D0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x1F8607F0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x1F8603C0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1F85D4C0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F85CB10)
#define SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F85CB00)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1F8615C0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_10_OFFSET UNITYSDK_OFFSET(0x1F861740)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_11_OFFSET UNITYSDK_OFFSET(0x1F861760)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_12_OFFSET UNITYSDK_OFFSET(0x1F861790)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_13_OFFSET UNITYSDK_OFFSET(0x1F8617C0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_1_OFFSET UNITYSDK_OFFSET(0x1F8615E0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_2_OFFSET UNITYSDK_OFFSET(0x1F861600)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_3_OFFSET UNITYSDK_OFFSET(0x1F861620)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_4_OFFSET UNITYSDK_OFFSET(0x1F861640)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_5_OFFSET UNITYSDK_OFFSET(0x1F861670)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_6_OFFSET UNITYSDK_OFFSET(0x1F861690)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_7_OFFSET UNITYSDK_OFFSET(0x1F8616B0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_8_OFFSET UNITYSDK_OFFSET(0x1F8616D0)
#define SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_9_OFFSET UNITYSDK_OFFSET(0x1F861700)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int JsonDataReader_TypeDefinitionIndex = 7436;

	class JsonDataReader : public ::Sirenix::Serialization::BaseDataReader
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>* primitiveArrayReaders; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Type*>* seenTypes; // 0x40
		::System::String* peekedEntryContent; // 0x48
		::System::String* peekedEntryName; // 0x50
		::Sirenix::Serialization::JsonTextReader* reader; // 0x58
		::System::Nullable_1<::Sirenix::Serialization::EntryType> peekedEntryType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER__CTOR_1_OFFSET))(this, stream, context);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_SET_STREAM_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_DISPOSE_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry(::Sirenix::Serialization::BufferedString& name)
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID, ::Sirenix::Serialization::BufferedString&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_OFFSET))(this, name);
		}

		::System::Boolean EnterNode(::System::Type* expectedType, ::System::String* expectedTypeName, ::Sirenix::Serialization::TwoWaySerializationBinder* expectedBinder, ::System::Type*& type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::Sirenix::Serialization::TwoWaySerializationBinder*, ::System::Type*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERNODE_OFFSET))(this, expectedType, expectedTypeName, expectedBinder, type);
		}

		::System::Boolean ExitNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_EXITNODE_OFFSET))(this);
		}

		::System::Boolean EnterArray(::System::Int64& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_ENTERARRAY_OFFSET))(this, length);
		}

		::System::Boolean ExitArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_EXITARRAY_OFFSET))(this);
		}

		::System::Boolean ReadBoolean(::System::Boolean& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READBOOLEAN_OFFSET))(this, value);
		}

		::System::Boolean ReadInternalReference(::System::Int32& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINTERNALREFERENCE_OFFSET))(this, id);
		}

		::System::Boolean ReadExternalReference(::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_OFFSET))(this, index);
		}

		::System::Boolean ReadExternalReference_1(::System::Guid& guid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_1_OFFSET))(this, guid);
		}

		::System::Boolean ReadExternalReference_2(::System::String*& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READEXTERNALREFERENCE_2_OFFSET))(this, id);
		}

		::System::Boolean ReadChar(::System::Char& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READCHAR_OFFSET))(this, value);
		}

		::System::Boolean ReadString(::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READSTRING_OFFSET))(this, value);
		}

		::System::Boolean ReadGuid(::System::Guid& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READGUID_OFFSET))(this, value);
		}

		::System::Boolean ReadSByte(::System::SByte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::SByte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READSBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadInt16(::System::Int16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadInt32(::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadInt64(::System::Int64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READINT64_OFFSET))(this, value);
		}

		::System::Boolean ReadByte(::System::Byte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READBYTE_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt16(::System::UInt16& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT16_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt32(::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT32_OFFSET))(this, value);
		}

		::System::Boolean ReadUInt64(::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READUINT64_OFFSET))(this, value);
		}

		::System::Boolean ReadDecimal(::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READDECIMAL_OFFSET))(this, value);
		}

		::System::Boolean ReadSingle(::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READSINGLE_OFFSET))(this, value);
		}

		::System::Boolean ReadDouble(::System::Double& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READDOUBLE_OFFSET))(this, value);
		}

		::System::Boolean ReadNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READNULL_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}

		::System::String* GetDataDump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_GETDATADUMP_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType PeekEntry_1()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_PEEKENTRY_1_OFFSET))(this);
		}

		::Sirenix::Serialization::EntryType ReadToNextEntry()
		{
			return ((::Sirenix::Serialization::EntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READTONEXTENTRY_OFFSET))(this);
		}

		::System::Void MarkEntryConsumed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_MARKENTRYCONSUMED_OFFSET))(this);
		}

		::System::Boolean ReadAnyIntReference(::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER_READANYINTREFERENCE_OFFSET))(this, value);
		}

		::System::Char __ctor_b__7_0()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_0_OFFSET))(this);
		}

		::System::SByte __ctor_b__7_1()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_1_OFFSET))(this);
		}

		::System::Int16 __ctor_b__7_2()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_2_OFFSET))(this);
		}

		::System::Int32 __ctor_b__7_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_3_OFFSET))(this);
		}

		::System::Int64 __ctor_b__7_4()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_4_OFFSET))(this);
		}

		::System::Byte __ctor_b__7_5()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_5_OFFSET))(this);
		}

		::System::UInt16 __ctor_b__7_6()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_6_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__7_7()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_7_OFFSET))(this);
		}

		::System::UInt64 __ctor_b__7_8()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_8_OFFSET))(this);
		}

		::System::Decimal __ctor_b__7_9()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_9_OFFSET))(this);
		}

		::System::Boolean __ctor_b__7_10()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_10_OFFSET))(this);
		}

		::System::Single __ctor_b__7_11()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_11_OFFSET))(this);
		}

		::System::Double __ctor_b__7_12()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_12_OFFSET))(this);
		}

		::System::Guid __ctor_b__7_13()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONDATAREADER___CTOR_B__7_13_OFFSET))(this);
		}
	};
}
