#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCOPEELCCH;
class OKFLAHFIBCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOCOPEELCCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4EC980)
#define GOCOPEELCCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4ECC80)
#define GOCOPEELCCH_CGBFHMEMADI_OFFSET UNITYSDK_OFFSET(0x1E4EC550)
#define GOCOPEELCCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4EC500)
#define GOCOPEELCCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4EC450)
#define GOCOPEELCCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EC400)
#define GOCOPEELCCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4EC6E0)
#define GOCOPEELCCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4EC560)
#define GOCOPEELCCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4EC800)
#define GOCOPEELCCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4EC390)
#define GOCOPEELCCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4ECAC0)
#define GOCOPEELCCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4ECA20)
#define GOCOPEELCCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4EC3F0)
#define GOCOPEELCCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4EC870)
#define GOCOPEELCCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4EC8D0)

	class GOCOPEELCCH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OKFLAHFIBCM*>* IACBBKFNEPO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOCOPEELCCH")->GetStaticField(0x24C90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CMKDIOEKMLP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GOCOPEELCCH")->GetStaticField(0x24C98);
		}

		// static const ::System::Object CLEEBACIIHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOCOPEELCCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCOPEELCCH*))((::PBYTE)hIl2Cpp + GOCOPEELCCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCOPEELCCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOCOPEELCCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOCOPEELCCH* Clone()
		{
			return ((::GOCOPEELCCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKFLAHFIBCM*>* CGBFHMEMADI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKFLAHFIBCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH_CGBFHMEMADI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOCOPEELCCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOCOPEELCCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOCOPEELCCH*))((::PBYTE)hIl2Cpp + GOCOPEELCCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOCOPEELCCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOCOPEELCCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCOPEELCCH*))((::PBYTE)hIl2Cpp + GOCOPEELCCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOCOPEELCCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
