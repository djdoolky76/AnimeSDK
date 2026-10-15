#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAODLPJMEFE;
class NOHKADAPKHE;
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

#define NOHKADAPKHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB5D900)
#define NOHKADAPKHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5DD70)
#define NOHKADAPKHE_CIINPAGCGFD_OFFSET UNITYSDK_OFFSET(0x1EB5D430)
#define NOHKADAPKHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB5D3C0)
#define NOHKADAPKHE_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EB5D410)
#define NOHKADAPKHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB5D2C0)
#define NOHKADAPKHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5D270)
#define NOHKADAPKHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB5D470)
#define NOHKADAPKHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB5D440)
#define NOHKADAPKHE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB5D400)
#define NOHKADAPKHE_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EB5D420)
#define NOHKADAPKHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB5D650)
#define NOHKADAPKHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB5D230)
#define NOHKADAPKHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB5DB40)
#define NOHKADAPKHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB5DA40)
#define NOHKADAPKHE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB5D3F0)
#define NOHKADAPKHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB5D260)
#define NOHKADAPKHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB5D730)
#define NOHKADAPKHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB5D790)

inline static constexpr unsigned int NOHKADAPKHE_TypeDefinitionIndex = 30059;

	class NOHKADAPKHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KAODLPJMEFE*>* MGNMGOKNKHB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::KAODLPJMEFE*>** StaticGet_DCBLHKDPAOP()
		{
			return (::Google::Protobuf::FieldCodec_1<::KAODLPJMEFE*>**)UnitySDK::FromName("", "NOHKADAPKHE")->GetStaticField(0xB250);
		}

		static ::Google::Protobuf::MessageParser_1<::NOHKADAPKHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOHKADAPKHE*>**)UnitySDK::FromName("", "NOHKADAPKHE")->GetStaticField(0xB258);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object DEENBNDCNGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOHKADAPKHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOHKADAPKHE*))((::PBYTE)hIl2Cpp + NOHKADAPKHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHKADAPKHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOHKADAPKHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOHKADAPKHE*>*(*)())((::PBYTE)hIl2Cpp + NOHKADAPKHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOHKADAPKHE* Clone()
		{
			return ((::NOHKADAPKHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOHKADAPKHE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + NOHKADAPKHE_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KAODLPJMEFE*>* CIINPAGCGFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KAODLPJMEFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_CIINPAGCGFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOHKADAPKHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOHKADAPKHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOHKADAPKHE*))((::PBYTE)hIl2Cpp + NOHKADAPKHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOHKADAPKHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOHKADAPKHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOHKADAPKHE*))((::PBYTE)hIl2Cpp + NOHKADAPKHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOHKADAPKHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
