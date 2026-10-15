#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEAGACLNDFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEAGACLNDFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2368C0)
#define EEAGACLNDFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E236AE0)
#define EEAGACLNDFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E236510)
#define EEAGACLNDFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2364E0)
#define EEAGACLNDFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2364D0)
#define EEAGACLNDFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E236640)
#define EEAGACLNDFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E236570)
#define EEAGACLNDFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2367B0)
#define EEAGACLNDFN_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E236560)
#define EEAGACLNDFN_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E236550)
#define EEAGACLNDFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E236490)
#define EEAGACLNDFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E236980)
#define EEAGACLNDFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E236950)
#define EEAGACLNDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2364C0)
#define EEAGACLNDFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2367E0)
#define EEAGACLNDFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E236840)

inline static constexpr unsigned int EEAGACLNDFN_TypeDefinitionIndex = 28030;

	class EEAGACLNDFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJPNGCJCMEB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EEAGACLNDFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EEAGACLNDFN*>**)UnitySDK::FromName("", "EEAGACLNDFN")->GetStaticField(0x44790);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEAGACLNDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEAGACLNDFN*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEAGACLNDFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EEAGACLNDFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EEAGACLNDFN*>*(*)())((::PBYTE)hIl2Cpp + EEAGACLNDFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEAGACLNDFN* Clone()
		{
			return ((::EEAGACLNDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEAGACLNDFN_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEAGACLNDFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEAGACLNDFN*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEAGACLNDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEAGACLNDFN*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEAGACLNDFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
