#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDCBNMFDICO.h"
#include "unitysdk/System/Object.h"
class IJNFOHJGPBC;
class ODNBCBEINNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJNFOHJGPBC_AEDKFDKMPMA_OFFSET UNITYSDK_OFFSET(0x1E698890)
#define IJNFOHJGPBC_BNBMOACDNBI_OFFSET UNITYSDK_OFFSET(0x1E6988D0)
#define IJNFOHJGPBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E698D10)
#define IJNFOHJGPBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6991B0)
#define IJNFOHJGPBC_CIEEPJAFJGN_OFFSET UNITYSDK_OFFSET(0x1E6988B0)
#define IJNFOHJGPBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E698860)
#define IJNFOHJGPBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6987C0)
#define IJNFOHJGPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E698780)
#define IJNFOHJGPBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E698950)
#define IJNFOHJGPBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E698920)
#define IJNFOHJGPBC_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E698910)
#define IJNFOHJGPBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6989F0)
#define IJNFOHJGPBC_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E698900)
#define IJNFOHJGPBC_JBGPOIBGNNF_OFFSET UNITYSDK_OFFSET(0x1E6988F0)
#define IJNFOHJGPBC_JEMPMDAKBFK_OFFSET UNITYSDK_OFFSET(0x1E6988E0)
#define IJNFOHJGPBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E698740)
#define IJNFOHJGPBC_LCCLHFMNCPB_OFFSET UNITYSDK_OFFSET(0x1E6988C0)
#define IJNFOHJGPBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6990B0)
#define IJNFOHJGPBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E698FE0)
#define IJNFOHJGPBC_NIJLCPMOJGB_OFFSET UNITYSDK_OFFSET(0x1E6988A0)
#define IJNFOHJGPBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E698770)
#define IJNFOHJGPBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E698A70)
#define IJNFOHJGPBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E698AD0)

inline static constexpr unsigned int IJNFOHJGPBC_TypeDefinitionIndex = 33653;

	class IJNFOHJGPBC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>* OADCIMIIECH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EGFOJLHABKM; // 0x20
		::IDCBNMFDICO AFHHMCKLLAJ; // 0x24
		::System::UInt32 KJOJMMLKHOI; // 0x28
		::System::UInt32 KIGPFABODMI; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_CKNKACNLOGG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IJNFOHJGPBC")->GetStaticField(0x32290);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IJNFOHJGPBC")->GetStaticField(0x32298);
		}

		// static const ::System::Object LDJBMMDBHEC; // 0x0
		// static const ::System::Object HFHBNCLBBCA; // 0x0
		// static const ::System::Object MJIHCGNDOAN; // 0x0
		// static const ::System::Object EMJHHCEKLJM; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJNFOHJGPBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJNFOHJGPBC*))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJNFOHJGPBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IJNFOHJGPBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJNFOHJGPBC* Clone()
		{
			return ((::IJNFOHJGPBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>* AEDKFDKMPMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_AEDKFDKMPMA_OFFSET))(this);
		}

		::System::UInt32 NIJLCPMOJGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_NIJLCPMOJGB_OFFSET))(this);
		}

		::System::Void CIEEPJAFJGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_CIEEPJAFJGN_OFFSET))(this, a1);
		}

		::System::UInt32 LCCLHFMNCPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_LCCLHFMNCPB_OFFSET))(this);
		}

		::System::Void BNBMOACDNBI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_BNBMOACDNBI_OFFSET))(this, a1);
		}

		::System::UInt32 JEMPMDAKBFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_JEMPMDAKBFK_OFFSET))(this);
		}

		::System::Void JBGPOIBGNNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_JBGPOIBGNNF_OFFSET))(this, a1);
		}

		::IDCBNMFDICO JBENBABCOGB()
		{
			return ((::IDCBNMFDICO(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::IDCBNMFDICO a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCBNMFDICO))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJNFOHJGPBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJNFOHJGPBC*))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJNFOHJGPBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJNFOHJGPBC*))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
