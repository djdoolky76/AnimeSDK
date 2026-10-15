#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMJHLGKLHP.h"
#include "unitysdk/System/Object.h"
class HLHHLIGPNOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLHHLIGPNOM_ABJBCBDIBAA_OFFSET UNITYSDK_OFFSET(0x1E5BF5A0)
#define HLHHLIGPNOM_BIBNJBBDGEH_OFFSET UNITYSDK_OFFSET(0x1E5BF5D0)
#define HLHHLIGPNOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BFBC0)
#define HLHHLIGPNOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C0070)
#define HLHHLIGPNOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BF510)
#define HLHHLIGPNOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BF400)
#define HLHHLIGPNOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BF370)
#define HLHHLIGPNOM_EHFFEJPNIIH_OFFSET UNITYSDK_OFFSET(0x1E5BF590)
#define HLHHLIGPNOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BF660)
#define HLHHLIGPNOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BF600)
#define HLHHLIGPNOM_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E5BF5F0)
#define HLHHLIGPNOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BF710)
#define HLHHLIGPNOM_ILFAOAJEEBL_OFFSET UNITYSDK_OFFSET(0x1E5BF560)
#define HLHHLIGPNOM_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E5BF5E0)
#define HLHHLIGPNOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BF300)
#define HLHHLIGPNOM_KFCDHBIOAFD_OFFSET UNITYSDK_OFFSET(0x1E5BF580)
#define HLHHLIGPNOM_LHCEPOOHGFK_OFFSET UNITYSDK_OFFSET(0x1E5BF570)
#define HLHHLIGPNOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BFEE0)
#define HLHHLIGPNOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BFE60)
#define HLHHLIGPNOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BF360)
#define HLHHLIGPNOM_PKFCDNFPPEK_OFFSET UNITYSDK_OFFSET(0x1E5BF5C0)
#define HLHHLIGPNOM_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x1E5BF5B0)
#define HLHHLIGPNOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BF8E0)
#define HLHHLIGPNOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BF940)

	class HLHHLIGPNOM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LFJDOMHMKED; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPAACBEDJAL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 FFEOOHLDDAP; // 0x28
		::IHMJHLGKLHP HDAIPLJBGAB; // 0x2C
		::System::Boolean KEKMPIGIACD; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 LCOIIMGPOBE; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLHHLIGPNOM")->GetStaticField(0x480B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CEBEHEIEICH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLHHLIGPNOM")->GetStaticField(0x480B8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OCMBCBOMPKP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLHHLIGPNOM")->GetStaticField(0x480C0);
		}

		// static const ::System::Object PFEJIKGIEIM; // 0x0
		// static const ::System::Object NMLOMKAPECC; // 0x0
		// static const ::System::Object OPHEPKPJAFK; // 0x0
		// static const ::System::Object FMIPKDJBPDG; // 0x0
		// static const ::System::Object KMOFHOHDCFM; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLHHLIGPNOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLHHLIGPNOM*))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLHHLIGPNOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLHHLIGPNOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLHHLIGPNOM* Clone()
		{
			return ((::HLHHLIGPNOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_CLONE_OFFSET))(this);
		}

		::System::Boolean ILFAOAJEEBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_ILFAOAJEEBL_OFFSET))(this);
		}

		::System::Void LHCEPOOHGFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_LHCEPOOHGFK_OFFSET))(this, a1);
		}

		::System::UInt32 KFCDHBIOAFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_KFCDHBIOAFD_OFFSET))(this);
		}

		::System::Void EHFFEJPNIIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_EHFFEJPNIIH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ABJBCBDIBAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_ABJBCBDIBAA_OFFSET))(this);
		}

		::System::UInt32 PLNCKLJOJME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Void PKFCDNFPPEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_PKFCDNFPPEK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BIBNJBBDGEH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_BIBNJBBDGEH_OFFSET))(this);
		}

		::IHMJHLGKLHP IOIFPHAMFDF()
		{
			return ((::IHMJHLGKLHP(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::IHMJHLGKLHP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLHHLIGPNOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLHHLIGPNOM*))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLHHLIGPNOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLHHLIGPNOM*))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLHHLIGPNOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
