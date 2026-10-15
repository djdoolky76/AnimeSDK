#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNBGMOIHOAN.h"
#include "unitysdk/System/Object.h"
class PFCKBFLDHNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFCKBFLDHNI_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DEF4CB0)
#define PFCKBFLDHNI_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DEF4CD0)
#define PFCKBFLDHNI_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DEF4CE0)
#define PFCKBFLDHNI_AIONILPGDFG_OFFSET UNITYSDK_OFFSET(0x1DEF4D60)
#define PFCKBFLDHNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF5310)
#define PFCKBFLDHNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5780)
#define PFCKBFLDHNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF4C60)
#define PFCKBFLDHNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF4BB0)
#define PFCKBFLDHNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF4B50)
#define PFCKBFLDHNI_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DEF4CC0)
#define PFCKBFLDHNI_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1DEF4CF0)
#define PFCKBFLDHNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF4E40)
#define PFCKBFLDHNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF4D80)
#define PFCKBFLDHNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF4EE0)
#define PFCKBFLDHNI_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1DEF4D10)
#define PFCKBFLDHNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF4AE0)
#define PFCKBFLDHNI_KBLGHGFHJIM_OFFSET UNITYSDK_OFFSET(0x1DEF4D70)
#define PFCKBFLDHNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF5620)
#define PFCKBFLDHNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF55A0)
#define PFCKBFLDHNI_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1DEF4D00)
#define PFCKBFLDHNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF4B40)
#define PFCKBFLDHNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF5060)
#define PFCKBFLDHNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF50C0)

inline static constexpr unsigned int PFCKBFLDHNI_TypeDefinitionIndex = 32551;

	class PFCKBFLDHNI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::String* IOGCODPGEEA; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x28
		::HNBGMOIHOAN OHFNMGCGAGG; // 0x2C
		::System::UInt32 LJDBCGPFFDH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::PFCKBFLDHNI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFCKBFLDHNI*>**)UnitySDK::FromName("", "PFCKBFLDHNI")->GetStaticField(0x31640);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PFCKBFLDHNI")->GetStaticField(0x31648);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object AJPEEDNHODK; // 0x0
		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object EDHJDCGBECJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFCKBFLDHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFCKBFLDHNI*))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFCKBFLDHNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFCKBFLDHNI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFCKBFLDHNI*>*(*)())((::PBYTE)hIl2Cpp + PFCKBFLDHNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFCKBFLDHNI* Clone()
		{
			return ((::PFCKBFLDHNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_EPFDENEPLOL_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_HABCMACJEIN_OFFSET))(this, a1);
		}

		::HNBGMOIHOAN AIONILPGDFG()
		{
			return ((::HNBGMOIHOAN(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_AIONILPGDFG_OFFSET))(this);
		}

		::System::Void KBLGHGFHJIM(::HNBGMOIHOAN a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBGMOIHOAN))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_KBLGHGFHJIM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFCKBFLDHNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFCKBFLDHNI*))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFCKBFLDHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFCKBFLDHNI*))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFCKBFLDHNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
