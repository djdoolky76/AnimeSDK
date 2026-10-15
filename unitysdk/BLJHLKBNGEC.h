#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLJHLKBNGEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLJHLKBNGEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF65CA0)
#define BLJHLKBNGEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF65D40)
#define BLJHLKBNGEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF65940)
#define BLJHLKBNGEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF65910)
#define BLJHLKBNGEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF65900)
#define BLJHLKBNGEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF65AA0)
#define BLJHLKBNGEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF659B0)
#define BLJHLKBNGEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF65C00)
#define BLJHLKBNGEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF65890)
#define BLJHLKBNGEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF65CF0)
#define BLJHLKBNGEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF65CC0)
#define BLJHLKBNGEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF658F0)
#define BLJHLKBNGEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF65C30)
#define BLJHLKBNGEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF65C90)

	class BLJHLKBNGEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BLJHLKBNGEC")->GetStaticField(0x4D230);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLJHLKBNGEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLJHLKBNGEC*))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLJHLKBNGEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BLJHLKBNGEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLJHLKBNGEC* Clone()
		{
			return ((::BLJHLKBNGEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLJHLKBNGEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLJHLKBNGEC*))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLJHLKBNGEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLJHLKBNGEC*))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLJHLKBNGEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
