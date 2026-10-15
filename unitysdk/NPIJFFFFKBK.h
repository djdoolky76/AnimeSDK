#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPIJFFFFKBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPIJFFFFKBK_AAEJFKMMOCA_OFFSET UNITYSDK_OFFSET(0x1EB6FAF0)
#define NPIJFFFFKBK_BCFEGDNDDBJ_OFFSET UNITYSDK_OFFSET(0x1EB6FA90)
#define NPIJFFFFKBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6FFC0)
#define NPIJFFFFKBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB70350)
#define NPIJFFFFKBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB6FA60)
#define NPIJFFFFKBK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB6FAB0)
#define NPIJFFFFKBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB6F9C0)
#define NPIJFFFFKBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F970)
#define NPIJFFFFKBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB6FB90)
#define NPIJFFFFKBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB6FB00)
#define NPIJFFFFKBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6FCA0)
#define NPIJFFFFKBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB6F930)
#define NPIJFFFFKBK_KCNPGKAGHCN_OFFSET UNITYSDK_OFFSET(0x1EB6FAE0)
#define NPIJFFFFKBK_LLMPLPFCFFC_OFFSET UNITYSDK_OFFSET(0x1EB6FAA0)
#define NPIJFFFFKBK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB6FAC0)
#define NPIJFFFFKBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB70260)
#define NPIJFFFFKBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB701F0)
#define NPIJFFFFKBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F960)
#define NPIJFFFFKBK_PFOJAOPDMHA_OFFSET UNITYSDK_OFFSET(0x1EB6FAD0)
#define NPIJFFFFKBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6FDD0)
#define NPIJFFFFKBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6FE30)

inline static constexpr unsigned int NPIJFFFFKBK_TypeDefinitionIndex = 25746;

	class NPIJFFFFKBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDPHLABPAJL; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 JDOACAPHCED; // 0x24
		::System::Int64 KMEFIFEHFIB; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EBJGMKINBDI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NPIJFFFFKBK")->GetStaticField(0xDAE0);
		}

		static ::Google::Protobuf::MessageParser_1<::NPIJFFFFKBK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPIJFFFFKBK*>**)UnitySDK::FromName("", "NPIJFFFFKBK")->GetStaticField(0xDAE8);
		}

		// static const ::System::Object ODPBLNACHCO; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object KCKNMFCNKCL; // 0x0
		// static const ::System::Object PKDGMBAIGBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPIJFFFFKBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPIJFFFFKBK*))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPIJFFFFKBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPIJFFFFKBK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPIJFFFFKBK*>*(*)())((::PBYTE)hIl2Cpp + NPIJFFFFKBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPIJFFFFKBK* Clone()
		{
			return ((::NPIJFFFFKBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_CLONE_OFFSET))(this);
		}

		::System::UInt32 BCFEGDNDDBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_BCFEGDNDDBJ_OFFSET))(this);
		}

		::System::Void LLMPLPFCFFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_LLMPLPFCFFC_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PFOJAOPDMHA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_PFOJAOPDMHA_OFFSET))(this);
		}

		::System::Int64 KCNPGKAGHCN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_KCNPGKAGHCN_OFFSET))(this);
		}

		::System::Void AAEJFKMMOCA(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_AAEJFKMMOCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPIJFFFFKBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPIJFFFFKBK*))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPIJFFFFKBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPIJFFFFKBK*))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPIJFFFFKBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
