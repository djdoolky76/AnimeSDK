#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHHJOFLMBJC.h"
#include "unitysdk/System/Object.h"
class FFJCEKKJOHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FFJCEKKJOHG_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1E370010)
#define FFJCEKKJOHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3705C0)
#define FFJCEKKJOHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E370900)
#define FFJCEKKJOHG_CHNLJIDHOHD_OFFSET UNITYSDK_OFFSET(0x1E36FFE0)
#define FFJCEKKJOHG_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1E370020)
#define FFJCEKKJOHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E36FF20)
#define FFJCEKKJOHG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E36FFB0)
#define FFJCEKKJOHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E36FEA0)
#define FFJCEKKJOHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36FE90)
#define FFJCEKKJOHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E370150)
#define FFJCEKKJOHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E370030)
#define FFJCEKKJOHG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E36FFC0)
#define FFJCEKKJOHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3702E0)
#define FFJCEKKJOHG_ICOJDCCJMEM_OFFSET UNITYSDK_OFFSET(0x1E36FFF0)
#define FFJCEKKJOHG_JCLAIBFMENP_OFFSET UNITYSDK_OFFSET(0x1E370000)
#define FFJCEKKJOHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E36FE50)
#define FFJCEKKJOHG_JPEHLKNEPIF_OFFSET UNITYSDK_OFFSET(0x1E36FFD0)
#define FFJCEKKJOHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E370810)
#define FFJCEKKJOHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E370760)
#define FFJCEKKJOHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E36FE80)
#define FFJCEKKJOHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E370380)
#define FFJCEKKJOHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3703E0)

	class FFJCEKKJOHG : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HEKOAJFHMJJ; // 0x20
		::BHHJOFLMBJC JJMPAIDHGKD; // 0x24
		::System::Boolean DHMADBLCKKD; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FFJCEKKJOHG")->GetStaticField(0x5DBD0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object BNLGKHDJAEN; // 0x0
		// static const ::System::Object ADFLIGDHDDM; // 0x0
		// static const ::System::Object OOLLDLHKDOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFJCEKKJOHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFJCEKKJOHG*))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FFJCEKKJOHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFJCEKKJOHG* Clone()
		{
			return ((::FFJCEKKJOHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::BHHJOFLMBJC JPEHLKNEPIF()
		{
			return ((::BHHJOFLMBJC(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_JPEHLKNEPIF_OFFSET))(this);
		}

		::System::Void CHNLJIDHOHD(::BHHJOFLMBJC a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHJOFLMBJC))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CHNLJIDHOHD_OFFSET))(this, a1);
		}

		::System::UInt32 ICOJDCCJMEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_ICOJDCCJMEM_OFFSET))(this);
		}

		::System::Void JCLAIBFMENP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_JCLAIBFMENP_OFFSET))(this, a1);
		}

		::System::Boolean AHDMAMMBDIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_AHDMAMMBDIC_OFFSET))(this);
		}

		::System::Void CJCOLPJIACP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CJCOLPJIACP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFJCEKKJOHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFJCEKKJOHG*))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFJCEKKJOHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFJCEKKJOHG*))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFJCEKKJOHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
