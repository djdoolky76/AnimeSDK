#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGFMHDPLLEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGFMHDPLLEC_ANIKNPPGIDE_OFFSET UNITYSDK_OFFSET(0x1EB0D2A0)
#define NGFMHDPLLEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB0D620)
#define NGFMHDPLLEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D9A0)
#define NGFMHDPLLEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB0D200)
#define NGFMHDPLLEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB0D1C0)
#define NGFMHDPLLEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D1B0)
#define NGFMHDPLLEC_DIPDHAJBLNP_OFFSET UNITYSDK_OFFSET(0x1EB0D270)
#define NGFMHDPLLEC_DNPLNDMNHFL_OFFSET UNITYSDK_OFFSET(0x1EB0D260)
#define NGFMHDPLLEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB0D390)
#define NGFMHDPLLEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB0D2B0)
#define NGFMHDPLLEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB0D460)
#define NGFMHDPLLEC_GNOMIFGBMHE_OFFSET UNITYSDK_OFFSET(0x1EB0D280)
#define NGFMHDPLLEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB0D170)
#define NGFMHDPLLEC_LBFJLDGLNBI_OFFSET UNITYSDK_OFFSET(0x1EB0D290)
#define NGFMHDPLLEC_LIFFCDHMOLG_OFFSET UNITYSDK_OFFSET(0x1EB0D250)
#define NGFMHDPLLEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB0D800)
#define NGFMHDPLLEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB0D7B0)
#define NGFMHDPLLEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D1A0)
#define NGFMHDPLLEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB0D490)
#define NGFMHDPLLEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB0D4F0)

	class NGFMHDPLLEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JGBBPIDOJCN; // 0x18
		::System::UInt32 DBFBENOBLKB; // 0x1C
		::System::UInt32 KLKLECBGCAD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NGFMHDPLLEC")->GetStaticField(0x5F2D0);
		}

		// static const ::System::Object EPPEHIAMGKJ; // 0x0
		// static const ::System::Object KHIFNHCFNFJ; // 0x0
		// static const ::System::Object IPPEKMLENLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGFMHDPLLEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFMHDPLLEC*))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGFMHDPLLEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NGFMHDPLLEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGFMHDPLLEC* Clone()
		{
			return ((::NGFMHDPLLEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 LIFFCDHMOLG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_LIFFCDHMOLG_OFFSET))(this);
		}

		::System::Void DNPLNDMNHFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_DNPLNDMNHFL_OFFSET))(this, a1);
		}

		::System::UInt32 DIPDHAJBLNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_DIPDHAJBLNP_OFFSET))(this);
		}

		::System::Void GNOMIFGBMHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_GNOMIFGBMHE_OFFSET))(this, a1);
		}

		::System::UInt32 LBFJLDGLNBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_LBFJLDGLNBI_OFFSET))(this);
		}

		::System::Void ANIKNPPGIDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_ANIKNPPGIDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGFMHDPLLEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFMHDPLLEC*))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGFMHDPLLEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFMHDPLLEC*))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGFMHDPLLEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
