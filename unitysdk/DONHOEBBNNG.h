#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DONHOEBBNNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DONHOEBBNNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2054B0)
#define DONHOEBBNNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E205550)
#define DONHOEBBNNG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2051A0)
#define DONHOEBBNNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E205170)
#define DONHOEBBNNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E205160)
#define DONHOEBBNNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2052B0)
#define DONHOEBBNNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2051E0)
#define DONHOEBBNNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E205410)
#define DONHOEBBNNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E205120)
#define DONHOEBBNNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E205500)
#define DONHOEBBNNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2054D0)
#define DONHOEBBNNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E205150)
#define DONHOEBBNNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E205440)
#define DONHOEBBNNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2054A0)

	class DONHOEBBNNG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DONHOEBBNNG")->GetStaticField(0x42300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DONHOEBBNNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DONHOEBBNNG*))((::PBYTE)hIl2Cpp + DONHOEBBNNG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DONHOEBBNNG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DONHOEBBNNG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DONHOEBBNNG* Clone()
		{
			return ((::DONHOEBBNNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DONHOEBBNNG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DONHOEBBNNG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DONHOEBBNNG*))((::PBYTE)hIl2Cpp + DONHOEBBNNG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DONHOEBBNNG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DONHOEBBNNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DONHOEBBNNG*))((::PBYTE)hIl2Cpp + DONHOEBBNNG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DONHOEBBNNG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
