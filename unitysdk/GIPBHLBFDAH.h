#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIPBHLBFDAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define GIPBHLBFDAH_AENILPKCOAO_OFFSET UNITYSDK_OFFSET(0x1E4A39B0)
#define GIPBHLBFDAH_AKOOBHBELFN_OFFSET UNITYSDK_OFFSET(0x1E4A3A40)
#define GIPBHLBFDAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A4130)
#define GIPBHLBFDAH_CBKAEJJLNNH_OFFSET UNITYSDK_OFFSET(0x1E4A39C0)
#define GIPBHLBFDAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A45C0)
#define GIPBHLBFDAH_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1E4A39F0)
#define GIPBHLBFDAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A38D0)
#define GIPBHLBFDAH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E4A39D0)
#define GIPBHLBFDAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A3850)
#define GIPBHLBFDAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3840)
#define GIPBHLBFDAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A3BE0)
#define GIPBHLBFDAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A3A70)
#define GIPBHLBFDAH_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E4A3990)
#define GIPBHLBFDAH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E4A39E0)
#define GIPBHLBFDAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A3D10)
#define GIPBHLBFDAH_GHGCIONJLOP_OFFSET UNITYSDK_OFFSET(0x1E4A3A10)
#define GIPBHLBFDAH_HGJPFBABOFB_OFFSET UNITYSDK_OFFSET(0x1E4A3A20)
#define GIPBHLBFDAH_HICFAJKOIJC_OFFSET UNITYSDK_OFFSET(0x1E4A3A30)
#define GIPBHLBFDAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A37D0)
#define GIPBHLBFDAH_KKEIJKLCKDL_OFFSET UNITYSDK_OFFSET(0x1E4A3A60)
#define GIPBHLBFDAH_KNLIACOLHON_OFFSET UNITYSDK_OFFSET(0x1E4A3A50)
#define GIPBHLBFDAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A4460)
#define GIPBHLBFDAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A4390)
#define GIPBHLBFDAH_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E4A39A0)
#define GIPBHLBFDAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3830)
#define GIPBHLBFDAH_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1E4A3A00)
#define GIPBHLBFDAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A3DC0)
#define GIPBHLBFDAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A3E20)

	class GIPBHLBFDAH : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean DMAEKOCHJBH; // 0x20
		::System::Boolean JHJIAMAMFAD; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 COCICMNFIKH; // 0x24
		::System::UInt32 DNIPIFDDAAE; // 0x28
		::System::UInt32 NDFIDCNNGMJ; // 0x2C
		::System::UInt32 CKEEENCFNLE; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GIPBHLBFDAH")->GetStaticField(0x1B060);
		}

		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object GOGOMALLEOM; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		// static const ::System::Object FMIEFGJEIEO; // 0x0
		// static const ::System::Object IBHIBCJAOKB; // 0x0
		// static const ::System::Object BFFHEGIEEEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIPBHLBFDAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIPBHLBFDAH*))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GIPBHLBFDAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIPBHLBFDAH* Clone()
		{
			return ((::GIPBHLBFDAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::UInt32 AENILPKCOAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_AENILPKCOAO_OFFSET))(this);
		}

		::System::Void CBKAEJJLNNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CBKAEJJLNNH_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::Boolean GHGCIONJLOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_GHGCIONJLOP_OFFSET))(this);
		}

		::System::Void HGJPFBABOFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_HGJPFBABOFB_OFFSET))(this, a1);
		}

		::System::UInt32 HICFAJKOIJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_HICFAJKOIJC_OFFSET))(this);
		}

		::System::Void AKOOBHBELFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_AKOOBHBELFN_OFFSET))(this, a1);
		}

		::System::Boolean KNLIACOLHON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_KNLIACOLHON_OFFSET))(this);
		}

		::System::Void KKEIJKLCKDL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_KKEIJKLCKDL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIPBHLBFDAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIPBHLBFDAH*))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIPBHLBFDAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIPBHLBFDAH*))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIPBHLBFDAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
