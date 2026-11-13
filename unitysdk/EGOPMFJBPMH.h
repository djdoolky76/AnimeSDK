#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGOPMFJBPMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGOPMFJBPMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF84740)
#define EGOPMFJBPMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF847E0)
#define EGOPMFJBPMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF84430)
#define EGOPMFJBPMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF84400)
#define EGOPMFJBPMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF843F0)
#define EGOPMFJBPMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF84540)
#define EGOPMFJBPMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF84470)
#define EGOPMFJBPMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF846A0)
#define EGOPMFJBPMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF843B0)
#define EGOPMFJBPMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF84790)
#define EGOPMFJBPMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF84760)
#define EGOPMFJBPMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF843E0)
#define EGOPMFJBPMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF846D0)
#define EGOPMFJBPMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF84730)

inline static constexpr unsigned int EGOPMFJBPMH_TypeDefinitionIndex = 32321;

	class EGOPMFJBPMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EGOPMFJBPMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGOPMFJBPMH*>**)UnitySDK::FromName("", "EGOPMFJBPMH")->GetStaticField(0x3BDA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGOPMFJBPMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGOPMFJBPMH*))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGOPMFJBPMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGOPMFJBPMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGOPMFJBPMH*>*(*)())((::PBYTE)hIl2Cpp + EGOPMFJBPMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGOPMFJBPMH* Clone()
		{
			return ((::EGOPMFJBPMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGOPMFJBPMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGOPMFJBPMH*))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGOPMFJBPMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGOPMFJBPMH*))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGOPMFJBPMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
