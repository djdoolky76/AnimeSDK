#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKFKPPNGCOD;
class ONKDAPOKGAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKFKPPNGCOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE67D10)
#define OKFKPPNGCOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE68030)
#define OKFKPPNGCOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE677B0)
#define OKFKPPNGCOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE67680)
#define OKFKPPNGCOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE675F0)
#define OKFKPPNGCOD_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1DE67810)
#define OKFKPPNGCOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE678A0)
#define OKFKPPNGCOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE67840)
#define OKFKPPNGCOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE679F0)
#define OKFKPPNGCOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE67580)
#define OKFKPPNGCOD_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1DE67800)
#define OKFKPPNGCOD_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1DE67830)
#define OKFKPPNGCOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE67F00)
#define OKFKPPNGCOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE67E40)
#define OKFKPPNGCOD_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1DE67820)
#define OKFKPPNGCOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE675E0)
#define OKFKPPNGCOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE67B40)
#define OKFKPPNGCOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE67BA0)

inline static constexpr unsigned int OKFKPPNGCOD_TypeDefinitionIndex = 29045;

	class OKFKPPNGCOD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 IDPMGABNGKO; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::ONKDAPOKGAC*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::ONKDAPOKGAC*>**)UnitySDK::FromName("", "OKFKPPNGCOD")->GetStaticField(0x1EC80);
		}

		static ::Google::Protobuf::MessageParser_1<::OKFKPPNGCOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKFKPPNGCOD*>**)UnitySDK::FromName("", "OKFKPPNGCOD")->GetStaticField(0x1EC88);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OKFKPPNGCOD")->GetStaticField(0x1EC90);
		}

		// static const ::System::Object OOGKNMKNJNI; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKFKPPNGCOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKFKPPNGCOD*))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKFKPPNGCOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKFKPPNGCOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKFKPPNGCOD*>*(*)())((::PBYTE)hIl2Cpp + OKFKPPNGCOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKFKPPNGCOD* Clone()
		{
			return ((::OKFKPPNGCOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_MJOEMBBMBON_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_KHINOGAEHBI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKFKPPNGCOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKFKPPNGCOD*))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKFKPPNGCOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKFKPPNGCOD*))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKFKPPNGCOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
