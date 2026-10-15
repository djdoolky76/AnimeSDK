#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMGDLJAJCM;
class OKFKPPNGCOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJMGDLJAJCM_BAPCFHFCCLI_OFFSET UNITYSDK_OFFSET(0x1EA4CB30)
#define MJMGDLJAJCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA4CF60)
#define MJMGDLJAJCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4D260)
#define MJMGDLJAJCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA4CAE0)
#define MJMGDLJAJCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA4CA30)
#define MJMGDLJAJCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4C9E0)
#define MJMGDLJAJCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA4CCC0)
#define MJMGDLJAJCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA4CB40)
#define MJMGDLJAJCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA4CDE0)
#define MJMGDLJAJCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA4C970)
#define MJMGDLJAJCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA4D0A0)
#define MJMGDLJAJCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA4D000)
#define MJMGDLJAJCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA4C9D0)
#define MJMGDLJAJCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA4CE50)
#define MJMGDLJAJCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA4CEB0)

	class MJMGDLJAJCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OKFKPPNGCOD*>* KIPCOCNFOPC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MJMGDLJAJCM")->GetStaticField(0x55E70);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LAHAPCNNBBG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MJMGDLJAJCM")->GetStaticField(0x55E78);
		}

		// static const ::System::Object HCHIEHGHBEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJMGDLJAJCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJMGDLJAJCM*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MJMGDLJAJCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJMGDLJAJCM* Clone()
		{
			return ((::MJMGDLJAJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKFKPPNGCOD*>* BAPCFHFCCLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKFKPPNGCOD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_BAPCFHFCCLI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJMGDLJAJCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJMGDLJAJCM*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJMGDLJAJCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJMGDLJAJCM*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJMGDLJAJCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
