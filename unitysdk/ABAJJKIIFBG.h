#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABAJJKIIFBG;
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

#define ABAJJKIIFBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC6760)
#define ABAJJKIIFBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC6A70)
#define ABAJJKIIFBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC6110)
#define ABAJJKIIFBG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1DDC6140)
#define ABAJJKIIFBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC6040)
#define ABAJJKIIFBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC5FF0)
#define ABAJJKIIFBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC62B0)
#define ABAJJKIIFBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC6190)
#define ABAJJKIIFBG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDC6180)
#define ABAJJKIIFBG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1DDC6150)
#define ABAJJKIIFBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC6460)
#define ABAJJKIIFBG_JHJPFEALDEM_OFFSET UNITYSDK_OFFSET(0x1DDC6160)
#define ABAJJKIIFBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC5FB0)
#define ABAJJKIIFBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC6950)
#define ABAJJKIIFBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC68A0)
#define ABAJJKIIFBG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDC6170)
#define ABAJJKIIFBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC5FE0)
#define ABAJJKIIFBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC65D0)
#define ABAJJKIIFBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC6630)

inline static constexpr unsigned int ABAJJKIIFBG_TypeDefinitionIndex = 33211;

	class ABAJJKIIFBG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDGCJNGIGBM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::ABAJJKIIFBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABAJJKIIFBG*>**)UnitySDK::FromName("", "ABAJJKIIFBG")->GetStaticField(0x38440);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JBKKGACFOBJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ABAJJKIIFBG")->GetStaticField(0x38448);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object OFBPJJCHMID; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABAJJKIIFBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABAJJKIIFBG*))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABAJJKIIFBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABAJJKIIFBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABAJJKIIFBG*>*(*)())((::PBYTE)hIl2Cpp + ABAJJKIIFBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABAJJKIIFBG* Clone()
		{
			return ((::ABAJJKIIFBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHJPFEALDEM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_JHJPFEALDEM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABAJJKIIFBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABAJJKIIFBG*))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABAJJKIIFBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABAJJKIIFBG*))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABAJJKIIFBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
