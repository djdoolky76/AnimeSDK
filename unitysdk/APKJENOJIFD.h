#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKJENOJIFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APKJENOJIFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64BD00)
#define APKJENOJIFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64BDA0)
#define APKJENOJIFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64B9F0)
#define APKJENOJIFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64B9C0)
#define APKJENOJIFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64B9B0)
#define APKJENOJIFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64BB00)
#define APKJENOJIFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64BA30)
#define APKJENOJIFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64BC60)
#define APKJENOJIFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64B970)
#define APKJENOJIFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64BD50)
#define APKJENOJIFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64BD20)
#define APKJENOJIFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64B9A0)
#define APKJENOJIFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64BC90)
#define APKJENOJIFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64BCF0)

inline static constexpr unsigned int APKJENOJIFD_TypeDefinitionIndex = 29954;

	class APKJENOJIFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::APKJENOJIFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APKJENOJIFD*>**)UnitySDK::FromName("", "APKJENOJIFD")->GetStaticField(0x4AA60);
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

		static ::Google::Protobuf::MessageParser_1<::APKJENOJIFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APKJENOJIFD*>*(*)())((::PBYTE)hIl2Cpp + APKJENOJIFD_JJGHOBBFNJD_OFFSET))();
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
