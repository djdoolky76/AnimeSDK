#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGPNJKENONA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGPNJKENONA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC45B0)
#define BGPNJKENONA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC4650)
#define BGPNJKENONA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC42A0)
#define BGPNJKENONA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC4270)
#define BGPNJKENONA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC4260)
#define BGPNJKENONA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC43B0)
#define BGPNJKENONA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC42E0)
#define BGPNJKENONA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC4510)
#define BGPNJKENONA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC4220)
#define BGPNJKENONA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC4600)
#define BGPNJKENONA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC45D0)
#define BGPNJKENONA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC4250)
#define BGPNJKENONA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC4540)
#define BGPNJKENONA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC45A0)

inline static constexpr unsigned int BGPNJKENONA_TypeDefinitionIndex = 26075;

	class BGPNJKENONA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BGPNJKENONA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGPNJKENONA*>**)UnitySDK::FromName("", "BGPNJKENONA")->GetStaticField(0x55F20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGPNJKENONA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGPNJKENONA*))((::PBYTE)hIl2Cpp + BGPNJKENONA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGPNJKENONA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGPNJKENONA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGPNJKENONA*>*(*)())((::PBYTE)hIl2Cpp + BGPNJKENONA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGPNJKENONA* Clone()
		{
			return ((::BGPNJKENONA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGPNJKENONA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGPNJKENONA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGPNJKENONA*))((::PBYTE)hIl2Cpp + BGPNJKENONA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGPNJKENONA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGPNJKENONA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGPNJKENONA*))((::PBYTE)hIl2Cpp + BGPNJKENONA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGPNJKENONA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
