#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKBJONMNLCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKBJONMNLCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA51090)
#define MKBJONMNLCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA51130)
#define MKBJONMNLCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA50D80)
#define MKBJONMNLCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA50D50)
#define MKBJONMNLCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA50D40)
#define MKBJONMNLCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA50E90)
#define MKBJONMNLCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA50DC0)
#define MKBJONMNLCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA50FF0)
#define MKBJONMNLCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA50D00)
#define MKBJONMNLCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA510E0)
#define MKBJONMNLCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA510B0)
#define MKBJONMNLCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA50D30)
#define MKBJONMNLCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA51020)
#define MKBJONMNLCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA51080)

inline static constexpr unsigned int MKBJONMNLCH_TypeDefinitionIndex = 32774;

	class MKBJONMNLCH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MKBJONMNLCH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKBJONMNLCH*>**)UnitySDK::FromName("", "MKBJONMNLCH")->GetStaticField(0x56330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKBJONMNLCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKBJONMNLCH*))((::PBYTE)hIl2Cpp + MKBJONMNLCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBJONMNLCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKBJONMNLCH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKBJONMNLCH*>*(*)())((::PBYTE)hIl2Cpp + MKBJONMNLCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKBJONMNLCH* Clone()
		{
			return ((::MKBJONMNLCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKBJONMNLCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKBJONMNLCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKBJONMNLCH*))((::PBYTE)hIl2Cpp + MKBJONMNLCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKBJONMNLCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKBJONMNLCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKBJONMNLCH*))((::PBYTE)hIl2Cpp + MKBJONMNLCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKBJONMNLCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
