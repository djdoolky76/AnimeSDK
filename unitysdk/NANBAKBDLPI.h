#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NANBAKBDLPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NANBAKBDLPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC7AB0)
#define NANBAKBDLPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7E00)
#define NANBAKBDLPI_CLEGNGPPBEH_OFFSET UNITYSDK_OFFSET(0x1EAC75B0)
#define NANBAKBDLPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC7540)
#define NANBAKBDLPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC7450)
#define NANBAKBDLPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC73C0)
#define NANBAKBDLPI_EEMPLIKCOHD_OFFSET UNITYSDK_OFFSET(0x1EAC75A0)
#define NANBAKBDLPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC7600)
#define NANBAKBDLPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC75D0)
#define NANBAKBDLPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC7720)
#define NANBAKBDLPI_GJPBIEFIKMB_OFFSET UNITYSDK_OFFSET(0x1EAC7580)
#define NANBAKBDLPI_HFKGMKMPOHK_OFFSET UNITYSDK_OFFSET(0x1EAC7570)
#define NANBAKBDLPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC7380)
#define NANBAKBDLPI_KEDMOJJMIEO_OFFSET UNITYSDK_OFFSET(0x1EAC75C0)
#define NANBAKBDLPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC7CD0)
#define NANBAKBDLPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC7C60)
#define NANBAKBDLPI_OGBMEFEAGBE_OFFSET UNITYSDK_OFFSET(0x1EAC7590)
#define NANBAKBDLPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC73B0)
#define NANBAKBDLPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC78F0)
#define NANBAKBDLPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC7950)

	class NANBAKBDLPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EOBCADDMGJO; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FACNEACHCCK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 HPLOAOHNKOE; // 0x28
		::System::UInt32 NGJGDGEKHAP; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_OPBDMDGBPHL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NANBAKBDLPI")->GetStaticField(0x5CA30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IGFDJPIFGMG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NANBAKBDLPI")->GetStaticField(0x5CA38);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NANBAKBDLPI")->GetStaticField(0x5CA40);
		}

		// static const ::System::Object CPNPFHFCDEA; // 0x0
		// static const ::System::Object MMCPMHMOKNK; // 0x0
		// static const ::System::Object HLCCNOOFGOA; // 0x0
		// static const ::System::Object BBFNFPPOCHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NANBAKBDLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NANBAKBDLPI*))((::PBYTE)hIl2Cpp + NANBAKBDLPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NANBAKBDLPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NANBAKBDLPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NANBAKBDLPI* Clone()
		{
			return ((::NANBAKBDLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HFKGMKMPOHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_HFKGMKMPOHK_OFFSET))(this);
		}

		::System::UInt32 GJPBIEFIKMB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_GJPBIEFIKMB_OFFSET))(this);
		}

		::System::Void OGBMEFEAGBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NANBAKBDLPI_OGBMEFEAGBE_OFFSET))(this, a1);
		}

		::System::UInt32 EEMPLIKCOHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_EEMPLIKCOHD_OFFSET))(this);
		}

		::System::Void CLEGNGPPBEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NANBAKBDLPI_CLEGNGPPBEH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEDMOJJMIEO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_KEDMOJJMIEO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NANBAKBDLPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NANBAKBDLPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NANBAKBDLPI*))((::PBYTE)hIl2Cpp + NANBAKBDLPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NANBAKBDLPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NANBAKBDLPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NANBAKBDLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NANBAKBDLPI*))((::PBYTE)hIl2Cpp + NANBAKBDLPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NANBAKBDLPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
