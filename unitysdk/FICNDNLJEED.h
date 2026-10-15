#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FICNDNLJEED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FICNDNLJEED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E395700)
#define FICNDNLJEED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3957A0)
#define FICNDNLJEED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3953F0)
#define FICNDNLJEED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3953C0)
#define FICNDNLJEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3953B0)
#define FICNDNLJEED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E395500)
#define FICNDNLJEED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E395430)
#define FICNDNLJEED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E395660)
#define FICNDNLJEED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E395370)
#define FICNDNLJEED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E395750)
#define FICNDNLJEED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E395720)
#define FICNDNLJEED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3953A0)
#define FICNDNLJEED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E395690)
#define FICNDNLJEED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3956F0)

	class FICNDNLJEED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FICNDNLJEED")->GetStaticField(0x5FF00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FICNDNLJEED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICNDNLJEED*))((::PBYTE)hIl2Cpp + FICNDNLJEED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FICNDNLJEED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FICNDNLJEED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FICNDNLJEED* Clone()
		{
			return ((::FICNDNLJEED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FICNDNLJEED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FICNDNLJEED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FICNDNLJEED*))((::PBYTE)hIl2Cpp + FICNDNLJEED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FICNDNLJEED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FICNDNLJEED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICNDNLJEED*))((::PBYTE)hIl2Cpp + FICNDNLJEED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FICNDNLJEED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
