#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIGOHHNDDCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DIGOHHNDDCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BE210)
#define DIGOHHNDDCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE5B0)
#define DIGOHHNDDCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BDB30)
#define DIGOHHNDDCA_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E1BDB90)
#define DIGOHHNDDCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BDA60)
#define DIGOHHNDDCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BDA10)
#define DIGOHHNDDCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BDD00)
#define DIGOHHNDDCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BDBD0)
#define DIGOHHNDDCA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1BDBC0)
#define DIGOHHNDDCA_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E1BDBA0)
#define DIGOHHNDDCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BDEC0)
#define DIGOHHNDDCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BD9D0)
#define DIGOHHNDDCA_KPAOANINGGP_OFFSET UNITYSDK_OFFSET(0x1E1BDB80)
#define DIGOHHNDDCA_LLLKIBABDHE_OFFSET UNITYSDK_OFFSET(0x1E1BDB70)
#define DIGOHHNDDCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BE470)
#define DIGOHHNDDCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BE3B0)
#define DIGOHHNDDCA_NFEOGMFBPIB_OFFSET UNITYSDK_OFFSET(0x1E1BDB60)
#define DIGOHHNDDCA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1BDBB0)
#define DIGOHHNDDCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BDA00)
#define DIGOHHNDDCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BE020)
#define DIGOHHNDDCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BE080)

inline static constexpr unsigned int DIGOHHNDDCA_TypeDefinitionIndex = 33472;

	class DIGOHHNDDCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EOGMBDKJJFG; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 FPCPDAGACHN; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIGOHHNDDCA")->GetStaticField(0x36210);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PAKMLKAPDIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DIGOHHNDDCA")->GetStaticField(0x36218);
		}

		// static const ::System::Object GMGMGFBKBPD; // 0x0
		// static const ::System::Object BMLNCLDFFOJ; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIGOHHNDDCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIGOHHNDDCA*))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGOHHNDDCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIGOHHNDDCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIGOHHNDDCA* Clone()
		{
			return ((::DIGOHHNDDCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_CLONE_OFFSET))(this);
		}

		::System::UInt32 NFEOGMFBPIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_NFEOGMFBPIB_OFFSET))(this);
		}

		::System::Void LLLKIBABDHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_LLLKIBABDHE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPAOANINGGP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_KPAOANINGGP_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIGOHHNDDCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIGOHHNDDCA*))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIGOHHNDDCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIGOHHNDDCA*))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIGOHHNDDCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
