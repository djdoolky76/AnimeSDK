#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGNAEPIJDNC.h"
#include "unitysdk/System/Object.h"
class FODHGNLPBKH;
class GPEPGKCPBPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPEPGKCPBPB_AEDKFDKMPMA_OFFSET UNITYSDK_OFFSET(0x1E4F8490)
#define GPEPGKCPBPB_BNBMOACDNBI_OFFSET UNITYSDK_OFFSET(0x1E4F8440)
#define GPEPGKCPBPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F88C0)
#define GPEPGKCPBPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F8D70)
#define GPEPGKCPBPB_CIEEPJAFJGN_OFFSET UNITYSDK_OFFSET(0x1E4F8460)
#define GPEPGKCPBPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F83C0)
#define GPEPGKCPBPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F8300)
#define GPEPGKCPBPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F82B0)
#define GPEPGKCPBPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F8500)
#define GPEPGKCPBPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F84A0)
#define GPEPGKCPBPB_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E4F8420)
#define GPEPGKCPBPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F85A0)
#define GPEPGKCPBPB_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E4F8410)
#define GPEPGKCPBPB_JBGPOIBGNNF_OFFSET UNITYSDK_OFFSET(0x1E4F8480)
#define GPEPGKCPBPB_JEMPMDAKBFK_OFFSET UNITYSDK_OFFSET(0x1E4F8470)
#define GPEPGKCPBPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F8240)
#define GPEPGKCPBPB_LCCLHFMNCPB_OFFSET UNITYSDK_OFFSET(0x1E4F8430)
#define GPEPGKCPBPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F8C50)
#define GPEPGKCPBPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F8B80)
#define GPEPGKCPBPB_NIJLCPMOJGB_OFFSET UNITYSDK_OFFSET(0x1E4F8450)
#define GPEPGKCPBPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F82A0)
#define GPEPGKCPBPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F8630)
#define GPEPGKCPBPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F8690)

	class GPEPGKCPBPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FODHGNLPBKH*>* OADCIMIIECH; // 0x18
		::System::UInt32 KIGPFABODMI; // 0x20
		::System::UInt32 EGFOJLHABKM; // 0x24
		::JGNAEPIJDNC AFHHMCKLLAJ; // 0x28
		::System::UInt32 KJOJMMLKHOI; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_CKNKACNLOGG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GPEPGKCPBPB")->GetStaticField(0x11940);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GPEPGKCPBPB")->GetStaticField(0x11948);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object MJIHCGNDOAN; // 0x0
		// static const ::System::Object HFHBNCLBBCA; // 0x0
		// static const ::System::Object EMJHHCEKLJM; // 0x0
		// static const ::System::Object LDJBMMDBHEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPEPGKCPBPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPEPGKCPBPB*))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPEPGKCPBPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GPEPGKCPBPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPEPGKCPBPB* Clone()
		{
			return ((::GPEPGKCPBPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_CLONE_OFFSET))(this);
		}

		::JGNAEPIJDNC JBENBABCOGB()
		{
			return ((::JGNAEPIJDNC(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::JGNAEPIJDNC a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGNAEPIJDNC))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 LCCLHFMNCPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_LCCLHFMNCPB_OFFSET))(this);
		}

		::System::Void BNBMOACDNBI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_BNBMOACDNBI_OFFSET))(this, a1);
		}

		::System::UInt32 NIJLCPMOJGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_NIJLCPMOJGB_OFFSET))(this);
		}

		::System::Void CIEEPJAFJGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_CIEEPJAFJGN_OFFSET))(this, a1);
		}

		::System::UInt32 JEMPMDAKBFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_JEMPMDAKBFK_OFFSET))(this);
		}

		::System::Void JBGPOIBGNNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_JBGPOIBGNNF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FODHGNLPBKH*>* AEDKFDKMPMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FODHGNLPBKH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_AEDKFDKMPMA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPEPGKCPBPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPEPGKCPBPB*))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPEPGKCPBPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPEPGKCPBPB*))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPEPGKCPBPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
