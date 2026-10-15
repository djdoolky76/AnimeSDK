#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPOIHCAEPIP.h"
#include "unitysdk/System/Object.h"
class DBCAGGFPCGF;
class EAJEMNNNEBM;
class FCHMJNONHPE;
class NPDKKNACMHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBCAGGFPCGF_AGKKKGFPONC_OFFSET UNITYSDK_OFFSET(0x1E154F20)
#define DBCAGGFPCGF_AGPKNOLNFII_OFFSET UNITYSDK_OFFSET(0x1E154F50)
#define DBCAGGFPCGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1553D0)
#define DBCAGGFPCGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E155880)
#define DBCAGGFPCGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E154EE0)
#define DBCAGGFPCGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E154DC0)
#define DBCAGGFPCGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E154D40)
#define DBCAGGFPCGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E154F90)
#define DBCAGGFPCGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E154F60)
#define DBCAGGFPCGF_FBFKAMDDMHL_OFFSET UNITYSDK_OFFSET(0x1E154F40)
#define DBCAGGFPCGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E155110)
#define DBCAGGFPCGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E154D00)
#define DBCAGGFPCGF_KHOKANPMAMP_OFFSET UNITYSDK_OFFSET(0x1E154F10)
#define DBCAGGFPCGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E155720)
#define DBCAGGFPCGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1555C0)
#define DBCAGGFPCGF_MPDCJCAILOI_OFFSET UNITYSDK_OFFSET(0x1E154F30)
#define DBCAGGFPCGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E154D30)
#define DBCAGGFPCGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1551C0)
#define DBCAGGFPCGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E155220)

	class DBCAGGFPCGF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EAJEMNNNEBM*>* DMCJFOLDMOD; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NPDKKNACMHC*>* IEMADCNLMAB; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::FCHMJNONHPE*>* LMJPDOJCLAO; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::FPOIHCAEPIP OLOMHPFGGJI; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_BCEMFBEJEDG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DBCAGGFPCGF")->GetStaticField(0x24FC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AHIFCLFJAEC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DBCAGGFPCGF")->GetStaticField(0x24FC8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DAOGJCCJBII()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DBCAGGFPCGF")->GetStaticField(0x24FD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBCAGGFPCGF")->GetStaticField(0x24FD8);
		}

		// static const ::System::Object COJJAEJPODD; // 0x0
		// static const ::System::Object EFOJJINDEML; // 0x0
		// static const ::System::Object KGCNGDEJFKI; // 0x0
		// static const ::System::Object GLFNMGGLKCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBCAGGFPCGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBCAGGFPCGF*))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBCAGGFPCGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBCAGGFPCGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBCAGGFPCGF* Clone()
		{
			return ((::DBCAGGFPCGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EAJEMNNNEBM*>* KHOKANPMAMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EAJEMNNNEBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_KHOKANPMAMP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NPDKKNACMHC*>* AGKKKGFPONC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NPDKKNACMHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_AGKKKGFPONC_OFFSET))(this);
		}

		::FPOIHCAEPIP MPDCJCAILOI()
		{
			return ((::FPOIHCAEPIP(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_MPDCJCAILOI_OFFSET))(this);
		}

		::System::Void FBFKAMDDMHL(::FPOIHCAEPIP a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPOIHCAEPIP))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_FBFKAMDDMHL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FCHMJNONHPE*>* AGPKNOLNFII()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FCHMJNONHPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_AGPKNOLNFII_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBCAGGFPCGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBCAGGFPCGF*))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBCAGGFPCGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBCAGGFPCGF*))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBCAGGFPCGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
