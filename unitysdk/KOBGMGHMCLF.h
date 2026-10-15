#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOBGMGHMCLF;
class MCOFKOEJGGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOBGMGHMCLF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E87F620)
#define KOBGMGHMCLF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E87F630)
#define KOBGMGHMCLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E87FAD0)
#define KOBGMGHMCLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87FEA0)
#define KOBGMGHMCLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E87F5D0)
#define KOBGMGHMCLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E87F510)
#define KOBGMGHMCLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87F4C0)
#define KOBGMGHMCLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E87F6F0)
#define KOBGMGHMCLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E87F690)
#define KOBGMGHMCLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E87F830)
#define KOBGMGHMCLF_HLOEJAJEDJP_OFFSET UNITYSDK_OFFSET(0x1E87F640)
#define KOBGMGHMCLF_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E87F660)
#define KOBGMGHMCLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E87F450)
#define KOBGMGHMCLF_LELBEPIMPMC_OFFSET UNITYSDK_OFFSET(0x1E87F670)
#define KOBGMGHMCLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E87FDA0)
#define KOBGMGHMCLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E87FCE0)
#define KOBGMGHMCLF_OLALIDNOEOK_OFFSET UNITYSDK_OFFSET(0x1E87F680)
#define KOBGMGHMCLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E87F4B0)
#define KOBGMGHMCLF_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E87F650)
#define KOBGMGHMCLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E87F8B0)
#define KOBGMGHMCLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E87F910)

inline static constexpr unsigned int KOBGMGHMCLF_TypeDefinitionIndex = 25160;

	class KOBGMGHMCLF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MCOFKOEJGGL*>* EJGBJLFBHLG; // 0x18
		::System::UInt32 EGLDDJMEOJC; // 0x20
		::System::UInt32 CMCCOIIMHMC; // 0x24
		::System::UInt32 LJDBCGPFFDH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::MCOFKOEJGGL*>** StaticGet_CHKHLLCDPPB()
		{
			return (::Google::Protobuf::FieldCodec_1<::MCOFKOEJGGL*>**)UnitySDK::FromName("", "KOBGMGHMCLF")->GetStaticField(0x20F30);
		}

		static ::Google::Protobuf::MessageParser_1<::KOBGMGHMCLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOBGMGHMCLF*>**)UnitySDK::FromName("", "KOBGMGHMCLF")->GetStaticField(0x20F38);
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

		static ::Google::Protobuf::MessageParser_1<::KOBGMGHMCLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOBGMGHMCLF*>*(*)())((::PBYTE)hIl2Cpp + KOBGMGHMCLF_JJGHOBBFNJD_OFFSET))();
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
