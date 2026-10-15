#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICGOLPHCKIL;
class NDJDKPMKDJD;
class OPGKKPEDKCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPGKKPEDKCL_AMMINMBEKAA_OFFSET UNITYSDK_OFFSET(0x1DEE0670)
#define OPGKKPEDKCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE0BB0)
#define OPGKKPEDKCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1230)
#define OPGKKPEDKCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE05C0)
#define OPGKKPEDKCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE04A0)
#define OPGKKPEDKCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE0430)
#define OPGKKPEDKCL_DJMHGEKIDBL_OFFSET UNITYSDK_OFFSET(0x1DEE0660)
#define OPGKKPEDKCL_ELGGLICLMLK_OFFSET UNITYSDK_OFFSET(0x1DEE0640)
#define OPGKKPEDKCL_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1DEE06A0)
#define OPGKKPEDKCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE0710)
#define OPGKKPEDKCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE06B0)
#define OPGKKPEDKCL_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1DEE0690)
#define OPGKKPEDKCL_FPBBCABKLBP_OFFSET UNITYSDK_OFFSET(0x1DEE0650)
#define OPGKKPEDKCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE07E0)
#define OPGKKPEDKCL_HEMFFCJNCHH_OFFSET UNITYSDK_OFFSET(0x1DEE0610)
#define OPGKKPEDKCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE03C0)
#define OPGKKPEDKCL_JMPPKALMLMP_OFFSET UNITYSDK_OFFSET(0x1DEE0680)
#define OPGKKPEDKCL_MAKHLOBJHLM_OFFSET UNITYSDK_OFFSET(0x1DEE0620)
#define OPGKKPEDKCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE10B0)
#define OPGKKPEDKCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE0F80)
#define OPGKKPEDKCL_NPNOFEKIEMJ_OFFSET UNITYSDK_OFFSET(0x1DEE0630)
#define OPGKKPEDKCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE0420)
#define OPGKKPEDKCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE08D0)
#define OPGKKPEDKCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE0930)

inline static constexpr unsigned int OPGKKPEDKCL_TypeDefinitionIndex = 26566;

	class OPGKKPEDKCL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NDJDKPMKDJD*>* ICEPIKGHEGO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::ICGOLPHCKIL*>* GMEFHKFFOMP; // 0x20
		::System::UInt64 MFHNPAODGGN; // 0x28
		::System::UInt32 ABLFPKGCGAF; // 0x30
		::System::Byte _padding0[0x4];
		::System::UInt64 GJKNJPBCHPF; // 0x38
		::System::UInt64 GFNEFHEHFOC; // 0x40
		static ::Google::Protobuf::MessageParser_1<::OPGKKPEDKCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPGKKPEDKCL*>**)UnitySDK::FromName("", "OPGKKPEDKCL")->GetStaticField(0x2FDE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::NDJDKPMKDJD*>** StaticGet_LCEGOEKMKIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::NDJDKPMKDJD*>**)UnitySDK::FromName("", "OPGKKPEDKCL")->GetStaticField(0x2FDE8);
		}

		static ::Google::Protobuf::FieldCodec_1<::ICGOLPHCKIL*>** StaticGet_AHFPGLHHEKN()
		{
			return (::Google::Protobuf::FieldCodec_1<::ICGOLPHCKIL*>**)UnitySDK::FromName("", "OPGKKPEDKCL")->GetStaticField(0x2FDF0);
		}

		// static const ::System::Object EGPPCGBEPKO; // 0x0
		// static const ::System::Object INPMBLCHNGN; // 0x0
		// static const ::System::Object ICIAEAHNNFL; // 0x0
		// static const ::System::Object OEHAMLGFGAA; // 0x0
		// static const ::System::Object FEMLDDLMHEG; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPGKKPEDKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPGKKPEDKCL*))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPGKKPEDKCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPGKKPEDKCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPGKKPEDKCL*>*(*)())((::PBYTE)hIl2Cpp + OPGKKPEDKCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPGKKPEDKCL* Clone()
		{
			return ((::OPGKKPEDKCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ICGOLPHCKIL*>* HEMFFCJNCHH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ICGOLPHCKIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_HEMFFCJNCHH_OFFSET))(this);
		}

		::System::UInt64 MAKHLOBJHLM()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_MAKHLOBJHLM_OFFSET))(this);
		}

		::System::Void NPNOFEKIEMJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_NPNOFEKIEMJ_OFFSET))(this, a1);
		}

		::System::UInt64 ELGGLICLMLK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_ELGGLICLMLK_OFFSET))(this);
		}

		::System::Void FPBBCABKLBP(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_FPBBCABKLBP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NDJDKPMKDJD*>* DJMHGEKIDBL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NDJDKPMKDJD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_DJMHGEKIDBL_OFFSET))(this);
		}

		::System::UInt32 AMMINMBEKAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_AMMINMBEKAA_OFFSET))(this);
		}

		::System::Void JMPPKALMLMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_JMPPKALMLMP_OFFSET))(this, a1);
		}

		::System::UInt64 FFFDGCMLLAI()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPGKKPEDKCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPGKKPEDKCL*))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPGKKPEDKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPGKKPEDKCL*))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPGKKPEDKCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
