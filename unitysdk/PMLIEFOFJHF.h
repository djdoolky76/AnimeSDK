#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBONOPFLPDJ;
class PMLIEFOFJHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMLIEFOFJHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201F8EA0)
#define PMLIEFOFJHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x201F91C0)
#define PMLIEFOFJHF_CLONE_OFFSET UNITYSDK_OFFSET(0x201F89D0)
#define PMLIEFOFJHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201F88D0)
#define PMLIEFOFJHF_CTOR_OFFSET UNITYSDK_OFFSET(0x201F8850)
#define PMLIEFOFJHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201F8A70)
#define PMLIEFOFJHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x201F8A40)
#define PMLIEFOFJHF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x201F8A10)
#define PMLIEFOFJHF_FLCPLNMOGJE_OFFSET UNITYSDK_OFFSET(0x201F8A20)
#define PMLIEFOFJHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201F8BC0)
#define PMLIEFOFJHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201F8810)
#define PMLIEFOFJHF_JJOGNOBHPPK_OFFSET UNITYSDK_OFFSET(0x201F8A30)
#define PMLIEFOFJHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201F9090)
#define PMLIEFOFJHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201F8FD0)
#define PMLIEFOFJHF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x201F8A00)
#define PMLIEFOFJHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201F8840)
#define PMLIEFOFJHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201F8D00)
#define PMLIEFOFJHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x201F8D60)

inline static constexpr unsigned int PMLIEFOFJHF_TypeDefinitionIndex = 33307;

	class PMLIEFOFJHF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KBONOPFLPDJ*>* CNFDODHHKAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HJFJBCADHHB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PMLIEFOFJHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMLIEFOFJHF*>**)UnitySDK::FromName("", "PMLIEFOFJHF")->GetStaticField(0x495C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KJMMLMPKFCI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PMLIEFOFJHF")->GetStaticField(0x495C8);
		}

		static ::Google::Protobuf::FieldCodec_1<::KBONOPFLPDJ*>** StaticGet_CBGCJPOAODD()
		{
			return (::Google::Protobuf::FieldCodec_1<::KBONOPFLPDJ*>**)UnitySDK::FromName("", "PMLIEFOFJHF")->GetStaticField(0x495D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JCIJLBHDJHF; // 0x0
		// static const ::System::Object PHPDLBLPFAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMLIEFOFJHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMLIEFOFJHF*))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMLIEFOFJHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMLIEFOFJHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMLIEFOFJHF*>*(*)())((::PBYTE)hIl2Cpp + PMLIEFOFJHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMLIEFOFJHF* Clone()
		{
			return ((::PMLIEFOFJHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLCPLNMOGJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_FLCPLNMOGJE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KBONOPFLPDJ*>* JJOGNOBHPPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KBONOPFLPDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_JJOGNOBHPPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMLIEFOFJHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMLIEFOFJHF*))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMLIEFOFJHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMLIEFOFJHF*))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMLIEFOFJHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
