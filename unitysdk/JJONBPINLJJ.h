#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJONBPINLJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJONBPINLJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA93DA0)
#define JJONBPINLJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA93E40)
#define JJONBPINLJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA93A90)
#define JJONBPINLJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA93A60)
#define JJONBPINLJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA93A50)
#define JJONBPINLJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA93BA0)
#define JJONBPINLJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA93AD0)
#define JJONBPINLJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA93D00)
#define JJONBPINLJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA93A10)
#define JJONBPINLJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA93DF0)
#define JJONBPINLJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA93DC0)
#define JJONBPINLJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA93A40)
#define JJONBPINLJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA93D30)
#define JJONBPINLJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA93D90)

inline static constexpr unsigned int JJONBPINLJJ_TypeDefinitionIndex = 27749;

	class JJONBPINLJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JJONBPINLJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJONBPINLJJ*>**)UnitySDK::FromName("", "JJONBPINLJJ")->GetStaticField(0x4FF30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJONBPINLJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJONBPINLJJ*))((::PBYTE)hIl2Cpp + JJONBPINLJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJONBPINLJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJONBPINLJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJONBPINLJJ*>*(*)())((::PBYTE)hIl2Cpp + JJONBPINLJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJONBPINLJJ* Clone()
		{
			return ((::JJONBPINLJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJONBPINLJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJONBPINLJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJONBPINLJJ*))((::PBYTE)hIl2Cpp + JJONBPINLJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJONBPINLJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJONBPINLJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJONBPINLJJ*))((::PBYTE)hIl2Cpp + JJONBPINLJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJONBPINLJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
