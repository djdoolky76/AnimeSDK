#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDCBNMFDICO.h"
#include "unitysdk/System/Object.h"
class IJNFOHJGPBC;
class ODNBCBEINNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJNFOHJGPBC_AEDKFDKMPMA_OFFSET UNITYSDK_OFFSET(0x1F99E550)
#define IJNFOHJGPBC_BNBMOACDNBI_OFFSET UNITYSDK_OFFSET(0x1F99E5B0)
#define IJNFOHJGPBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F99E9C0)
#define IJNFOHJGPBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99EE60)
#define IJNFOHJGPBC_CIEEPJAFJGN_OFFSET UNITYSDK_OFFSET(0x1F99E590)
#define IJNFOHJGPBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F99E520)
#define IJNFOHJGPBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F99E480)
#define IJNFOHJGPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F99E440)
#define IJNFOHJGPBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F99E610)
#define IJNFOHJGPBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F99E5E0)
#define IJNFOHJGPBC_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1F99E570)
#define IJNFOHJGPBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F99E6B0)
#define IJNFOHJGPBC_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1F99E560)
#define IJNFOHJGPBC_JBGPOIBGNNF_OFFSET UNITYSDK_OFFSET(0x1F99E5D0)
#define IJNFOHJGPBC_JEMPMDAKBFK_OFFSET UNITYSDK_OFFSET(0x1F99E5C0)
#define IJNFOHJGPBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F99E400)
#define IJNFOHJGPBC_LCCLHFMNCPB_OFFSET UNITYSDK_OFFSET(0x1F99E5A0)
#define IJNFOHJGPBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F99ED60)
#define IJNFOHJGPBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F99EC90)
#define IJNFOHJGPBC_NIJLCPMOJGB_OFFSET UNITYSDK_OFFSET(0x1F99E580)
#define IJNFOHJGPBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F99E430)
#define IJNFOHJGPBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F99E730)
#define IJNFOHJGPBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F99E790)

inline static constexpr unsigned int IJNFOHJGPBC_TypeDefinitionIndex = 34568;

	class IJNFOHJGPBC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ODNBCBEINNC*>* OADCIMIIECH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::IDCBNMFDICO AFHHMCKLLAJ; // 0x20
		::System::UInt32 EGFOJLHABKM; // 0x24
		::System::UInt32 KJOJMMLKHOI; // 0x28
		::System::UInt32 KIGPFABODMI; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::ODNBCBEINNC*>** StaticGet_CKNKACNLOGG()
		{
			return (::Google::Protobuf::FieldCodec_1<::ODNBCBEINNC*>**)UnitySDK::FromName("", "IJNFOHJGPBC")->GetStaticField(0x27400);
		}

		static ::Google::Protobuf::MessageParser_1<::IJNFOHJGPBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJNFOHJGPBC*>**)UnitySDK::FromName("", "IJNFOHJGPBC")->GetStaticField(0x27408);
		}

		// static const ::System::Object LDJBMMDBHEC; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object HFHBNCLBBCA; // 0x0
		// static const ::System::Object MJIHCGNDOAN; // 0x0
		// static const ::System::Object EMJHHCEKLJM; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::IJNFOHJGPBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJNFOHJGPBC*>*(*)())((::PBYTE)hIl2Cpp + IJNFOHJGPBC_JJGHOBBFNJD_OFFSET))();
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

		::IDCBNMFDICO JBENBABCOGB()
		{
			return ((::IDCBNMFDICO(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::IDCBNMFDICO a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCBNMFDICO))((::PBYTE)hIl2Cpp + IJNFOHJGPBC_GAIKIHDIOBM_OFFSET))(this, a1);
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
