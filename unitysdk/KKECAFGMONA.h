#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKECAFGMONA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKECAFGMONA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E876EF0)
#define KKECAFGMONA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E876F90)
#define KKECAFGMONA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E876BE0)
#define KKECAFGMONA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E876BB0)
#define KKECAFGMONA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E876BA0)
#define KKECAFGMONA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E876CF0)
#define KKECAFGMONA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E876C20)
#define KKECAFGMONA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E876E50)
#define KKECAFGMONA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E876B60)
#define KKECAFGMONA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E876F40)
#define KKECAFGMONA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E876F10)
#define KKECAFGMONA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E876B90)
#define KKECAFGMONA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E876E80)
#define KKECAFGMONA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E876EE0)

inline static constexpr unsigned int KKECAFGMONA_TypeDefinitionIndex = 27335;

	class KKECAFGMONA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KKECAFGMONA")->GetStaticField(0x1DE70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKECAFGMONA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKECAFGMONA*))((::PBYTE)hIl2Cpp + KKECAFGMONA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKECAFGMONA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KKECAFGMONA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKECAFGMONA* Clone()
		{
			return ((::KKECAFGMONA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKECAFGMONA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKECAFGMONA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKECAFGMONA*))((::PBYTE)hIl2Cpp + KKECAFGMONA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKECAFGMONA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKECAFGMONA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKECAFGMONA*))((::PBYTE)hIl2Cpp + KKECAFGMONA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKECAFGMONA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
