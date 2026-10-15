#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJHIOCKGPMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJHIOCKGPMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA49E60)
#define MJHIOCKGPMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA49F00)
#define MJHIOCKGPMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA49B50)
#define MJHIOCKGPMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA49B20)
#define MJHIOCKGPMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA49B10)
#define MJHIOCKGPMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA49C60)
#define MJHIOCKGPMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA49B90)
#define MJHIOCKGPMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA49DC0)
#define MJHIOCKGPMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA49AD0)
#define MJHIOCKGPMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA49EB0)
#define MJHIOCKGPMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA49E80)
#define MJHIOCKGPMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA49B00)
#define MJHIOCKGPMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA49DF0)
#define MJHIOCKGPMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA49E50)

inline static constexpr unsigned int MJHIOCKGPMN_TypeDefinitionIndex = 30861;

	class MJHIOCKGPMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MJHIOCKGPMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJHIOCKGPMN*>**)UnitySDK::FromName("", "MJHIOCKGPMN")->GetStaticField(0x55B60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJHIOCKGPMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJHIOCKGPMN*))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHIOCKGPMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJHIOCKGPMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJHIOCKGPMN*>*(*)())((::PBYTE)hIl2Cpp + MJHIOCKGPMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJHIOCKGPMN* Clone()
		{
			return ((::MJHIOCKGPMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJHIOCKGPMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJHIOCKGPMN*))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJHIOCKGPMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJHIOCKGPMN*))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJHIOCKGPMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
