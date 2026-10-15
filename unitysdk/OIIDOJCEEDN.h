#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEJGMBKPHEC;
class GCFGCHAMNOL;
class HFBJNFJHKPO;
class OIIDOJCEEDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIIDOJCEEDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE41C70)
#define OIIDOJCEEDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE422B0)
#define OIIDOJCEEDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE41440)
#define OIIDOJCEEDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE41260)
#define OIIDOJCEEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE411D0)
#define OIIDOJCEEDN_EINLCDMBILL_OFFSET UNITYSDK_OFFSET(0x1DE414B0)
#define OIIDOJCEEDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE41540)
#define OIIDOJCEEDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE41510)
#define OIIDOJCEEDN_FIHLKMICDOG_OFFSET UNITYSDK_OFFSET(0x1DE414C0)
#define OIIDOJCEEDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE416E0)
#define OIIDOJCEEDN_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1DE414F0)
#define OIIDOJCEEDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE41190)
#define OIIDOJCEEDN_KNJEAKADGHO_OFFSET UNITYSDK_OFFSET(0x1DE41480)
#define OIIDOJCEEDN_LNAKGAHEPJI_OFFSET UNITYSDK_OFFSET(0x1DE414E0)
#define OIIDOJCEEDN_MCDGPMDABFE_OFFSET UNITYSDK_OFFSET(0x1DE41470)
#define OIIDOJCEEDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE42090)
#define OIIDOJCEEDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE41E70)
#define OIIDOJCEEDN_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1DE41500)
#define OIIDOJCEEDN_MPAACODNLIK_OFFSET UNITYSDK_OFFSET(0x1DE414D0)
#define OIIDOJCEEDN_NAHIEKJPKNH_OFFSET UNITYSDK_OFFSET(0x1DE414A0)
#define OIIDOJCEEDN_NOCBOBCIOJE_OFFSET UNITYSDK_OFFSET(0x1DE41490)
#define OIIDOJCEEDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE411C0)
#define OIIDOJCEEDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE41960)
#define OIIDOJCEEDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE419C0)

inline static constexpr unsigned int OIIDOJCEEDN_TypeDefinitionIndex = 27536;

	class OIIDOJCEEDN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKCGNBNDDPJ; // 0x10
		::GCFGCHAMNOL* MNJNMPKLFAI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::DEJGMBKPHEC*>* BMELBMEEPJH; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::HFBJNFJHKPO* MOPOGJGJICC; // 0x30
		::System::UInt32 DOEEOIADCEE; // 0x38
		::System::Boolean LBMBOGOMEBP; // 0x3C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BMJANCHOCHF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OIIDOJCEEDN")->GetStaticField(0x1A650);
		}

		static ::Google::Protobuf::FieldCodec_1<::DEJGMBKPHEC*>** StaticGet_IPOECNIBMOK()
		{
			return (::Google::Protobuf::FieldCodec_1<::DEJGMBKPHEC*>**)UnitySDK::FromName("", "OIIDOJCEEDN")->GetStaticField(0x1A658);
		}

		static ::Google::Protobuf::MessageParser_1<::OIIDOJCEEDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIIDOJCEEDN*>**)UnitySDK::FromName("", "OIIDOJCEEDN")->GetStaticField(0x1A660);
		}

		// static const ::System::Object EDKMCLPFFOE; // 0x0
		// static const ::System::Object HCMJIJCLEBP; // 0x0
		// static const ::System::Object IGFPJLHDAMO; // 0x0
		// static const ::System::Object HLLNPKNMIGL; // 0x0
		// static const ::System::Object MNOMHJLBILE; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIIDOJCEEDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIDOJCEEDN*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIDOJCEEDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIIDOJCEEDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIIDOJCEEDN*>*(*)())((::PBYTE)hIl2Cpp + OIIDOJCEEDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIIDOJCEEDN* Clone()
		{
			return ((::OIIDOJCEEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_CLONE_OFFSET))(this);
		}

		::HFBJNFJHKPO* MCDGPMDABFE()
		{
			return ((::HFBJNFJHKPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_MCDGPMDABFE_OFFSET))(this);
		}

		::System::Void KNJEAKADGHO(::HFBJNFJHKPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFBJNFJHKPO*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_KNJEAKADGHO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NOCBOBCIOJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_NOCBOBCIOJE_OFFSET))(this);
		}

		::System::Boolean NAHIEKJPKNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_NAHIEKJPKNH_OFFSET))(this);
		}

		::System::Void EINLCDMBILL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_EINLCDMBILL_OFFSET))(this, a1);
		}

		::System::UInt32 FIHLKMICDOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_FIHLKMICDOG_OFFSET))(this);
		}

		::System::Void MPAACODNLIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_MPAACODNLIK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DEJGMBKPHEC*>* LNAKGAHEPJI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DEJGMBKPHEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_LNAKGAHEPJI_OFFSET))(this);
		}

		::GCFGCHAMNOL* JIFPIGBJFEH()
		{
			return ((::GCFGCHAMNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::GCFGCHAMNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFGCHAMNOL*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIIDOJCEEDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIIDOJCEEDN*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIIDOJCEEDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIDOJCEEDN*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIIDOJCEEDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
