#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFNMDDJOJEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFNMDDJOJEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE4C3E0)
#define OFNMDDJOJEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C480)
#define OFNMDDJOJEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE4C0D0)
#define OFNMDDJOJEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4C0A0)
#define OFNMDDJOJEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C090)
#define OFNMDDJOJEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE4C1E0)
#define OFNMDDJOJEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE4C110)
#define OFNMDDJOJEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE4C340)
#define OFNMDDJOJEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE4C050)
#define OFNMDDJOJEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE4C430)
#define OFNMDDJOJEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE4C400)
#define OFNMDDJOJEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C080)
#define OFNMDDJOJEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE4C370)
#define OFNMDDJOJEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE4C3D0)

	class OFNMDDJOJEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFNMDDJOJEO")->GetStaticField(0x17B70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFNMDDJOJEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFNMDDJOJEO*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFNMDDJOJEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFNMDDJOJEO* Clone()
		{
			return ((::OFNMDDJOJEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFNMDDJOJEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFNMDDJOJEO*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFNMDDJOJEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFNMDDJOJEO*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
