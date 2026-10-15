#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMCJFJEBBCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMCJFJEBBCO_APIHNLJFEPG_OFFSET UNITYSDK_OFFSET(0x1E100010)
#define CMCJFJEBBCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E100550)
#define CMCJFJEBBCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E100980)
#define CMCJFJEBBCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FFF50)
#define CMCJFJEBBCO_CODCEGCHDAJ_OFFSET UNITYSDK_OFFSET(0x1E0FFFC0)
#define CMCJFJEBBCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FFF00)
#define CMCJFJEBBCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FFEF0)
#define CMCJFJEBBCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E100120)
#define CMCJFJEBBCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E100090)
#define CMCJFJEBBCO_FFNGOCKLCKJ_OFFSET UNITYSDK_OFFSET(0x1E100030)
#define CMCJFJEBBCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1001A0)
#define CMCJFJEBBCO_HOEFCOCPLNM_OFFSET UNITYSDK_OFFSET(0x1E100040)
#define CMCJFJEBBCO_ICMODFJGJAK_OFFSET UNITYSDK_OFFSET(0x1E100080)
#define CMCJFJEBBCO_JCDPBDGALGN_OFFSET UNITYSDK_OFFSET(0x1E100020)
#define CMCJFJEBBCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FFEB0)
#define CMCJFJEBBCO_KOPEPBCOLKC_OFFSET UNITYSDK_OFFSET(0x1E0FFFB0)
#define CMCJFJEBBCO_LPPGNFFBJOI_OFFSET UNITYSDK_OFFSET(0x1E100050)
#define CMCJFJEBBCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E100890)
#define CMCJFJEBBCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E100820)
#define CMCJFJEBBCO_NDNEBPBAFII_OFFSET UNITYSDK_OFFSET(0x1E100070)
#define CMCJFJEBBCO_ODBINHACPID_OFFSET UNITYSDK_OFFSET(0x1E100060)
#define CMCJFJEBBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FFEE0)
#define CMCJFJEBBCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E100280)
#define CMCJFJEBBCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1002E0)

inline static constexpr unsigned int CMCJFJEBBCO_TypeDefinitionIndex = 25325;

	class CMCJFJEBBCO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* PKBMCFMGEJH; // 0x18
		::System::Int32 LBAFAALNEHB; // 0x20
		::System::Int32 LOFKMBPIECD; // 0x24
		::System::Int32 OEGPNECLKLB; // 0x28
		::System::Int32 OMLJJNIECNE; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::CMCJFJEBBCO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CMCJFJEBBCO*>**)UnitySDK::FromName("", "CMCJFJEBBCO")->GetStaticField(0x1DD90);
		}

		// static const ::System::Object JOOGDILJMMB; // 0x0
		// static const ::System::Object NLPFBHMGJMK; // 0x0
		// static const ::System::Object KMFCFIHELJJ; // 0x0
		// static const ::System::Object MCLPJAODHLO; // 0x0
		// static const ::System::Object HMIBCMDNGDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMCJFJEBBCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMCJFJEBBCO*))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMCJFJEBBCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CMCJFJEBBCO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CMCJFJEBBCO*>*(*)())((::PBYTE)hIl2Cpp + CMCJFJEBBCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMCJFJEBBCO* Clone()
		{
			return ((::CMCJFJEBBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_CLONE_OFFSET))(this);
		}

		::System::String* KOPEPBCOLKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_KOPEPBCOLKC_OFFSET))(this);
		}

		::System::Void CODCEGCHDAJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_CODCEGCHDAJ_OFFSET))(this, a1);
		}

		::System::Int32 APIHNLJFEPG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_APIHNLJFEPG_OFFSET))(this);
		}

		::System::Void JCDPBDGALGN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_JCDPBDGALGN_OFFSET))(this, a1);
		}

		::System::Int32 FFNGOCKLCKJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_FFNGOCKLCKJ_OFFSET))(this);
		}

		::System::Void HOEFCOCPLNM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_HOEFCOCPLNM_OFFSET))(this, a1);
		}

		::System::Int32 LPPGNFFBJOI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_LPPGNFFBJOI_OFFSET))(this);
		}

		::System::Void ODBINHACPID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_ODBINHACPID_OFFSET))(this, a1);
		}

		::System::Int32 NDNEBPBAFII()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_NDNEBPBAFII_OFFSET))(this);
		}

		::System::Void ICMODFJGJAK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_ICMODFJGJAK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMCJFJEBBCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMCJFJEBBCO*))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMCJFJEBBCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMCJFJEBBCO*))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMCJFJEBBCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
