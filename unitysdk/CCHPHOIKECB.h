#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCHPHOIKECB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCHPHOIKECB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0751A0)
#define CCHPHOIKECB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E075240)
#define CCHPHOIKECB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E074E90)
#define CCHPHOIKECB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E074E60)
#define CCHPHOIKECB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E074E50)
#define CCHPHOIKECB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E074FA0)
#define CCHPHOIKECB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E074ED0)
#define CCHPHOIKECB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E075100)
#define CCHPHOIKECB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E074E10)
#define CCHPHOIKECB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0751F0)
#define CCHPHOIKECB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0751C0)
#define CCHPHOIKECB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E074E40)
#define CCHPHOIKECB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E075130)
#define CCHPHOIKECB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E075190)

	class CCHPHOIKECB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CCHPHOIKECB")->GetStaticField(0xD7D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCHPHOIKECB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCHPHOIKECB*))((::PBYTE)hIl2Cpp + CCHPHOIKECB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCHPHOIKECB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CCHPHOIKECB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCHPHOIKECB* Clone()
		{
			return ((::CCHPHOIKECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCHPHOIKECB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCHPHOIKECB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCHPHOIKECB*))((::PBYTE)hIl2Cpp + CCHPHOIKECB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCHPHOIKECB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCHPHOIKECB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCHPHOIKECB*))((::PBYTE)hIl2Cpp + CCHPHOIKECB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCHPHOIKECB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
