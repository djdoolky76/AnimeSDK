#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCJCLFOLBPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCJCLFOLBPP_ACCFODNGIBM_OFFSET UNITYSDK_OFFSET(0x1F72D0F0)
#define GCJCLFOLBPP_AEIKIOFLFFN_OFFSET UNITYSDK_OFFSET(0x1F72D130)
#define GCJCLFOLBPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F72D6F0)
#define GCJCLFOLBPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F72DA50)
#define GCJCLFOLBPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F72D0C0)
#define GCJCLFOLBPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F72CF60)
#define GCJCLFOLBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F72CE80)
#define GCJCLFOLBPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F72D170)
#define GCJCLFOLBPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F72D140)
#define GCJCLFOLBPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F72D2C0)
#define GCJCLFOLBPP_HPCAHPOJFCI_OFFSET UNITYSDK_OFFSET(0x1F72D100)
#define GCJCLFOLBPP_IPNLOODDPJL_OFFSET UNITYSDK_OFFSET(0x1F72D120)
#define GCJCLFOLBPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F72CE40)
#define GCJCLFOLBPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F72D8B0)
#define GCJCLFOLBPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F72D830)
#define GCJCLFOLBPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F72CE70)
#define GCJCLFOLBPP_PCBDGKNKGOM_OFFSET UNITYSDK_OFFSET(0x1F72D110)
#define GCJCLFOLBPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F72D560)
#define GCJCLFOLBPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F72D5C0)

inline static constexpr unsigned int GCJCLFOLBPP_TypeDefinitionIndex = 29041;

	class GCJCLFOLBPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NDNGHJBCCPI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KGKIOCNFOKC; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BDGCDOLKFGE; // 0x28
		::System::UInt32 NGKCLFFLFHH; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ENKNBEOKFOI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GCJCLFOLBPP")->GetStaticField(0x1F710);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BJPCKBEDNKL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GCJCLFOLBPP")->GetStaticField(0x1F718);
		}

		static ::Google::Protobuf::MessageParser_1<::GCJCLFOLBPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GCJCLFOLBPP*>**)UnitySDK::FromName("", "GCJCLFOLBPP")->GetStaticField(0x1F720);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOPPGGIHODE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GCJCLFOLBPP")->GetStaticField(0x1F728);
		}

		// static const ::System::Object NGJDKJLONGH; // 0x0
		// static const ::System::Object POKMFLNBOBN; // 0x0
		// static const ::System::Object HFKGGMKPDPH; // 0x0
		// static const ::System::Object INCJMCAEIIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCJCLFOLBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCJCLFOLBPP*))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCJCLFOLBPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GCJCLFOLBPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GCJCLFOLBPP*>*(*)())((::PBYTE)hIl2Cpp + GCJCLFOLBPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCJCLFOLBPP* Clone()
		{
			return ((::GCJCLFOLBPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACCFODNGIBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_ACCFODNGIBM_OFFSET))(this);
		}

		::System::Void HPCAHPOJFCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_HPCAHPOJFCI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PCBDGKNKGOM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_PCBDGKNKGOM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPNLOODDPJL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_IPNLOODDPJL_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AEIKIOFLFFN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_AEIKIOFLFFN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCJCLFOLBPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCJCLFOLBPP*))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCJCLFOLBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCJCLFOLBPP*))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCJCLFOLBPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
