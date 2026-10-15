#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGGMPDIMLAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGGMPDIMLAE_ACNCIGIEDCB_OFFSET UNITYSDK_OFFSET(0x1DF2FAD0)
#define PGGMPDIMLAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2FEA0)
#define PGGMPDIMLAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF30100)
#define PGGMPDIMLAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2FAA0)
#define PGGMPDIMLAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2FA10)
#define PGGMPDIMLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2F9C0)
#define PGGMPDIMLAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2FBD0)
#define PGGMPDIMLAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2FAE0)
#define PGGMPDIMLAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2FCC0)
#define PGGMPDIMLAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2F980)
#define PGGMPDIMLAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2FF60)
#define PGGMPDIMLAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2FF10)
#define PGGMPDIMLAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2F9B0)
#define PGGMPDIMLAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2FDC0)
#define PGGMPDIMLAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2FE20)

inline static constexpr unsigned int PGGMPDIMLAE_TypeDefinitionIndex = 33543;

	class PGGMPDIMLAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OKIJMEGKJFL; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_MHLHPDNBHFK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PGGMPDIMLAE")->GetStaticField(0x3D7A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGGMPDIMLAE")->GetStaticField(0x3D7A8);
		}

		// static const ::System::Object PAAMIGFIBON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGGMPDIMLAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGGMPDIMLAE*))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGGMPDIMLAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGGMPDIMLAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGGMPDIMLAE* Clone()
		{
			return ((::PGGMPDIMLAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ACNCIGIEDCB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_ACNCIGIEDCB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGGMPDIMLAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGGMPDIMLAE*))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGGMPDIMLAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGGMPDIMLAE*))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGGMPDIMLAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
