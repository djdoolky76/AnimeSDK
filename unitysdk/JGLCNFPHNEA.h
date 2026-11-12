#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class JGLCNFPHNEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGLCNFPHNEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA4C070)
#define JGLCNFPHNEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA4C680)
#define JGLCNFPHNEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA4BA40)
#define JGLCNFPHNEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA4B930)
#define JGLCNFPHNEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4B8B0)
#define JGLCNFPHNEA_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1FA4BAD0)
#define JGLCNFPHNEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA4BB40)
#define JGLCNFPHNEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA4BB10)
#define JGLCNFPHNEA_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1FA4BAC0)
#define JGLCNFPHNEA_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1FA4BA90)
#define JGLCNFPHNEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA4BC20)
#define JGLCNFPHNEA_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1FA4BA80)
#define JGLCNFPHNEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA4B870)
#define JGLCNFPHNEA_MAKHLOBJHLM_OFFSET UNITYSDK_OFFSET(0x1FA4BAF0)
#define JGLCNFPHNEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA4C4F0)
#define JGLCNFPHNEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA4C3F0)
#define JGLCNFPHNEA_MFEOGNJHKFF_OFFSET UNITYSDK_OFFSET(0x1FA4BA70)
#define JGLCNFPHNEA_MKJIKKJKAMP_OFFSET UNITYSDK_OFFSET(0x1FA4BAE0)
#define JGLCNFPHNEA_NPNOFEKIEMJ_OFFSET UNITYSDK_OFFSET(0x1FA4BB00)
#define JGLCNFPHNEA_OOJMFHIPHOC_OFFSET UNITYSDK_OFFSET(0x1FA4BAA0)
#define JGLCNFPHNEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA4B8A0)
#define JGLCNFPHNEA_PCDDHANNLJE_OFFSET UNITYSDK_OFFSET(0x1FA4BAB0)
#define JGLCNFPHNEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA4BDB0)
#define JGLCNFPHNEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA4BE10)

inline static constexpr unsigned int JGLCNFPHNEA_TypeDefinitionIndex = 28456;

	class JGLCNFPHNEA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GDPMNEHFIML; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* DLJHIJMGCPA; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int64 MFHNPAODGGN; // 0x28
		::System::Int64 GFNEFHEHFOC; // 0x30
		::System::UInt32 AENFHPAGFOI; // 0x38
		::System::UInt32 JBBOGEOCCPP; // 0x3C
		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_OJBKKDEKBEA()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "JGLCNFPHNEA")->GetStaticField(0x48550);
		}

		static ::Google::Protobuf::MessageParser_1<::JGLCNFPHNEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGLCNFPHNEA*>**)UnitySDK::FromName("", "JGLCNFPHNEA")->GetStaticField(0x48558);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OMBFLPDBGFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JGLCNFPHNEA")->GetStaticField(0x48560);
		}

		// static const ::System::Object NBHKOMHDALG; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		// static const ::System::Object MALOFIFBGPP; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object JNNCHKBIELB; // 0x0
		// static const ::System::Object INPMBLCHNGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGLCNFPHNEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGLCNFPHNEA*))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGLCNFPHNEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGLCNFPHNEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGLCNFPHNEA*>*(*)())((::PBYTE)hIl2Cpp + JGLCNFPHNEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGLCNFPHNEA* Clone()
		{
			return ((::JGLCNFPHNEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* MFEOGNJHKFF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_MFEOGNJHKFF_OFFSET))(this);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::UInt32 OOJMFHIPHOC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_OOJMFHIPHOC_OFFSET))(this);
		}

		::System::Void PCDDHANNLJE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_PCDDHANNLJE_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKJIKKJKAMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_MKJIKKJKAMP_OFFSET))(this);
		}

		::System::Int64 MAKHLOBJHLM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_MAKHLOBJHLM_OFFSET))(this);
		}

		::System::Void NPNOFEKIEMJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_NPNOFEKIEMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGLCNFPHNEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGLCNFPHNEA*))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGLCNFPHNEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGLCNFPHNEA*))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGLCNFPHNEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
