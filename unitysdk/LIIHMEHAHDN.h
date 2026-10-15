#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNGIAAHKP;
class LIIHMEHAHDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LIIHMEHAHDN_AIFLNGGOLIK_OFFSET UNITYSDK_OFFSET(0x1E96DFD0)
#define LIIHMEHAHDN_BEADAHNBCDI_OFFSET UNITYSDK_OFFSET(0x1E96DFC0)
#define LIIHMEHAHDN_BNJAOBOAKKJ_OFFSET UNITYSDK_OFFSET(0x1E96DFB0)
#define LIIHMEHAHDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96E410)
#define LIIHMEHAHDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96E850)
#define LIIHMEHAHDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96DF50)
#define LIIHMEHAHDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96DE70)
#define LIIHMEHAHDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96DE10)
#define LIIHMEHAHDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96E010)
#define LIIHMEHAHDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96DFE0)
#define LIIHMEHAHDN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E96DF90)
#define LIIHMEHAHDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96E170)
#define LIIHMEHAHDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96DDD0)
#define LIIHMEHAHDN_LAIJONECJHE_OFFSET UNITYSDK_OFFSET(0x1E96DFA0)
#define LIIHMEHAHDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96E730)
#define LIIHMEHAHDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96E620)
#define LIIHMEHAHDN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E96DF80)
#define LIIHMEHAHDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96DE00)
#define LIIHMEHAHDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96E210)
#define LIIHMEHAHDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96E270)

inline static constexpr unsigned int LIIHMEHAHDN_TypeDefinitionIndex = 28194;

	class LIIHMEHAHDN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* HBCPFBGAKLE; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* BAKMJFEAFLM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 JNBFEPBPFBP; // 0x30
		static ::Google::Protobuf::MessageParser_1<::LIIHMEHAHDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LIIHMEHAHDN*>**)UnitySDK::FromName("", "LIIHMEHAHDN")->GetStaticField(0x45300);
		}

		static ::Google::Protobuf::FieldCodec_1<::ANCNGIAAHKP*>** StaticGet_LPDAFOJIIBK()
		{
			return (::Google::Protobuf::FieldCodec_1<::ANCNGIAAHKP*>**)UnitySDK::FromName("", "LIIHMEHAHDN")->GetStaticField(0x45308);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_NFDGIKACNAN()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)UnitySDK::FromName("", "LIIHMEHAHDN")->GetStaticField(0x45310);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PEBHOADGIJJ; // 0x0
		// static const ::System::Object BDLMLCNCJIE; // 0x0
		// static const ::System::Object CEPJFBBCEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIIHMEHAHDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIIHMEHAHDN*))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIIHMEHAHDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LIIHMEHAHDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LIIHMEHAHDN*>*(*)())((::PBYTE)hIl2Cpp + LIIHMEHAHDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIIHMEHAHDN* Clone()
		{
			return ((::LIIHMEHAHDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Int64 LAIJONECJHE()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_LAIJONECJHE_OFFSET))(this);
		}

		::System::Void BNJAOBOAKKJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_BNJAOBOAKKJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* BEADAHNBCDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_BEADAHNBCDI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* AIFLNGGOLIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_AIFLNGGOLIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIIHMEHAHDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIIHMEHAHDN*))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIIHMEHAHDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIIHMEHAHDN*))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIIHMEHAHDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
