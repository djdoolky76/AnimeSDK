#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOJCEJIPPGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOJCEJIPPGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAAD220)
#define MOJCEJIPPGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAD2C0)
#define MOJCEJIPPGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAACEC0)
#define MOJCEJIPPGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAACE90)
#define MOJCEJIPPGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAACE80)
#define MOJCEJIPPGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAAD020)
#define MOJCEJIPPGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAACF30)
#define MOJCEJIPPGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAAD180)
#define MOJCEJIPPGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAACE10)
#define MOJCEJIPPGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAAD270)
#define MOJCEJIPPGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAAD240)
#define MOJCEJIPPGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAACE70)
#define MOJCEJIPPGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAAD1B0)
#define MOJCEJIPPGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAAD210)

	class MOJCEJIPPGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MOJCEJIPPGO")->GetStaticField(0x5A930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOJCEJIPPGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJCEJIPPGO*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MOJCEJIPPGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOJCEJIPPGO* Clone()
		{
			return ((::MOJCEJIPPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOJCEJIPPGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOJCEJIPPGO*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOJCEJIPPGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJCEJIPPGO*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
