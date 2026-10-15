#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOBGMGHMCLF;
class MCOFKOEJGGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOBGMGHMCLF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E8ACBE0)
#define KOBGMGHMCLF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E8ACBF0)
#define KOBGMGHMCLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8AD090)
#define KOBGMGHMCLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD460)
#define KOBGMGHMCLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8ACB90)
#define KOBGMGHMCLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8ACAD0)
#define KOBGMGHMCLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8ACA80)
#define KOBGMGHMCLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8ACCB0)
#define KOBGMGHMCLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8ACC50)
#define KOBGMGHMCLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8ACDF0)
#define KOBGMGHMCLF_HLOEJAJEDJP_OFFSET UNITYSDK_OFFSET(0x1E8ACC00)
#define KOBGMGHMCLF_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E8ACC20)
#define KOBGMGHMCLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8ACA10)
#define KOBGMGHMCLF_LELBEPIMPMC_OFFSET UNITYSDK_OFFSET(0x1E8ACC30)
#define KOBGMGHMCLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AD360)
#define KOBGMGHMCLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8AD2A0)
#define KOBGMGHMCLF_OLALIDNOEOK_OFFSET UNITYSDK_OFFSET(0x1E8ACC40)
#define KOBGMGHMCLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8ACA70)
#define KOBGMGHMCLF_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E8ACC10)
#define KOBGMGHMCLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8ACE70)
#define KOBGMGHMCLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8ACED0)

	class KOBGMGHMCLF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MCOFKOEJGGL*>* EJGBJLFBHLG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::System::UInt32 CMCCOIIMHMC; // 0x24
		::System::UInt32 EGLDDJMEOJC; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_CHKHLLCDPPB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KOBGMGHMCLF")->GetStaticField(0x2B360);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOBGMGHMCLF")->GetStaticField(0x2B368);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object NBMGECLPBKN; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object KPMNBDKJBCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOBGMGHMCLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOBGMGHMCLF*))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOBGMGHMCLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOBGMGHMCLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOBGMGHMCLF* Clone()
		{
			return ((::KOBGMGHMCLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MCOFKOEJGGL*>* HLOEJAJEDJP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MCOFKOEJGGL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_HLOEJAJEDJP_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::UInt32 LELBEPIMPMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_LELBEPIMPMC_OFFSET))(this);
		}

		::System::Void OLALIDNOEOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_OLALIDNOEOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOBGMGHMCLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOBGMGHMCLF*))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOBGMGHMCLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOBGMGHMCLF*))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOBGMGHMCLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
