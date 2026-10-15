#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLINFKJIAEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLINFKJIAEL_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1EA55180)
#define MLINFKJIAEL_BGEAOMKAAJG_OFFSET UNITYSDK_OFFSET(0x1EA55200)
#define MLINFKJIAEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA55A20)
#define MLINFKJIAEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA56080)
#define MLINFKJIAEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA550F0)
#define MLINFKJIAEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA55080)
#define MLINFKJIAEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA55050)
#define MLINFKJIAEL_DIDIKDKBLNJ_OFFSET UNITYSDK_OFFSET(0x1EA552A0)
#define MLINFKJIAEL_DLLLCIIDMNG_OFFSET UNITYSDK_OFFSET(0x1EA55290)
#define MLINFKJIAEL_ELEILNPLMNM_OFFSET UNITYSDK_OFFSET(0x1EA55310)
#define MLINFKJIAEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA55380)
#define MLINFKJIAEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA55350)
#define MLINFKJIAEL_GBPGLIJAEIP_OFFSET UNITYSDK_OFFSET(0x1EA55280)
#define MLINFKJIAEL_GCLPNLIIDFD_OFFSET UNITYSDK_OFFSET(0x1EA55300)
#define MLINFKJIAEL_GEPMNDDAPGC_OFFSET UNITYSDK_OFFSET(0x1EA55190)
#define MLINFKJIAEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA55460)
#define MLINFKJIAEL_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1EA55170)
#define MLINFKJIAEL_HKCDIKLLOGE_OFFSET UNITYSDK_OFFSET(0x1EA55270)
#define MLINFKJIAEL_ILKAJDOCLJP_OFFSET UNITYSDK_OFFSET(0x1EA551F0)
#define MLINFKJIAEL_JDCNCBFKIBK_OFFSET UNITYSDK_OFFSET(0x1EA55330)
#define MLINFKJIAEL_JJDDPDNDIFA_OFFSET UNITYSDK_OFFSET(0x1EA551A0)
#define MLINFKJIAEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA55010)
#define MLINFKJIAEL_LLKFMHFJHOL_OFFSET UNITYSDK_OFFSET(0x1EA552F0)
#define MLINFKJIAEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA55EA0)
#define MLINFKJIAEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA55DF0)
#define MLINFKJIAEL_MIKKLGDDFMH_OFFSET UNITYSDK_OFFSET(0x1EA55320)
#define MLINFKJIAEL_MJBLGMNBAPK_OFFSET UNITYSDK_OFFSET(0x1EA55260)
#define MLINFKJIAEL_NEMKAPMKLKG_OFFSET UNITYSDK_OFFSET(0x1EA55250)
#define MLINFKJIAEL_NPBOCHOHANI_OFFSET UNITYSDK_OFFSET(0x1EA55340)
#define MLINFKJIAEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA55040)
#define MLINFKJIAEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA55630)
#define MLINFKJIAEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA55690)

inline static constexpr unsigned int MLINFKJIAEL_TypeDefinitionIndex = 32016;

	class MLINFKJIAEL : public ::System::Object
	{
	public:
		::System::String* KFFJECMDGBJ; // 0x10
		::System::String* IPMOKDFGMLC; // 0x18
		::System::String* MLLMEPDJGFM; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 MNEPJJBFBBO; // 0x30
		::System::UInt32 GBJGFHLBCEI; // 0x34
		::System::UInt32 IFNCKPHGNHE; // 0x38
		::System::UInt32 IBEBBFIHLLP; // 0x3C
		::System::UInt32 HJLMPKKOGAB; // 0x40
		::System::UInt32 KFLKHNMNBLE; // 0x44
		static ::Google::Protobuf::MessageParser_1<::MLINFKJIAEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLINFKJIAEL*>**)UnitySDK::FromName("", "MLINFKJIAEL")->GetStaticField(0x56580);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object OAHHPIDOACP; // 0x0
		// static const ::System::Object DDACPKEJCFC; // 0x0
		// static const ::System::Object OFFNCJFJKLE; // 0x0
		// static const ::System::Object HJBIINDNJFD; // 0x0
		// static const ::System::Object BEJKFNAFHPN; // 0x0
		// static const ::System::Object JDKCBCJICIP; // 0x0
		// static const ::System::Object FDJBMOICLNE; // 0x0
		// static const ::System::Object FPIOLKELJJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLINFKJIAEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLINFKJIAEL*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLINFKJIAEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLINFKJIAEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLINFKJIAEL*>*(*)())((::PBYTE)hIl2Cpp + MLINFKJIAEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLINFKJIAEL* Clone()
		{
			return ((::MLINFKJIAEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLINFKJIAEL_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::String* GEPMNDDAPGC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_GEPMNDDAPGC_OFFSET))(this);
		}

		::System::Void JJDDPDNDIFA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_JJDDPDNDIFA_OFFSET))(this, a1);
		}

		::System::String* ILKAJDOCLJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_ILKAJDOCLJP_OFFSET))(this);
		}

		::System::Void BGEAOMKAAJG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_BGEAOMKAAJG_OFFSET))(this, a1);
		}

		::System::UInt32 NEMKAPMKLKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_NEMKAPMKLKG_OFFSET))(this);
		}

		::System::Void MJBLGMNBAPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLINFKJIAEL_MJBLGMNBAPK_OFFSET))(this, a1);
		}

		::System::UInt32 HKCDIKLLOGE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_HKCDIKLLOGE_OFFSET))(this);
		}

		::System::Void GBPGLIJAEIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLINFKJIAEL_GBPGLIJAEIP_OFFSET))(this, a1);
		}

		::System::String* DLLLCIIDMNG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_DLLLCIIDMNG_OFFSET))(this);
		}

		::System::Void DIDIKDKBLNJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_DIDIKDKBLNJ_OFFSET))(this, a1);
		}

		::System::UInt32 LLKFMHFJHOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_LLKFMHFJHOL_OFFSET))(this);
		}

		::System::Void GCLPNLIIDFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLINFKJIAEL_GCLPNLIIDFD_OFFSET))(this, a1);
		}

		::System::UInt32 ELEILNPLMNM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_ELEILNPLMNM_OFFSET))(this);
		}

		::System::Void MIKKLGDDFMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLINFKJIAEL_MIKKLGDDFMH_OFFSET))(this, a1);
		}

		::System::UInt32 JDCNCBFKIBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_JDCNCBFKIBK_OFFSET))(this);
		}

		::System::Void NPBOCHOHANI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLINFKJIAEL_NPBOCHOHANI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLINFKJIAEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLINFKJIAEL*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLINFKJIAEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLINFKJIAEL*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLINFKJIAEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
