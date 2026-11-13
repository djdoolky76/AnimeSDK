#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAFEPBGOHK;
class FJKGDHKKDFF;
class HIMJKAMHLMJ;
class LPCINMGGCNI;
class MOOKMKEKMKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIMJKAMHLMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20526660)
#define HIMJKAMHLMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x20526C50)
#define HIMJKAMHLMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x20525CC0)
#define HIMJKAMHLMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20525A30)
#define HIMJKAMHLMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x205259A0)
#define HIMJKAMHLMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20525DC0)
#define HIMJKAMHLMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x20525D90)
#define HIMJKAMHLMJ_FJPMMKNEEOA_OFFSET UNITYSDK_OFFSET(0x20525D10)
#define HIMJKAMHLMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20526060)
#define HIMJKAMHLMJ_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x20525D50)
#define HIMJKAMHLMJ_HOHPJNOCCMD_OFFSET UNITYSDK_OFFSET(0x20525D70)
#define HIMJKAMHLMJ_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x20525D40)
#define HIMJKAMHLMJ_IHGCIGEDNAB_OFFSET UNITYSDK_OFFSET(0x20525D80)
#define HIMJKAMHLMJ_IINPGEOKMKC_OFFSET UNITYSDK_OFFSET(0x20525D20)
#define HIMJKAMHLMJ_JEEBCHJINKL_OFFSET UNITYSDK_OFFSET(0x20525D30)
#define HIMJKAMHLMJ_JGEBDHAOFMB_OFFSET UNITYSDK_OFFSET(0x20525D60)
#define HIMJKAMHLMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20525960)
#define HIMJKAMHLMJ_KNHPKHPKMIJ_OFFSET UNITYSDK_OFFSET(0x20525D00)
#define HIMJKAMHLMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205269E0)
#define HIMJKAMHLMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205267F0)
#define HIMJKAMHLMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20525990)
#define HIMJKAMHLMJ_PFDNDLJFBFP_OFFSET UNITYSDK_OFFSET(0x20525CF0)
#define HIMJKAMHLMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205263C0)
#define HIMJKAMHLMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x20526420)

inline static constexpr unsigned int HIMJKAMHLMJ_TypeDefinitionIndex = 27854;

	class HIMJKAMHLMJ : public ::System::Object
	{
	public:
		::FJKGDHKKDFF* LHBHOJFAFIK; // 0x10
		::LPCINMGGCNI* PPADDHNKEOC; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::DDAFEPBGOHK* GMLPGJJJKDP; // 0x28
		::MOOKMKEKMKC* PNFPNJLFGPC; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MNKGGPNLMEE; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EFJNLBJKJKE; // 0x40
		static ::Google::Protobuf::MessageParser_1<::HIMJKAMHLMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIMJKAMHLMJ*>**)UnitySDK::FromName("", "HIMJKAMHLMJ")->GetStaticField(0x2FD10);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ACHHIPPPEEI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HIMJKAMHLMJ")->GetStaticField(0x2FD18);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MHHHGILAHOA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HIMJKAMHLMJ")->GetStaticField(0x2FD20);
		}

		// static const ::System::Object OKMNIAKJOEO; // 0x0
		// static const ::System::Object JPJPDLBENDH; // 0x0
		// static const ::System::Object ENABGGGOELO; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		// static const ::System::Object LGEBDNALEIL; // 0x0
		// static const ::System::Object JKGLELMDILK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIMJKAMHLMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMJKAMHLMJ*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIMJKAMHLMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIMJKAMHLMJ*>*(*)())((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIMJKAMHLMJ* Clone()
		{
			return ((::HIMJKAMHLMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_CLONE_OFFSET))(this);
		}

		::LPCINMGGCNI* PFDNDLJFBFP()
		{
			return ((::LPCINMGGCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_PFDNDLJFBFP_OFFSET))(this);
		}

		::System::Void KNHPKHPKMIJ(::LPCINMGGCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPCINMGGCNI*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_KNHPKHPKMIJ_OFFSET))(this, a1);
		}

		::MOOKMKEKMKC* FJPMMKNEEOA()
		{
			return ((::MOOKMKEKMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_FJPMMKNEEOA_OFFSET))(this);
		}

		::System::Void IINPGEOKMKC(::MOOKMKEKMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_IINPGEOKMKC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JEEBCHJINKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_JEEBCHJINKL_OFFSET))(this);
		}

		::DDAFEPBGOHK* IGJOIMKFBNG()
		{
			return ((::DDAFEPBGOHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::DDAFEPBGOHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAFEPBGOHK*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JGEBDHAOFMB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_JGEBDHAOFMB_OFFSET))(this);
		}

		::FJKGDHKKDFF* HOHPJNOCCMD()
		{
			return ((::FJKGDHKKDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_HOHPJNOCCMD_OFFSET))(this);
		}

		::System::Void IHGCIGEDNAB(::FJKGDHKKDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKGDHKKDFF*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_IHGCIGEDNAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIMJKAMHLMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIMJKAMHLMJ*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIMJKAMHLMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMJKAMHLMJ*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
