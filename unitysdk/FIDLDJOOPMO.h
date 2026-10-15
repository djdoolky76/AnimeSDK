#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIDLDJOOPMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIDLDJOOPMO_AJCGPLHPPLE_OFFSET UNITYSDK_OFFSET(0x1E395AE0)
#define FIDLDJOOPMO_APBGOKEOHNF_OFFSET UNITYSDK_OFFSET(0x1E395A20)
#define FIDLDJOOPMO_BDKPJGEBJOP_OFFSET UNITYSDK_OFFSET(0x1E395AC0)
#define FIDLDJOOPMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E396BF0)
#define FIDLDJOOPMO_CAPBIMAEKPK_OFFSET UNITYSDK_OFFSET(0x1E395A40)
#define FIDLDJOOPMO_CBFGMEHPOGB_OFFSET UNITYSDK_OFFSET(0x1E395A70)
#define FIDLDJOOPMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E396E70)
#define FIDLDJOOPMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3959B0)
#define FIDLDJOOPMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E395950)
#define FIDLDJOOPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E395940)
#define FIDLDJOOPMO_EAGJINDOOKB_OFFSET UNITYSDK_OFFSET(0x1E395AD0)
#define FIDLDJOOPMO_EJIBKKLIKCO_OFFSET UNITYSDK_OFFSET(0x1E395A30)
#define FIDLDJOOPMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E395B30)
#define FIDLDJOOPMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E395B00)
#define FIDLDJOOPMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E396120)
#define FIDLDJOOPMO_HHPGDOKPCOO_OFFSET UNITYSDK_OFFSET(0x1E395A50)
#define FIDLDJOOPMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E395900)
#define FIDLDJOOPMO_JKABLEKPPKP_OFFSET UNITYSDK_OFFSET(0x1E395AB0)
#define FIDLDJOOPMO_LBNBOHLLCHA_OFFSET UNITYSDK_OFFSET(0x1E395A90)
#define FIDLDJOOPMO_LINGFOCLAIC_OFFSET UNITYSDK_OFFSET(0x1E395A60)
#define FIDLDJOOPMO_LPOPDJCGPNL_OFFSET UNITYSDK_OFFSET(0x1E395AA0)
#define FIDLDJOOPMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E396D70)
#define FIDLDJOOPMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E396C80)
#define FIDLDJOOPMO_MHHABONOGGA_OFFSET UNITYSDK_OFFSET(0x1E395A80)
#define FIDLDJOOPMO_ONPJIPGHHMK_OFFSET UNITYSDK_OFFSET(0x1E395AF0)
#define FIDLDJOOPMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E395930)
#define FIDLDJOOPMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E396850)
#define FIDLDJOOPMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3968B0)

inline static constexpr unsigned int FIDLDJOOPMO_TypeDefinitionIndex = 25441;

	class FIDLDJOOPMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double FFIIKBAMHHC; // 0x18
		::System::Double BABPENNPBLH; // 0x20
		::System::Double AABAIKOBEFP; // 0x28
		::System::Double EACCACKFFOC; // 0x30
		::System::Double HKOHHELMDIM; // 0x38
		::System::Double COMEFHPGIEL; // 0x40
		::System::Double IDBADLBOHHN; // 0x48
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FIDLDJOOPMO")->GetStaticField(0x5FF60);
		}

		// static const ::System::Object KHPGPNGPCPG; // 0x0
		// static const ::System::Object FFHIOHIAMJN; // 0x0
		// static const ::System::Object BEEFFGIGMLC; // 0x0
		// static const ::System::Object DIMLEEMFMHJ; // 0x0
		// static const ::System::Object FGEHBGBKMBM; // 0x0
		// static const ::System::Object GAELHLNAHAK; // 0x0
		// static const ::System::Object FBFEAPNPJMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIDLDJOOPMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIDLDJOOPMO*))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIDLDJOOPMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FIDLDJOOPMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIDLDJOOPMO* Clone()
		{
			return ((::FIDLDJOOPMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_CLONE_OFFSET))(this);
		}

		::System::Double APBGOKEOHNF()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_APBGOKEOHNF_OFFSET))(this);
		}

		::System::Void EJIBKKLIKCO(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_EJIBKKLIKCO_OFFSET))(this, a1);
		}

		::System::Double CAPBIMAEKPK()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_CAPBIMAEKPK_OFFSET))(this);
		}

		::System::Void HHPGDOKPCOO(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_HHPGDOKPCOO_OFFSET))(this, a1);
		}

		::System::Double LINGFOCLAIC()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_LINGFOCLAIC_OFFSET))(this);
		}

		::System::Void CBFGMEHPOGB(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_CBFGMEHPOGB_OFFSET))(this, a1);
		}

		::System::Double MHHABONOGGA()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_MHHABONOGGA_OFFSET))(this);
		}

		::System::Void LBNBOHLLCHA(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_LBNBOHLLCHA_OFFSET))(this, a1);
		}

		::System::Double LPOPDJCGPNL()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_LPOPDJCGPNL_OFFSET))(this);
		}

		::System::Void JKABLEKPPKP(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_JKABLEKPPKP_OFFSET))(this, a1);
		}

		::System::Double BDKPJGEBJOP()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_BDKPJGEBJOP_OFFSET))(this);
		}

		::System::Void EAGJINDOOKB(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_EAGJINDOOKB_OFFSET))(this, a1);
		}

		::System::Double AJCGPLHPPLE()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_AJCGPLHPPLE_OFFSET))(this);
		}

		::System::Void ONPJIPGHHMK(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_ONPJIPGHHMK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIDLDJOOPMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIDLDJOOPMO*))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIDLDJOOPMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIDLDJOOPMO*))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIDLDJOOPMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
