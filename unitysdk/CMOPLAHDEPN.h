#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMOPLAHDEPN;
class LBKMCGDMNJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMOPLAHDEPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E105510)
#define CMOPLAHDEPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E105920)
#define CMOPLAHDEPN_CHAFOPGLICD_OFFSET UNITYSDK_OFFSET(0x1E105030)
#define CMOPLAHDEPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E104FF0)
#define CMOPLAHDEPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E104EF0)
#define CMOPLAHDEPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E104E70)
#define CMOPLAHDEPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1050B0)
#define CMOPLAHDEPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E105080)
#define CMOPLAHDEPN_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E105050)
#define CMOPLAHDEPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E105210)
#define CMOPLAHDEPN_HFOKLPOEFJM_OFFSET UNITYSDK_OFFSET(0x1E105070)
#define CMOPLAHDEPN_HMPGKPMHEDF_OFFSET UNITYSDK_OFFSET(0x1E105060)
#define CMOPLAHDEPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E104E30)
#define CMOPLAHDEPN_MDCPLOEONPG_OFFSET UNITYSDK_OFFSET(0x1E105020)
#define CMOPLAHDEPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1057B0)
#define CMOPLAHDEPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1056E0)
#define CMOPLAHDEPN_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E105040)
#define CMOPLAHDEPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E104E60)
#define CMOPLAHDEPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E105350)
#define CMOPLAHDEPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1053B0)

inline static constexpr unsigned int CMOPLAHDEPN_TypeDefinitionIndex = 26974;

	class CMOPLAHDEPN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ANLOFEJACIF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* EPOLBMGHIEE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 GFMHFBDKDOE; // 0x28
		::System::UInt32 OIJAOMMHCDA; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_HPLPADKKELP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CMOPLAHDEPN")->GetStaticField(0x1E930);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CMOPLAHDEPN")->GetStaticField(0x1E938);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KCAPMKNIJLM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CMOPLAHDEPN")->GetStaticField(0x1E940);
		}

		// static const ::System::Object EPOLDFHNNFN; // 0x0
		// static const ::System::Object JKFLAJKLODN; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object HLMDHFNCJGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMOPLAHDEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMOPLAHDEPN*))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMOPLAHDEPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CMOPLAHDEPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMOPLAHDEPN* Clone()
		{
			return ((::CMOPLAHDEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MDCPLOEONPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_MDCPLOEONPG_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* CHAFOPGLICD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_CHAFOPGLICD_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::UInt32 HMPGKPMHEDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_HMPGKPMHEDF_OFFSET))(this);
		}

		::System::Void HFOKLPOEFJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_HFOKLPOEFJM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMOPLAHDEPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMOPLAHDEPN*))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMOPLAHDEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMOPLAHDEPN*))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMOPLAHDEPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
