#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPHOIPHAPDJ;
class PHCPOIHAPGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHCPOIHAPGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF37550)
#define PHCPOIHAPGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF37850)
#define PHCPOIHAPGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF370D0)
#define PHCPOIHAPGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF37020)
#define PHCPOIHAPGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF36FD0)
#define PHCPOIHAPGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF372B0)
#define PHCPOIHAPGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF37130)
#define PHCPOIHAPGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF373D0)
#define PHCPOIHAPGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF36F60)
#define PHCPOIHAPGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF37690)
#define PHCPOIHAPGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF375F0)
#define PHCPOIHAPGP_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1DF37120)
#define PHCPOIHAPGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF36FC0)
#define PHCPOIHAPGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF37440)
#define PHCPOIHAPGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF374A0)

inline static constexpr unsigned int PHCPOIHAPGP_TypeDefinitionIndex = 31751;

	class PHCPOIHAPGP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CPHOIPHAPDJ*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PHCPOIHAPGP")->GetStaticField(0x3EB50);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PHCPOIHAPGP")->GetStaticField(0x3EB58);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHCPOIHAPGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHCPOIHAPGP*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PHCPOIHAPGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHCPOIHAPGP* Clone()
		{
			return ((::PHCPOIHAPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CPHOIPHAPDJ*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CPHOIPHAPDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHCPOIHAPGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHCPOIHAPGP*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHCPOIHAPGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHCPOIHAPGP*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
