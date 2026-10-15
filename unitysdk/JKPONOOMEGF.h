#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKPONOOMEGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKPONOOMEGF_BJILOJLKPLK_OFFSET UNITYSDK_OFFSET(0x1E7715D0)
#define JKPONOOMEGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E771B30)
#define JKPONOOMEGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E771EF0)
#define JKPONOOMEGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7714A0)
#define JKPONOOMEGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E771440)
#define JKPONOOMEGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E771420)
#define JKPONOOMEGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7716D0)
#define JKPONOOMEGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E771630)
#define JKPONOOMEGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7715A0)
#define JKPONOOMEGF_GCFAEAPPIBP_OFFSET UNITYSDK_OFFSET(0x1E7715B0)
#define JKPONOOMEGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E771780)
#define JKPONOOMEGF_HDMOMPOJCOK_OFFSET UNITYSDK_OFFSET(0x1E7715E0)
#define JKPONOOMEGF_JDCNCBFKIBK_OFFSET UNITYSDK_OFFSET(0x1E771510)
#define JKPONOOMEGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7713E0)
#define JKPONOOMEGF_KIOKMHAIIKI_OFFSET UNITYSDK_OFFSET(0x1E7715C0)
#define JKPONOOMEGF_LKNKCOHFDOA_OFFSET UNITYSDK_OFFSET(0x1E771530)
#define JKPONOOMEGF_MBOKLFNEOBI_OFFSET UNITYSDK_OFFSET(0x1E771540)
#define JKPONOOMEGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E771DD0)
#define JKPONOOMEGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E771D50)
#define JKPONOOMEGF_NPBOCHOHANI_OFFSET UNITYSDK_OFFSET(0x1E771520)
#define JKPONOOMEGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E771590)
#define JKPONOOMEGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E771410)
#define JKPONOOMEGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7718C0)
#define JKPONOOMEGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E771920)

inline static constexpr unsigned int JKPONOOMEGF_TypeDefinitionIndex = 32046;

	class JKPONOOMEGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* ACKBJCBOLAK; // 0x18
		::System::String* NCFALPOHOLI; // 0x20
		::System::UInt32 KFLKHNMNBLE; // 0x28
		::System::UInt32 BHHCNHCDDMA; // 0x2C
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JKPONOOMEGF")->GetStaticField(0x66230);
		}

		// static const ::System::Object FPIOLKELJJG; // 0x0
		// static const ::System::Object JKOGPMLPGJJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GIACAJKKEJF; // 0x0
		// static const ::System::Object AHBMGKCFAEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKPONOOMEGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKPONOOMEGF*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKPONOOMEGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JKPONOOMEGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKPONOOMEGF* Clone()
		{
			return ((::JKPONOOMEGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JDCNCBFKIBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_JDCNCBFKIBK_OFFSET))(this);
		}

		::System::Void NPBOCHOHANI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKPONOOMEGF_NPBOCHOHANI_OFFSET))(this, a1);
		}

		::System::String* LKNKCOHFDOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_LKNKCOHFDOA_OFFSET))(this);
		}

		::System::Void MBOKLFNEOBI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_MBOKLFNEOBI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKPONOOMEGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GCFAEAPPIBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_GCFAEAPPIBP_OFFSET))(this);
		}

		::System::Void KIOKMHAIIKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKPONOOMEGF_KIOKMHAIIKI_OFFSET))(this, a1);
		}

		::System::String* BJILOJLKPLK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_BJILOJLKPLK_OFFSET))(this);
		}

		::System::Void HDMOMPOJCOK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_HDMOMPOJCOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKPONOOMEGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKPONOOMEGF*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKPONOOMEGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKPONOOMEGF*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKPONOOMEGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
