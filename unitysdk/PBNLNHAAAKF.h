#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBEPMABCBGF;
class PBNLNHAAAKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBNLNHAAAKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1C5CC0)
#define PBNLNHAAAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1C6170)
#define PBNLNHAAAKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1C57C0)
#define PBNLNHAAAKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1C5690)
#define PBNLNHAAAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C5640)
#define PBNLNHAAAKF_DFMFECOINOI_OFFSET UNITYSDK_OFFSET(0x1F1C5830)
#define PBNLNHAAAKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1C5870)
#define PBNLNHAAAKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1C5840)
#define PBNLNHAAAKF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F1C5810)
#define PBNLNHAAAKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1C5A50)
#define PBNLNHAAAKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1C5600)
#define PBNLNHAAAKF_LIMFMEKJBPF_OFFSET UNITYSDK_OFFSET(0x1F1C57F0)
#define PBNLNHAAAKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1C5F60)
#define PBNLNHAAAKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1C5E20)
#define PBNLNHAAAKF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F1C5800)
#define PBNLNHAAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1C5630)
#define PBNLNHAAAKF_PFPPLLJFBAM_OFFSET UNITYSDK_OFFSET(0x1F1C5820)
#define PBNLNHAAAKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1C5B00)
#define PBNLNHAAAKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1C5B60)

inline static constexpr unsigned int PBNLNHAAAKF_TypeDefinitionIndex = 32096;

	class PBNLNHAAAKF : public ::System::Object
	{
	public:
		::BBEPMABCBGF* KFDOLCMLJGP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BBEPMABCBGF*>* PBKIDNIPABK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PBNLNHAAAKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBNLNHAAAKF*>**)UnitySDK::FromName("", "PBNLNHAAAKF")->GetStaticField(0x2B050);
		}

		static ::Google::Protobuf::FieldCodec_1<::BBEPMABCBGF*>** StaticGet_BOEJOIEFDNI()
		{
			return (::Google::Protobuf::FieldCodec_1<::BBEPMABCBGF*>**)UnitySDK::FromName("", "PBNLNHAAAKF")->GetStaticField(0x2B058);
		}

		// static const ::System::Object HHOCPOACAJL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MDBNPFKPBCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBNLNHAAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBNLNHAAAKF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBNLNHAAAKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBNLNHAAAKF*>*(*)())((::PBYTE)hIl2Cpp + PBNLNHAAAKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBNLNHAAAKF* Clone()
		{
			return ((::PBNLNHAAAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BBEPMABCBGF*>* LIMFMEKJBPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BBEPMABCBGF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_LIMFMEKJBPF_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BBEPMABCBGF* PFPPLLJFBAM()
		{
			return ((::BBEPMABCBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_PFPPLLJFBAM_OFFSET))(this);
		}

		::System::Void DFMFECOINOI(::BBEPMABCBGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBEPMABCBGF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_DFMFECOINOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBNLNHAAAKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBNLNHAAAKF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBNLNHAAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBNLNHAAAKF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
