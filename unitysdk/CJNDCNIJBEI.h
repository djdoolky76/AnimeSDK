#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJNDCNIJBEI;
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

#define CJNDCNIJBEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B75F0)
#define CJNDCNIJBEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B79A0)
#define CJNDCNIJBEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B7150)
#define CJNDCNIJBEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B7020)
#define CJNDCNIJBEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B6F90)
#define CJNDCNIJBEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B7220)
#define CJNDCNIJBEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B71C0)
#define CJNDCNIJBEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B7370)
#define CJNDCNIJBEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B6F20)
#define CJNDCNIJBEI_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E0B71A0)
#define CJNDCNIJBEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B7780)
#define CJNDCNIJBEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B76D0)
#define CJNDCNIJBEI_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E0B71B0)
#define CJNDCNIJBEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B6F80)
#define CJNDCNIJBEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B74B0)
#define CJNDCNIJBEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B7510)

inline static constexpr unsigned int CJNDCNIJBEI_TypeDefinitionIndex = 29043;

	class CJNDCNIJBEI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CJNDCNIJBEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJNDCNIJBEI*>**)UnitySDK::FromName("", "CJNDCNIJBEI")->GetStaticField(0x18D30);
		}

		static ::Google::Protobuf::FieldCodec_1<::ONKDAPOKGAC*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::ONKDAPOKGAC*>**)UnitySDK::FromName("", "CJNDCNIJBEI")->GetStaticField(0x18D38);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CJNDCNIJBEI")->GetStaticField(0x18D40);
		}

		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJNDCNIJBEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJNDCNIJBEI*))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJNDCNIJBEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJNDCNIJBEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJNDCNIJBEI*>*(*)())((::PBYTE)hIl2Cpp + CJNDCNIJBEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJNDCNIJBEI* Clone()
		{
			return ((::CJNDCNIJBEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_KHINOGAEHBI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJNDCNIJBEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJNDCNIJBEI*))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJNDCNIJBEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJNDCNIJBEI*))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJNDCNIJBEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
