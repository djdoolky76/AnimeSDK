#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPNGMLENFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPNGMLENFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F1080)
#define CKPNGMLENFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F1340)
#define CKPNGMLENFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F0C00)
#define CKPNGMLENFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F0B70)
#define CKPNGMLENFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F0B20)
#define CKPNGMLENFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F0D80)
#define CKPNGMLENFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F0C60)
#define CKPNGMLENFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F0E70)
#define CKPNGMLENFA_JDFFEJFPHBJ_OFFSET UNITYSDK_OFFSET(0x1E0F0C50)
#define CKPNGMLENFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F0AB0)
#define CKPNGMLENFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F1170)
#define CKPNGMLENFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F1120)
#define CKPNGMLENFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F0B10)
#define CKPNGMLENFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F0F70)
#define CKPNGMLENFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F0FD0)

	class CKPNGMLENFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CKPNGMLENFA")->GetStaticField(0x1BDE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OKDIKGNLFBH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CKPNGMLENFA")->GetStaticField(0x1BDE8);
		}

		// static const ::System::Object PDFFAKHMEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKPNGMLENFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPNGMLENFA*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPNGMLENFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CKPNGMLENFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPNGMLENFA* Clone()
		{
			return ((::CKPNGMLENFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDFFEJFPHBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_JDFFEJFPHBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKPNGMLENFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKPNGMLENFA*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKPNGMLENFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPNGMLENFA*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
