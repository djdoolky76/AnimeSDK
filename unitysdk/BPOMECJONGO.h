#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPOMECJONGO;
class DEJGMBKPHEC;
class GCFGCHAMNOL;
class HFBJNFJHKPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPOMECJONGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E050A00)
#define BPOMECJONGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E051010)
#define BPOMECJONGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E050160)
#define BPOMECJONGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E04FFA0)
#define BPOMECJONGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04FF10)
#define BPOMECJONGO_EINLCDMBILL_OFFSET UNITYSDK_OFFSET(0x1E0501C0)
#define BPOMECJONGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E050260)
#define BPOMECJONGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E050230)
#define BPOMECJONGO_FIHLKMICDOG_OFFSET UNITYSDK_OFFSET(0x1E050210)
#define BPOMECJONGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E050470)
#define BPOMECJONGO_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E050190)
#define BPOMECJONGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E04FED0)
#define BPOMECJONGO_KNJEAKADGHO_OFFSET UNITYSDK_OFFSET(0x1E0501F0)
#define BPOMECJONGO_LNAKGAHEPJI_OFFSET UNITYSDK_OFFSET(0x1E050200)
#define BPOMECJONGO_MCDGPMDABFE_OFFSET UNITYSDK_OFFSET(0x1E0501E0)
#define BPOMECJONGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E050DF0)
#define BPOMECJONGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E050BE0)
#define BPOMECJONGO_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E0501A0)
#define BPOMECJONGO_MPAACODNLIK_OFFSET UNITYSDK_OFFSET(0x1E050220)
#define BPOMECJONGO_NAHIEKJPKNH_OFFSET UNITYSDK_OFFSET(0x1E0501B0)
#define BPOMECJONGO_NOCBOBCIOJE_OFFSET UNITYSDK_OFFSET(0x1E0501D0)
#define BPOMECJONGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E04FF00)
#define BPOMECJONGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E050700)
#define BPOMECJONGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E050760)

inline static constexpr unsigned int BPOMECJONGO_TypeDefinitionIndex = 27528;

	class BPOMECJONGO : public ::System::Object
	{
	public:
		::GCFGCHAMNOL* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::DEJGMBKPHEC*>* BMELBMEEPJH; // 0x20
		::HFBJNFJHKPO* MOPOGJGJICC; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKCGNBNDDPJ; // 0x30
		::System::Boolean LBMBOGOMEBP; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 DOEEOIADCEE; // 0x3C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPOMECJONGO")->GetStaticField(0x55AB0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IPOECNIBMOK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BPOMECJONGO")->GetStaticField(0x55AB8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BMJANCHOCHF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BPOMECJONGO")->GetStaticField(0x55AC0);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object IGFPJLHDAMO; // 0x0
		// static const ::System::Object HCMJIJCLEBP; // 0x0
		// static const ::System::Object EDKMCLPFFOE; // 0x0
		// static const ::System::Object MNOMHJLBILE; // 0x0
		// static const ::System::Object HLLNPKNMIGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPOMECJONGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPOMECJONGO*))((::PBYTE)hIl2Cpp + BPOMECJONGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPOMECJONGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPOMECJONGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPOMECJONGO* Clone()
		{
			return ((::BPOMECJONGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_CLONE_OFFSET))(this);
		}

		::GCFGCHAMNOL* JIFPIGBJFEH()
		{
			return ((::GCFGCHAMNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::GCFGCHAMNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFGCHAMNOL*))((::PBYTE)hIl2Cpp + BPOMECJONGO_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean NAHIEKJPKNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_NAHIEKJPKNH_OFFSET))(this);
		}

		::System::Void EINLCDMBILL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPOMECJONGO_EINLCDMBILL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NOCBOBCIOJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_NOCBOBCIOJE_OFFSET))(this);
		}

		::HFBJNFJHKPO* MCDGPMDABFE()
		{
			return ((::HFBJNFJHKPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_MCDGPMDABFE_OFFSET))(this);
		}

		::System::Void KNJEAKADGHO(::HFBJNFJHKPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFBJNFJHKPO*))((::PBYTE)hIl2Cpp + BPOMECJONGO_KNJEAKADGHO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DEJGMBKPHEC*>* LNAKGAHEPJI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DEJGMBKPHEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_LNAKGAHEPJI_OFFSET))(this);
		}

		::System::UInt32 FIHLKMICDOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_FIHLKMICDOG_OFFSET))(this);
		}

		::System::Void MPAACODNLIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPOMECJONGO_MPAACODNLIK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPOMECJONGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPOMECJONGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPOMECJONGO*))((::PBYTE)hIl2Cpp + BPOMECJONGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPOMECJONGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPOMECJONGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPOMECJONGO*))((::PBYTE)hIl2Cpp + BPOMECJONGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPOMECJONGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
