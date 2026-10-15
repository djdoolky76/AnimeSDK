#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKNGAGGAJKC;
class MDGIOENHBEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDGIOENHBEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA028E0)
#define MDGIOENHBEJ_CAOAFPAENFC_OFFSET UNITYSDK_OFFSET(0x1EA02270)
#define MDGIOENHBEJ_CBJLPOGLLOG_OFFSET UNITYSDK_OFFSET(0x1EA02180)
#define MDGIOENHBEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA02D10)
#define MDGIOENHBEJ_CDHOGFKKKFO_OFFSET UNITYSDK_OFFSET(0x1EA021E0)
#define MDGIOENHBEJ_CHEAPECBFHG_OFFSET UNITYSDK_OFFSET(0x1EA021F0)
#define MDGIOENHBEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA02060)
#define MDGIOENHBEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA01F80)
#define MDGIOENHBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA01F60)
#define MDGIOENHBEJ_ECLHANLJLMH_OFFSET UNITYSDK_OFFSET(0x1EA02240)
#define MDGIOENHBEJ_EKNDMDHICCH_OFFSET UNITYSDK_OFFSET(0x1EA02250)
#define MDGIOENHBEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA02370)
#define MDGIOENHBEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA02280)
#define MDGIOENHBEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA02570)
#define MDGIOENHBEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA01EF0)
#define MDGIOENHBEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA02B90)
#define MDGIOENHBEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA02A40)
#define MDGIOENHBEJ_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x1EA02260)
#define MDGIOENHBEJ_OGLMLLBICMH_OFFSET UNITYSDK_OFFSET(0x1EA02190)
#define MDGIOENHBEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA01F50)
#define MDGIOENHBEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA026C0)
#define MDGIOENHBEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA02720)

	class MDGIOENHBEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* NOPDHBJGJFE; // 0x18
		::KKNGAGGAJKC* CLAHCINJGNA; // 0x20
		::System::String* MDPFLIGGADI; // 0x28
		::System::UInt32 JAAPIFBOGCL; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MDGIOENHBEJ")->GetStaticField(0x49320);
		}

		// static const ::System::Object PBBIACCKPME; // 0x0
		// static const ::System::Object NPHDPALEMEA; // 0x0
		// static const ::System::Object KGHIKFBJDLL; // 0x0
		// static const ::System::Object GBCAJJPCIIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDGIOENHBEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDGIOENHBEJ*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MDGIOENHBEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDGIOENHBEJ* Clone()
		{
			return ((::MDGIOENHBEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CLONE_OFFSET))(this);
		}

		::System::String* CBJLPOGLLOG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CBJLPOGLLOG_OFFSET))(this);
		}

		::System::Void OGLMLLBICMH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_OGLMLLBICMH_OFFSET))(this, a1);
		}

		::System::String* CDHOGFKKKFO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CDHOGFKKKFO_OFFSET))(this);
		}

		::System::Void CHEAPECBFHG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CHEAPECBFHG_OFFSET))(this, a1);
		}

		::System::UInt32 ECLHANLJLMH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_ECLHANLJLMH_OFFSET))(this);
		}

		::System::Void EKNDMDHICCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_EKNDMDHICCH_OFFSET))(this, a1);
		}

		::KKNGAGGAJKC* NDMBDGKAJEK()
		{
			return ((::KKNGAGGAJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::Void CAOAFPAENFC(::KKNGAGGAJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKNGAGGAJKC*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CAOAFPAENFC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDGIOENHBEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDGIOENHBEJ*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDGIOENHBEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDGIOENHBEJ*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDGIOENHBEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
