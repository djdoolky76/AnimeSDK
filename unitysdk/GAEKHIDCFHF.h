#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAEKHIDCFHF;
class NDLNIKCCALK;
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

#define GAEKHIDCFHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3ED890)
#define GAEKHIDCFHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EDD40)
#define GAEKHIDCFHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3ED200)
#define GAEKHIDCFHF_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E3ED240)
#define GAEKHIDCFHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3ED0F0)
#define GAEKHIDCFHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED0A0)
#define GAEKHIDCFHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3ED2D0)
#define GAEKHIDCFHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3ED2A0)
#define GAEKHIDCFHF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3ED270)
#define GAEKHIDCFHF_FAPHJILDPNE_OFFSET UNITYSDK_OFFSET(0x1E3ED230)
#define GAEKHIDCFHF_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E3ED250)
#define GAEKHIDCFHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3ED530)
#define GAEKHIDCFHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3ED060)
#define GAEKHIDCFHF_JOPHMKPKAEB_OFFSET UNITYSDK_OFFSET(0x1E3ED280)
#define GAEKHIDCFHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3EDB90)
#define GAEKHIDCFHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3ED9E0)
#define GAEKHIDCFHF_MHBFKCBOCEP_OFFSET UNITYSDK_OFFSET(0x1E3ED290)
#define GAEKHIDCFHF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3ED260)
#define GAEKHIDCFHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED090)
#define GAEKHIDCFHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3ED6A0)
#define GAEKHIDCFHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3ED700)

inline static constexpr unsigned int GAEKHIDCFHF_TypeDefinitionIndex = 29684;

	class GAEKHIDCFHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LNCPGCKNOGO; // 0x20
		::NDLNIKCCALK* ALANALGBFMC; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::GAEKHIDCFHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAEKHIDCFHF*>**)UnitySDK::FromName("", "GAEKHIDCFHF")->GetStaticField(0x2910);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKIJBOAFFJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GAEKHIDCFHF")->GetStaticField(0x2918);
		}

		// static const ::System::Object BCFAFNEADEN; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AJBHFMMPIBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAEKHIDCFHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAEKHIDCFHF*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAEKHIDCFHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAEKHIDCFHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAEKHIDCFHF*>*(*)())((::PBYTE)hIl2Cpp + GAEKHIDCFHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAEKHIDCFHF* Clone()
		{
			return ((::GAEKHIDCFHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAPHJILDPNE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_FAPHJILDPNE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NDLNIKCCALK* JOPHMKPKAEB()
		{
			return ((::NDLNIKCCALK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_JOPHMKPKAEB_OFFSET))(this);
		}

		::System::Void MHBFKCBOCEP(::NDLNIKCCALK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLNIKCCALK*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_MHBFKCBOCEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAEKHIDCFHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAEKHIDCFHF*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAEKHIDCFHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAEKHIDCFHF*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAEKHIDCFHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
