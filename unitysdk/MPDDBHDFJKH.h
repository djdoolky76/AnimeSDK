#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPDDBHDFJKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPDDBHDFJKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB5440)
#define MPDDBHDFJKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB5660)
#define MPDDBHDFJKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB5090)
#define MPDDBHDFJKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB5060)
#define MPDDBHDFJKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB5050)
#define MPDDBHDFJKH_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1EAB50D0)
#define MPDDBHDFJKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB51C0)
#define MPDDBHDFJKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB50F0)
#define MPDDBHDFJKH_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1EAB50E0)
#define MPDDBHDFJKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB5330)
#define MPDDBHDFJKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB5010)
#define MPDDBHDFJKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB5500)
#define MPDDBHDFJKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB54D0)
#define MPDDBHDFJKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB5040)
#define MPDDBHDFJKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB5360)
#define MPDDBHDFJKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB53C0)

	class MPDDBHDFJKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NIAOPCJHKCG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MPDDBHDFJKH")->GetStaticField(0x5B400);
		}

		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPDDBHDFJKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDDBHDFJKH*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MPDDBHDFJKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPDDBHDFJKH* Clone()
		{
			return ((::MPDDBHDFJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPDDBHDFJKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPDDBHDFJKH*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPDDBHDFJKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDDBHDFJKH*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
