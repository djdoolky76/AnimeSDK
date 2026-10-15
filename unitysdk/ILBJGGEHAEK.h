#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILBJGGEHAEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILBJGGEHAEK_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E6A6D40)
#define ILBJGGEHAEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A70B0)
#define ILBJGGEHAEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A72D0)
#define ILBJGGEHAEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A6D00)
#define ILBJGGEHAEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A6CD0)
#define ILBJGGEHAEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A6CC0)
#define ILBJGGEHAEK_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E6A6D50)
#define ILBJGGEHAEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A6E30)
#define ILBJGGEHAEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A6D60)
#define ILBJGGEHAEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A6FA0)
#define ILBJGGEHAEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A6C80)
#define ILBJGGEHAEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A7170)
#define ILBJGGEHAEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A7140)
#define ILBJGGEHAEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A6CB0)
#define ILBJGGEHAEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A6FD0)
#define ILBJGGEHAEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A7030)

	class ILBJGGEHAEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILBJGGEHAEK")->GetStaticField(0x55B70);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILBJGGEHAEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILBJGGEHAEK*))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILBJGGEHAEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILBJGGEHAEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILBJGGEHAEK* Clone()
		{
			return ((::ILBJGGEHAEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILBJGGEHAEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILBJGGEHAEK*))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILBJGGEHAEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILBJGGEHAEK*))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILBJGGEHAEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
