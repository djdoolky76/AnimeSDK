#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class HKGJBAGOHFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKGJBAGOHFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B1CE0)
#define HKGJBAGOHFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B20B0)
#define HKGJBAGOHFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B1930)
#define HKGJBAGOHFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B1860)
#define HKGJBAGOHFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B1800)
#define HKGJBAGOHFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B19B0)
#define HKGJBAGOHFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B1980)
#define HKGJBAGOHFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B1B00)
#define HKGJBAGOHFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B17C0)
#define HKGJBAGOHFH_LDIHFNNNMMC_OFFSET UNITYSDK_OFFSET(0x1E5B1970)
#define HKGJBAGOHFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B1EB0)
#define HKGJBAGOHFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B1DC0)
#define HKGJBAGOHFH_PBLIKLGKJHO_OFFSET UNITYSDK_OFFSET(0x1E5B1960)
#define HKGJBAGOHFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B17F0)
#define HKGJBAGOHFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B1B90)
#define HKGJBAGOHFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B1BF0)

	class HKGJBAGOHFH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* CIFDDANBGAG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* DANBIMJCMMA; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HKGJBAGOHFH")->GetStaticField(0x452A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KNOGCAIIBIL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HKGJBAGOHFH")->GetStaticField(0x452A8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FLENMLAMDHA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HKGJBAGOHFH")->GetStaticField(0x452B0);
		}

		// static const ::System::Object CJHFAFOPIKE; // 0x0
		// static const ::System::Object MHADEMDDEIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKGJBAGOHFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKGJBAGOHFH*))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKGJBAGOHFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HKGJBAGOHFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKGJBAGOHFH* Clone()
		{
			return ((::HKGJBAGOHFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* PBLIKLGKJHO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_PBLIKLGKJHO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* LDIHFNNNMMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_LDIHFNNNMMC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKGJBAGOHFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKGJBAGOHFH*))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKGJBAGOHFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKGJBAGOHFH*))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKGJBAGOHFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
