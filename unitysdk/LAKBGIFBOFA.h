#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIJKCHKMPJG;
class LAKBGIFBOFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAKBGIFBOFA_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E8CEE90)
#define LAKBGIFBOFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8CF280)
#define LAKBGIFBOFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CF580)
#define LAKBGIFBOFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8CEE60)
#define LAKBGIFBOFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8CEDB0)
#define LAKBGIFBOFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CED60)
#define LAKBGIFBOFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8CEFE0)
#define LAKBGIFBOFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8CEEA0)
#define LAKBGIFBOFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8CF100)
#define LAKBGIFBOFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8CED20)
#define LAKBGIFBOFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8CF3C0)
#define LAKBGIFBOFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8CF320)
#define LAKBGIFBOFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8CED50)
#define LAKBGIFBOFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8CF170)
#define LAKBGIFBOFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8CF1D0)

inline static constexpr unsigned int LAKBGIFBOFA_TypeDefinitionIndex = 34423;

	class LAKBGIFBOFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GIJKCHKMPJG*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LAKBGIFBOFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LAKBGIFBOFA*>**)UnitySDK::FromName("", "LAKBGIFBOFA")->GetStaticField(0x2F240);
		}

		static ::Google::Protobuf::FieldCodec_1<::GIJKCHKMPJG*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::GIJKCHKMPJG*>**)UnitySDK::FromName("", "LAKBGIFBOFA")->GetStaticField(0x2F248);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAKBGIFBOFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAKBGIFBOFA*))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAKBGIFBOFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LAKBGIFBOFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LAKBGIFBOFA*>*(*)())((::PBYTE)hIl2Cpp + LAKBGIFBOFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAKBGIFBOFA* Clone()
		{
			return ((::LAKBGIFBOFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GIJKCHKMPJG*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GIJKCHKMPJG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAKBGIFBOFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAKBGIFBOFA*))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAKBGIFBOFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAKBGIFBOFA*))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAKBGIFBOFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
