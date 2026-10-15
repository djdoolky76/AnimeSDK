#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMPOLBBFNA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJMPOLBBFNA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA4EEA0)
#define MJMPOLBBFNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4F0C0)
#define MJMPOLBBFNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA4EA90)
#define MJMPOLBBFNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA4EA60)
#define MJMPOLBBFNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4EA50)
#define MJMPOLBBFNA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA4EC20)
#define MJMPOLBBFNA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA4EB20)
#define MJMPOLBBFNA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA4ED90)
#define MJMPOLBBFNA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA4E9E0)
#define MJMPOLBBFNA_KJFNPMADCFB_OFFSET UNITYSDK_OFFSET(0x1EA4EB00)
#define MJMPOLBBFNA_LIGENHLAHOJ_OFFSET UNITYSDK_OFFSET(0x1EA4EB10)
#define MJMPOLBBFNA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA4EF60)
#define MJMPOLBBFNA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA4EF30)
#define MJMPOLBBFNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA4EA40)
#define MJMPOLBBFNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA4EDC0)
#define MJMPOLBBFNA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA4EE20)

	class MJMPOLBBFNA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJAMJPHEIPJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MJMPOLBBFNA")->GetStaticField(0x560E0);
		}

		// static const ::System::Object HNCOPBJMFEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJMPOLBBFNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJMPOLBBFNA*))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMPOLBBFNA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MJMPOLBBFNA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJMPOLBBFNA* Clone()
		{
			return ((::MJMPOLBBFNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_CLONE_OFFSET))(this);
		}

		::System::UInt32 KJFNPMADCFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_KJFNPMADCFB_OFFSET))(this);
		}

		::System::Void LIGENHLAHOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_LIGENHLAHOJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJMPOLBBFNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJMPOLBBFNA*))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJMPOLBBFNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJMPOLBBFNA*))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJMPOLBBFNA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
