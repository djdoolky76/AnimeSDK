#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNLACIGLJJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNLACIGLJJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E3F20)
#define GNLACIGLJJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E4180)
#define GNLACIGLJJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E3B20)
#define GNLACIGLJJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E3A90)
#define GNLACIGLJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E3A40)
#define GNLACIGLJJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E3C50)
#define GNLACIGLJJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E3B60)
#define GNLACIGLJJN_FEPDNOFICHP_OFFSET UNITYSDK_OFFSET(0x1E4E3B50)
#define GNLACIGLJJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E3D40)
#define GNLACIGLJJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E3A00)
#define GNLACIGLJJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E3FE0)
#define GNLACIGLJJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E3F90)
#define GNLACIGLJJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E3A30)
#define GNLACIGLJJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E3E40)
#define GNLACIGLJJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E3EA0)

	class GNLACIGLJJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKDCBDDCEGL; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_JFJNPMNCEGF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GNLACIGLJJN")->GetStaticField(0x23990);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNLACIGLJJN")->GetStaticField(0x23998);
		}

		// static const ::System::Object FDAFMPNPIMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNLACIGLJJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLACIGLJJN*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLACIGLJJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNLACIGLJJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNLACIGLJJN* Clone()
		{
			return ((::GNLACIGLJJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FEPDNOFICHP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_FEPDNOFICHP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNLACIGLJJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNLACIGLJJN*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNLACIGLJJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLACIGLJJN*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
