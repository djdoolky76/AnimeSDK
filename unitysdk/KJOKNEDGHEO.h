#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJOKNEDGHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJOKNEDGHEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8733F0)
#define KJOKNEDGHEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E873490)
#define KJOKNEDGHEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8730E0)
#define KJOKNEDGHEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8730B0)
#define KJOKNEDGHEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8730A0)
#define KJOKNEDGHEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8731F0)
#define KJOKNEDGHEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E873120)
#define KJOKNEDGHEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E873350)
#define KJOKNEDGHEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E873060)
#define KJOKNEDGHEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E873440)
#define KJOKNEDGHEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E873410)
#define KJOKNEDGHEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E873090)
#define KJOKNEDGHEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E873380)
#define KJOKNEDGHEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8733E0)

	class KJOKNEDGHEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KJOKNEDGHEO")->GetStaticField(0x1D560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJOKNEDGHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJOKNEDGHEO*))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJOKNEDGHEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KJOKNEDGHEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJOKNEDGHEO* Clone()
		{
			return ((::KJOKNEDGHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJOKNEDGHEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJOKNEDGHEO*))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJOKNEDGHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJOKNEDGHEO*))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJOKNEDGHEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
