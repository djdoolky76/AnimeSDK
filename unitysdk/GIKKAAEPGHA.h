#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANPNPAOHJGA;
class GIKKAAEPGHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIKKAAEPGHA_BDPIAOHKOAL_OFFSET UNITYSDK_OFFSET(0x1E470450)
#define GIKKAAEPGHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E470A00)
#define GIKKAAEPGHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E470DB0)
#define GIKKAAEPGHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4703A0)
#define GIKKAAEPGHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4702A0)
#define GIKKAAEPGHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E470250)
#define GIKKAAEPGHA_EEBBDKKABGG_OFFSET UNITYSDK_OFFSET(0x1E470440)
#define GIKKAAEPGHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E470490)
#define GIKKAAEPGHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E470460)
#define GIKKAAEPGHA_GAIPDBEGHKP_OFFSET UNITYSDK_OFFSET(0x1E470430)
#define GIKKAAEPGHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E470660)
#define GIKKAAEPGHA_GHKOILNIMHL_OFFSET UNITYSDK_OFFSET(0x1E4703F0)
#define GIKKAAEPGHA_HKAABMHFLLE_OFFSET UNITYSDK_OFFSET(0x1E470410)
#define GIKKAAEPGHA_JBINBOJDMPC_OFFSET UNITYSDK_OFFSET(0x1E4703E0)
#define GIKKAAEPGHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E470210)
#define GIKKAAEPGHA_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E4703D0)
#define GIKKAAEPGHA_MEKALIJOHOK_OFFSET UNITYSDK_OFFSET(0x1E470400)
#define GIKKAAEPGHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E470C50)
#define GIKKAAEPGHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E470B60)
#define GIKKAAEPGHA_MIFBFDLOCDO_OFFSET UNITYSDK_OFFSET(0x1E470420)
#define GIKKAAEPGHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E470240)
#define GIKKAAEPGHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E470780)
#define GIKKAAEPGHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4707E0)

inline static constexpr unsigned int GIKKAAEPGHA_TypeDefinitionIndex = 26874;

	class GIKKAAEPGHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ANPNPAOHJGA* ECFKGDHKJPC; // 0x18
		::ANPNPAOHJGA* JHEGGLKHGIL; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x28
		::System::UInt32 JALGJGBEMFA; // 0x30
		::System::Boolean NNPEEFBPADN; // 0x34
		static ::Google::Protobuf::MessageParser_1<::GIKKAAEPGHA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIKKAAEPGHA*>**)UnitySDK::FromName("", "GIKKAAEPGHA")->GetStaticField(0x19190);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GIKKAAEPGHA")->GetStaticField(0x19198);
		}

		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object KEHMDOBGHDK; // 0x0
		// static const ::System::Object FIDOPNMNFAI; // 0x0
		// static const ::System::Object CNCIHLBFNFF; // 0x0
		// static const ::System::Object HECOPIIOGFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIKKAAEPGHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIKKAAEPGHA*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIKKAAEPGHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIKKAAEPGHA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIKKAAEPGHA*>*(*)())((::PBYTE)hIl2Cpp + GIKKAAEPGHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIKKAAEPGHA* Clone()
		{
			return ((::GIKKAAEPGHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_KHINOGAEHBI_OFFSET))(this);
		}

		::System::UInt32 JBINBOJDMPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_JBINBOJDMPC_OFFSET))(this);
		}

		::System::Void GHKOILNIMHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_GHKOILNIMHL_OFFSET))(this, a1);
		}

		::ANPNPAOHJGA* MEKALIJOHOK()
		{
			return ((::ANPNPAOHJGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_MEKALIJOHOK_OFFSET))(this);
		}

		::System::Void HKAABMHFLLE(::ANPNPAOHJGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANPNPAOHJGA*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_HKAABMHFLLE_OFFSET))(this, a1);
		}

		::ANPNPAOHJGA* MIFBFDLOCDO()
		{
			return ((::ANPNPAOHJGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_MIFBFDLOCDO_OFFSET))(this);
		}

		::System::Void GAIPDBEGHKP(::ANPNPAOHJGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANPNPAOHJGA*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_GAIPDBEGHKP_OFFSET))(this, a1);
		}

		::System::Boolean EEBBDKKABGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_EEBBDKKABGG_OFFSET))(this);
		}

		::System::Void BDPIAOHKOAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_BDPIAOHKOAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIKKAAEPGHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIKKAAEPGHA*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIKKAAEPGHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIKKAAEPGHA*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIKKAAEPGHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
