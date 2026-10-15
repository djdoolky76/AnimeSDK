#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOAAMBMEOPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOAAMBMEOPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F6420)
#define FOAAMBMEOPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6700)
#define FOAAMBMEOPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F5F20)
#define FOAAMBMEOPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F5EE0)
#define FOAAMBMEOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F5ED0)
#define FOAAMBMEOPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F6100)
#define FOAAMBMEOPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F6000)
#define FOAAMBMEOPK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3F5FF0)
#define FOAAMBMEOPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F6200)
#define FOAAMBMEOPK_JCPCNNHDFFF_OFFSET UNITYSDK_OFFSET(0x1E3F5F80)
#define FOAAMBMEOPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F5E90)
#define FOAAMBMEOPK_LGIFCDCIBMF_OFFSET UNITYSDK_OFFSET(0x1E3F5F90)
#define FOAAMBMEOPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F6550)
#define FOAAMBMEOPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F6500)
#define FOAAMBMEOPK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3F5FE0)
#define FOAAMBMEOPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F5EC0)
#define FOAAMBMEOPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F62D0)
#define FOAAMBMEOPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F6330)

	class FOAAMBMEOPK : public ::System::Object
	{
	public:
		::System::String* DDINDNFEBKH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FOAAMBMEOPK")->GetStaticField(0x65990);
		}

		// static const ::System::Object HICAGFIFOCH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOAAMBMEOPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOAAMBMEOPK*))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOAAMBMEOPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FOAAMBMEOPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOAAMBMEOPK* Clone()
		{
			return ((::FOAAMBMEOPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_CLONE_OFFSET))(this);
		}

		::System::String* JCPCNNHDFFF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_JCPCNNHDFFF_OFFSET))(this);
		}

		::System::Void LGIFCDCIBMF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_LGIFCDCIBMF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOAAMBMEOPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOAAMBMEOPK*))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOAAMBMEOPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOAAMBMEOPK*))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOAAMBMEOPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
