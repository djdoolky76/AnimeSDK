#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKJENOJIFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APKJENOJIFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6793C0)
#define APKJENOJIFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E679460)
#define APKJENOJIFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6790B0)
#define APKJENOJIFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E679080)
#define APKJENOJIFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E679070)
#define APKJENOJIFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6791C0)
#define APKJENOJIFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6790F0)
#define APKJENOJIFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E679320)
#define APKJENOJIFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E679030)
#define APKJENOJIFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E679410)
#define APKJENOJIFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6793E0)
#define APKJENOJIFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E679060)
#define APKJENOJIFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E679350)
#define APKJENOJIFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6793B0)

inline static constexpr unsigned int APKJENOJIFD_TypeDefinitionIndex = 29954;

	class APKJENOJIFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "APKJENOJIFD")->GetStaticField(0x42640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APKJENOJIFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKJENOJIFD*))((::PBYTE)hIl2Cpp + APKJENOJIFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APKJENOJIFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + APKJENOJIFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APKJENOJIFD* Clone()
		{
			return ((::APKJENOJIFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APKJENOJIFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APKJENOJIFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APKJENOJIFD*))((::PBYTE)hIl2Cpp + APKJENOJIFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APKJENOJIFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APKJENOJIFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKJENOJIFD*))((::PBYTE)hIl2Cpp + APKJENOJIFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APKJENOJIFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
