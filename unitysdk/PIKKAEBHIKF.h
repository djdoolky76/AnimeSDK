#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKKAEBHIKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIKKAEBHIKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6BE70)
#define PIKKAEBHIKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6C090)
#define PIKKAEBHIKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6BA60)
#define PIKKAEBHIKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6BA30)
#define PIKKAEBHIKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6BA20)
#define PIKKAEBHIKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6BBF0)
#define PIKKAEBHIKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6BAF0)
#define PIKKAEBHIKF_FMLMNNLPGNF_OFFSET UNITYSDK_OFFSET(0x1DF6BAD0)
#define PIKKAEBHIKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6BD60)
#define PIKKAEBHIKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6B9B0)
#define PIKKAEBHIKF_LIAPBMEGPFJ_OFFSET UNITYSDK_OFFSET(0x1DF6BAE0)
#define PIKKAEBHIKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6BF30)
#define PIKKAEBHIKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6BF00)
#define PIKKAEBHIKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6BA10)
#define PIKKAEBHIKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6BD90)
#define PIKKAEBHIKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6BDF0)

	class PIKKAEBHIKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDAKPHDHIEC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIKKAEBHIKF")->GetStaticField(0x444F0);
		}

		// static const ::System::Object OLFMKBMAODM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIKKAEBHIKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKKAEBHIKF*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIKKAEBHIKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIKKAEBHIKF* Clone()
		{
			return ((::PIKKAEBHIKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FMLMNNLPGNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_FMLMNNLPGNF_OFFSET))(this);
		}

		::System::Void LIAPBMEGPFJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_LIAPBMEGPFJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIKKAEBHIKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIKKAEBHIKF*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIKKAEBHIKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKKAEBHIKF*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
