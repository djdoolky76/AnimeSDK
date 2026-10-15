#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGAMADCNPAG;
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

#define MGAMADCNPAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA1BE80)
#define MGAMADCNPAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA1C210)
#define MGAMADCNPAG_CLEMJMBEKKG_OFFSET UNITYSDK_OFFSET(0x1EA1B840)
#define MGAMADCNPAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA1B7C0)
#define MGAMADCNPAG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EA1B7F0)
#define MGAMADCNPAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA1B690)
#define MGAMADCNPAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1B600)
#define MGAMADCNPAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA1B880)
#define MGAMADCNPAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA1B850)
#define MGAMADCNPAG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA1B820)
#define MGAMADCNPAG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EA1B800)
#define MGAMADCNPAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA1BA60)
#define MGAMADCNPAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA1B5C0)
#define MGAMADCNPAG_KPPBHFJPLIA_OFFSET UNITYSDK_OFFSET(0x1EA1B830)
#define MGAMADCNPAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA1C090)
#define MGAMADCNPAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA1BFD0)
#define MGAMADCNPAG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA1B810)
#define MGAMADCNPAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA1B5F0)
#define MGAMADCNPAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA1BCA0)
#define MGAMADCNPAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA1BD00)

	class MGAMADCNPAG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBDBLOPKBJK; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DALNGIGLKJJ; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_DOHDOCNDLDO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MGAMADCNPAG")->GetStaticField(0x4CA60);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GLKHLBDHAPM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MGAMADCNPAG")->GetStaticField(0x4CA68);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MGAMADCNPAG")->GetStaticField(0x4CA70);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ODJIJFJCHHB; // 0x0
		// static const ::System::Object KMNJMGMLHMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGAMADCNPAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGAMADCNPAG*))((::PBYTE)hIl2Cpp + MGAMADCNPAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGAMADCNPAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MGAMADCNPAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGAMADCNPAG* Clone()
		{
			return ((::MGAMADCNPAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + MGAMADCNPAG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGAMADCNPAG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPPBHFJPLIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_KPPBHFJPLIA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLEMJMBEKKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_CLEMJMBEKKG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGAMADCNPAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGAMADCNPAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGAMADCNPAG*))((::PBYTE)hIl2Cpp + MGAMADCNPAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGAMADCNPAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAMADCNPAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGAMADCNPAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGAMADCNPAG*))((::PBYTE)hIl2Cpp + MGAMADCNPAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGAMADCNPAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
