#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCOONGAKCMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCOONGAKCMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDEC3D0)
#define OCOONGAKCMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC470)
#define OCOONGAKCMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDEC0C0)
#define OCOONGAKCMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDEC090)
#define OCOONGAKCMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC080)
#define OCOONGAKCMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDEC1D0)
#define OCOONGAKCMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDEC100)
#define OCOONGAKCMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDEC330)
#define OCOONGAKCMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDEC040)
#define OCOONGAKCMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDEC420)
#define OCOONGAKCMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDEC3F0)
#define OCOONGAKCMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC070)
#define OCOONGAKCMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDEC360)
#define OCOONGAKCMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDEC3C0)

inline static constexpr unsigned int OCOONGAKCMI_TypeDefinitionIndex = 29651;

	class OCOONGAKCMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OCOONGAKCMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCOONGAKCMI*>**)UnitySDK::FromName("", "OCOONGAKCMI")->GetStaticField(0x11CA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCOONGAKCMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOONGAKCMI*))((::PBYTE)hIl2Cpp + OCOONGAKCMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOONGAKCMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCOONGAKCMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCOONGAKCMI*>*(*)())((::PBYTE)hIl2Cpp + OCOONGAKCMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCOONGAKCMI* Clone()
		{
			return ((::OCOONGAKCMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCOONGAKCMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCOONGAKCMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCOONGAKCMI*))((::PBYTE)hIl2Cpp + OCOONGAKCMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCOONGAKCMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCOONGAKCMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOONGAKCMI*))((::PBYTE)hIl2Cpp + OCOONGAKCMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCOONGAKCMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
