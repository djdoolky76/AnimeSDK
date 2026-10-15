#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFDOMLOABJB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFDOMLOABJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E116730)
#define AFDOMLOABJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E116950)
#define AFDOMLOABJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E116380)
#define AFDOMLOABJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E116350)
#define AFDOMLOABJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E116340)
#define AFDOMLOABJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1164B0)
#define AFDOMLOABJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1163E0)
#define AFDOMLOABJB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1163D0)
#define AFDOMLOABJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E116620)
#define AFDOMLOABJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E116300)
#define AFDOMLOABJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1167F0)
#define AFDOMLOABJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1167C0)
#define AFDOMLOABJB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1163C0)
#define AFDOMLOABJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E116330)
#define AFDOMLOABJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E116650)
#define AFDOMLOABJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1166B0)

	class AFDOMLOABJB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AFDOMLOABJB")->GetStaticField(0x2E460);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFDOMLOABJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFDOMLOABJB*))((::PBYTE)hIl2Cpp + AFDOMLOABJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFDOMLOABJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AFDOMLOABJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFDOMLOABJB* Clone()
		{
			return ((::AFDOMLOABJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFDOMLOABJB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFDOMLOABJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFDOMLOABJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFDOMLOABJB*))((::PBYTE)hIl2Cpp + AFDOMLOABJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFDOMLOABJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFDOMLOABJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFDOMLOABJB*))((::PBYTE)hIl2Cpp + AFDOMLOABJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFDOMLOABJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
