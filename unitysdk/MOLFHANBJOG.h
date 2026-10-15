#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEIAEAEGEBJ;
class MOLFHANBJOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOLFHANBJOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAAF240)
#define MOLFHANBJOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAF550)
#define MOLFHANBJOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAAECF0)
#define MOLFHANBJOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAAEC70)
#define MOLFHANBJOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAEC60)
#define MOLFHANBJOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAAEF40)
#define MOLFHANBJOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAAEDC0)
#define MOLFHANBJOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAAED90)
#define MOLFHANBJOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAAF0C0)
#define MOLFHANBJOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAAEC20)
#define MOLFHANBJOG_JNHOFGCGGDG_OFFSET UNITYSDK_OFFSET(0x1EAAEDA0)
#define MOLFHANBJOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAAF3A0)
#define MOLFHANBJOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAAF310)
#define MOLFHANBJOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAAED80)
#define MOLFHANBJOG_ODEPKCOEMJB_OFFSET UNITYSDK_OFFSET(0x1EAAEDB0)
#define MOLFHANBJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAAEC50)
#define MOLFHANBJOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAAF100)
#define MOLFHANBJOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAAF160)

	class MOLFHANBJOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JEIAEAEGEBJ* BCCJIDFAJKP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MOLFHANBJOG")->GetStaticField(0x5AA00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNPDHDEBCJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOLFHANBJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOLFHANBJOG*))((::PBYTE)hIl2Cpp + MOLFHANBJOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLFHANBJOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MOLFHANBJOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOLFHANBJOG* Clone()
		{
			return ((::MOLFHANBJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLFHANBJOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JEIAEAEGEBJ* JNHOFGCGGDG()
		{
			return ((::JEIAEAEGEBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_JNHOFGCGGDG_OFFSET))(this);
		}

		::System::Void ODEPKCOEMJB(::JEIAEAEGEBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIAEAEGEBJ*))((::PBYTE)hIl2Cpp + MOLFHANBJOG_ODEPKCOEMJB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLFHANBJOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOLFHANBJOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOLFHANBJOG*))((::PBYTE)hIl2Cpp + MOLFHANBJOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOLFHANBJOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOLFHANBJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOLFHANBJOG*))((::PBYTE)hIl2Cpp + MOLFHANBJOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOLFHANBJOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
