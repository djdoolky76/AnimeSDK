#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHNBCLPNDFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHNBCLPNDFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E58CC20)
#define HHNBCLPNDFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58CEE0)
#define HHNBCLPNDFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E58C7A0)
#define HHNBCLPNDFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E58C710)
#define HHNBCLPNDFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58C6C0)
#define HHNBCLPNDFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E58C920)
#define HHNBCLPNDFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E58C800)
#define HHNBCLPNDFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E58CA10)
#define HHNBCLPNDFI_IHHGLAIBGIK_OFFSET UNITYSDK_OFFSET(0x1E58C7F0)
#define HHNBCLPNDFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E58C650)
#define HHNBCLPNDFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E58CD10)
#define HHNBCLPNDFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E58CCC0)
#define HHNBCLPNDFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E58C6B0)
#define HHNBCLPNDFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58CB10)
#define HHNBCLPNDFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E58CB70)

inline static constexpr unsigned int HHNBCLPNDFI_TypeDefinitionIndex = 29270;

	class HHNBCLPNDFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OHKPMKPDJPF; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_PFCGFMFKNHP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HHNBCLPNDFI")->GetStaticField(0x3B0F0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HHNBCLPNDFI")->GetStaticField(0x3B0F8);
		}

		// static const ::System::Object BINNAAACDDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHNBCLPNDFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHNBCLPNDFI*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HHNBCLPNDFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHNBCLPNDFI* Clone()
		{
			return ((::HHNBCLPNDFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHHGLAIBGIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_IHHGLAIBGIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHNBCLPNDFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHNBCLPNDFI*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHNBCLPNDFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHNBCLPNDFI*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
