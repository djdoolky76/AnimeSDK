#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHDBOHHNOME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHDBOHHNOME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E485D70)
#define GHDBOHHNOME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E485E10)
#define GHDBOHHNOME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E485A60)
#define GHDBOHHNOME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E485A30)
#define GHDBOHHNOME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E485A20)
#define GHDBOHHNOME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E485B70)
#define GHDBOHHNOME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E485AA0)
#define GHDBOHHNOME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E485CD0)
#define GHDBOHHNOME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4859E0)
#define GHDBOHHNOME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E485DC0)
#define GHDBOHHNOME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E485D90)
#define GHDBOHHNOME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E485A10)
#define GHDBOHHNOME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E485D00)
#define GHDBOHHNOME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E485D60)

	class GHDBOHHNOME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHDBOHHNOME")->GetStaticField(0x16BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHDBOHHNOME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHDBOHHNOME*))((::PBYTE)hIl2Cpp + GHDBOHHNOME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHDBOHHNOME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHDBOHHNOME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHDBOHHNOME* Clone()
		{
			return ((::GHDBOHHNOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHDBOHHNOME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHDBOHHNOME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHDBOHHNOME*))((::PBYTE)hIl2Cpp + GHDBOHHNOME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHDBOHHNOME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHDBOHHNOME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHDBOHHNOME*))((::PBYTE)hIl2Cpp + GHDBOHHNOME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHDBOHHNOME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
