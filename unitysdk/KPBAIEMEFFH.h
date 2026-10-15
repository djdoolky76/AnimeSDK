#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPBAIEMEFFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPBAIEMEFFH_ABBKOEJIFCC_OFFSET UNITYSDK_OFFSET(0x1E8B4880)
#define KPBAIEMEFFH_BPOMALFGHOD_OFFSET UNITYSDK_OFFSET(0x1E8B48A0)
#define KPBAIEMEFFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B4E70)
#define KPBAIEMEFFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B52B0)
#define KPBAIEMEFFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B4820)
#define KPBAIEMEFFH_CPGKFJPFPJF_OFFSET UNITYSDK_OFFSET(0x1E8B4850)
#define KPBAIEMEFFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B4710)
#define KPBAIEMEFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B4680)
#define KPBAIEMEFFH_DFDLOJNEHME_OFFSET UNITYSDK_OFFSET(0x1E8B48C0)
#define KPBAIEMEFFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B4920)
#define KPBAIEMEFFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B48F0)
#define KPBAIEMEFFH_FEMFLAIJPMO_OFFSET UNITYSDK_OFFSET(0x1E8B48B0)
#define KPBAIEMEFFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B49D0)
#define KPBAIEMEFFH_GOOBGIJGIGC_OFFSET UNITYSDK_OFFSET(0x1E8B48D0)
#define KPBAIEMEFFH_IACIILFKBBB_OFFSET UNITYSDK_OFFSET(0x1E8B4870)
#define KPBAIEMEFFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B4640)
#define KPBAIEMEFFH_KBHPIIIEEKP_OFFSET UNITYSDK_OFFSET(0x1E8B4890)
#define KPBAIEMEFFH_KELBLIJHNBM_OFFSET UNITYSDK_OFFSET(0x1E8B4860)
#define KPBAIEMEFFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B5130)
#define KPBAIEMEFFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B50B0)
#define KPBAIEMEFFH_OJFLIHEBCPD_OFFSET UNITYSDK_OFFSET(0x1E8B48E0)
#define KPBAIEMEFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B4670)
#define KPBAIEMEFFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B4BA0)
#define KPBAIEMEFFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B4C00)

inline static constexpr unsigned int KPBAIEMEFFH_TypeDefinitionIndex = 26226;

	class KPBAIEMEFFH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OMEDJLEAPLC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFIAECHHGAP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 AAOOODBBHOB; // 0x28
		::System::UInt32 OLNIMFPBOKN; // 0x2C
		::System::Boolean DDINEKKNDIP; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 BPJFBLFLABP; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BLOHMEPHFHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KPBAIEMEFFH")->GetStaticField(0x2BED0);
		}

		static ::Google::Protobuf::MessageParser_1<::KPBAIEMEFFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPBAIEMEFFH*>**)UnitySDK::FromName("", "KPBAIEMEFFH")->GetStaticField(0x2BED8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKOLBOCHIPN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KPBAIEMEFFH")->GetStaticField(0x2BEE0);
		}

		// static const ::System::Object HEAFLLKLOPA; // 0x0
		// static const ::System::Object GJCAIGIFHOA; // 0x0
		// static const ::System::Object AJFDIPJHPOF; // 0x0
		// static const ::System::Object LKPILPOHHGH; // 0x0
		// static const ::System::Object DDAEFDMILNN; // 0x0
		// static const ::System::Object ANLFOJDAFIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPBAIEMEFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPBAIEMEFFH*))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPBAIEMEFFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPBAIEMEFFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPBAIEMEFFH*>*(*)())((::PBYTE)hIl2Cpp + KPBAIEMEFFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPBAIEMEFFH* Clone()
		{
			return ((::KPBAIEMEFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPGKFJPFPJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_CPGKFJPFPJF_OFFSET))(this);
		}

		::System::Void KELBLIJHNBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_KELBLIJHNBM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IACIILFKBBB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_IACIILFKBBB_OFFSET))(this);
		}

		::System::UInt32 ABBKOEJIFCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_ABBKOEJIFCC_OFFSET))(this);
		}

		::System::Void KBHPIIIEEKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_KBHPIIIEEKP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BPOMALFGHOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_BPOMALFGHOD_OFFSET))(this);
		}

		::System::UInt32 FEMFLAIJPMO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_FEMFLAIJPMO_OFFSET))(this);
		}

		::System::Void DFDLOJNEHME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_DFDLOJNEHME_OFFSET))(this, a1);
		}

		::System::Boolean GOOBGIJGIGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_GOOBGIJGIGC_OFFSET))(this);
		}

		::System::Void OJFLIHEBCPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_OJFLIHEBCPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPBAIEMEFFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPBAIEMEFFH*))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPBAIEMEFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPBAIEMEFFH*))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPBAIEMEFFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
