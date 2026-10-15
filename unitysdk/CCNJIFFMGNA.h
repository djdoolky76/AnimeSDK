#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNJIFFMGNA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCNJIFFMGNA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E04F570)
#define CCNJIFFMGNA_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E04EF80)
#define CCNJIFFMGNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04F9A0)
#define CCNJIFFMGNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E04EF20)
#define CCNJIFFMGNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E04EDC0)
#define CCNJIFFMGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04ECE0)
#define CCNJIFFMGNA_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E04EF90)
#define CCNJIFFMGNA_DPIEDJONABK_OFFSET UNITYSDK_OFFSET(0x1E04EFA0)
#define CCNJIFFMGNA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E04EFF0)
#define CCNJIFFMGNA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E04EFC0)
#define CCNJIFFMGNA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E04EF70)
#define CCNJIFFMGNA_FMMPNAMNEBN_OFFSET UNITYSDK_OFFSET(0x1E04EFB0)
#define CCNJIFFMGNA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E04F0A0)
#define CCNJIFFMGNA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E04ECA0)
#define CCNJIFFMGNA_KLLNHMKDHFC_OFFSET UNITYSDK_OFFSET(0x1E04EF50)
#define CCNJIFFMGNA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E04F800)
#define CCNJIFFMGNA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E04F770)
#define CCNJIFFMGNA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E04EF60)
#define CCNJIFFMGNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E04ECD0)
#define CCNJIFFMGNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E04F330)
#define CCNJIFFMGNA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E04F390)

inline static constexpr unsigned int CCNJIFFMGNA_TypeDefinitionIndex = 30546;

	class CCNJIFFMGNA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DPBODLNIFJD; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DDOFFMEKEDM; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BEBEKMMHFNE; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::Int32 NBFPOGFBMFE; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HAOHEOFEGKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CCNJIFFMGNA")->GetStaticField(0xDAC0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OGNOLPEAIDP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CCNJIFFMGNA")->GetStaticField(0xDAC8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HHGDOGEBIEB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CCNJIFFMGNA")->GetStaticField(0xDAD0);
		}

		static ::Google::Protobuf::MessageParser_1<::CCNJIFFMGNA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCNJIFFMGNA*>**)UnitySDK::FromName("", "CCNJIFFMGNA")->GetStaticField(0xDAD8);
		}

		// static const ::System::Object AMENDDEPCON; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object EJNNBOAKPEN; // 0x0
		// static const ::System::Object HNHLKGFJHCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCNJIFFMGNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCNJIFFMGNA*))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCNJIFFMGNA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCNJIFFMGNA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCNJIFFMGNA*>*(*)())((::PBYTE)hIl2Cpp + CCNJIFFMGNA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCNJIFFMGNA* Clone()
		{
			return ((::CCNJIFFMGNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KLLNHMKDHFC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_KLLNHMKDHFC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Int32 CBOFFPEFEPP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DPIEDJONABK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_DPIEDJONABK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMMPNAMNEBN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_FMMPNAMNEBN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCNJIFFMGNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCNJIFFMGNA*))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCNJIFFMGNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCNJIFFMGNA*))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCNJIFFMGNA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
