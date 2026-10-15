#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPIKNJLJCNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPIKNJLJCNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6E58C0)
#define IPIKNJLJCNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5B20)
#define IPIKNJLJCNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6E54C0)
#define IPIKNJLJCNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E5430)
#define IPIKNJLJCNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E53E0)
#define IPIKNJLJCNC_DCAAIJACOOH_OFFSET UNITYSDK_OFFSET(0x1E6E54F0)
#define IPIKNJLJCNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6E55F0)
#define IPIKNJLJCNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6E5500)
#define IPIKNJLJCNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6E56E0)
#define IPIKNJLJCNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6E53A0)
#define IPIKNJLJCNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6E5980)
#define IPIKNJLJCNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6E5930)
#define IPIKNJLJCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6E53D0)
#define IPIKNJLJCNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6E57E0)
#define IPIKNJLJCNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6E5840)

inline static constexpr unsigned int IPIKNJLJCNC_TypeDefinitionIndex = 30552;

	class IPIKNJLJCNC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENMDCGPDKGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FDPOEFGBOOA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IPIKNJLJCNC")->GetStaticField(0x5B420);
		}

		static ::Google::Protobuf::MessageParser_1<::IPIKNJLJCNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPIKNJLJCNC*>**)UnitySDK::FromName("", "IPIKNJLJCNC")->GetStaticField(0x5B428);
		}

		// static const ::System::Object IMMIFHODMFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPIKNJLJCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPIKNJLJCNC*))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIKNJLJCNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPIKNJLJCNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPIKNJLJCNC*>*(*)())((::PBYTE)hIl2Cpp + IPIKNJLJCNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPIKNJLJCNC* Clone()
		{
			return ((::IPIKNJLJCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DCAAIJACOOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_DCAAIJACOOH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPIKNJLJCNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPIKNJLJCNC*))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPIKNJLJCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPIKNJLJCNC*))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPIKNJLJCNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
