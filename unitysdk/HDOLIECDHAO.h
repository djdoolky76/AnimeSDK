#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDOLIECDHAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDOLIECDHAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5538D0)
#define HDOLIECDHAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E553970)
#define HDOLIECDHAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E553570)
#define HDOLIECDHAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E553540)
#define HDOLIECDHAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E553530)
#define HDOLIECDHAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5536D0)
#define HDOLIECDHAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5535E0)
#define HDOLIECDHAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E553830)
#define HDOLIECDHAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5534C0)
#define HDOLIECDHAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E553920)
#define HDOLIECDHAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5538F0)
#define HDOLIECDHAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E553520)
#define HDOLIECDHAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E553860)
#define HDOLIECDHAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5538C0)

	class HDOLIECDHAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDOLIECDHAO")->GetStaticField(0x324A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDOLIECDHAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDOLIECDHAO*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOLIECDHAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDOLIECDHAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDOLIECDHAO* Clone()
		{
			return ((::HDOLIECDHAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDOLIECDHAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDOLIECDHAO*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDOLIECDHAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDOLIECDHAO*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
