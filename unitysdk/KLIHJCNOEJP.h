#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLIHJCNOEJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLIHJCNOEJP_BNGPEFLDIJG_OFFSET UNITYSDK_OFFSET(0x1E85EA50)
#define KLIHJCNOEJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E85EF60)
#define KLIHJCNOEJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85F390)
#define KLIHJCNOEJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E85E9C0)
#define KLIHJCNOEJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E85E930)
#define KLIHJCNOEJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85E8E0)
#define KLIHJCNOEJP_DGBFGPCFPPN_OFFSET UNITYSDK_OFFSET(0x1E85EA20)
#define KLIHJCNOEJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E85EB50)
#define KLIHJCNOEJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E85EAA0)
#define KLIHJCNOEJP_GADMMIHPIIO_OFFSET UNITYSDK_OFFSET(0x1E85EA30)
#define KLIHJCNOEJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E85EBD0)
#define KLIHJCNOEJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E85E870)
#define KLIHJCNOEJP_JPFDJKBACCC_OFFSET UNITYSDK_OFFSET(0x1E85EA90)
#define KLIHJCNOEJP_KEEPCFKIODB_OFFSET UNITYSDK_OFFSET(0x1E85EA10)
#define KLIHJCNOEJP_MAEOEFHFLLA_OFFSET UNITYSDK_OFFSET(0x1E85EA60)
#define KLIHJCNOEJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E85F260)
#define KLIHJCNOEJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E85F1F0)
#define KLIHJCNOEJP_NMHMOPOBMJH_OFFSET UNITYSDK_OFFSET(0x1E85EA40)
#define KLIHJCNOEJP_NNCEOHIDPGG_OFFSET UNITYSDK_OFFSET(0x1E85EA80)
#define KLIHJCNOEJP_OMIEIJKJLOJ_OFFSET UNITYSDK_OFFSET(0x1E85EA70)
#define KLIHJCNOEJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E85E8D0)
#define KLIHJCNOEJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E85ECE0)
#define KLIHJCNOEJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E85ED40)

inline static constexpr unsigned int KLIHJCNOEJP_TypeDefinitionIndex = 29318;

	class KLIHJCNOEJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AKJFPAEACGO; // 0x18
		::System::UInt32 HPHOICIHPKO; // 0x20
		::System::UInt32 BBMFHHGBMFO; // 0x24
		::System::UInt32 OMDOBBBCOBN; // 0x28
		::System::UInt32 FOFBDKCMGOG; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::KLIHJCNOEJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLIHJCNOEJP*>**)UnitySDK::FromName("", "KLIHJCNOEJP")->GetStaticField(0x1D9A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EDFELCOJBGC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KLIHJCNOEJP")->GetStaticField(0x1D9A8);
		}

		// static const ::System::Object MHKBKMPAAIE; // 0x0
		// static const ::System::Object BOHGJDMHMDO; // 0x0
		// static const ::System::Object PCCPNBOELHB; // 0x0
		// static const ::System::Object DEJBANICHDF; // 0x0
		// static const ::System::Object NDKFHBJHGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLIHJCNOEJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIHJCNOEJP*))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLIHJCNOEJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLIHJCNOEJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLIHJCNOEJP*>*(*)())((::PBYTE)hIl2Cpp + KLIHJCNOEJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLIHJCNOEJP* Clone()
		{
			return ((::KLIHJCNOEJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEEPCFKIODB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_KEEPCFKIODB_OFFSET))(this);
		}

		::System::UInt32 DGBFGPCFPPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_DGBFGPCFPPN_OFFSET))(this);
		}

		::System::Void GADMMIHPIIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_GADMMIHPIIO_OFFSET))(this, a1);
		}

		::System::UInt32 NMHMOPOBMJH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_NMHMOPOBMJH_OFFSET))(this);
		}

		::System::Void BNGPEFLDIJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_BNGPEFLDIJG_OFFSET))(this, a1);
		}

		::System::UInt32 MAEOEFHFLLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_MAEOEFHFLLA_OFFSET))(this);
		}

		::System::Void OMIEIJKJLOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_OMIEIJKJLOJ_OFFSET))(this, a1);
		}

		::System::UInt32 NNCEOHIDPGG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_NNCEOHIDPGG_OFFSET))(this);
		}

		::System::Void JPFDJKBACCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_JPFDJKBACCC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLIHJCNOEJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLIHJCNOEJP*))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLIHJCNOEJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIHJCNOEJP*))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLIHJCNOEJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
