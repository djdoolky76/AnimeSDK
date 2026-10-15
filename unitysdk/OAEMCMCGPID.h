#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAEMCMCGPID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OAEMCMCGPID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA6BF0)
#define OAEMCMCGPID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA6C90)
#define OAEMCMCGPID_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA68E0)
#define OAEMCMCGPID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA68B0)
#define OAEMCMCGPID_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA68A0)
#define OAEMCMCGPID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA69F0)
#define OAEMCMCGPID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA6920)
#define OAEMCMCGPID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA6B50)
#define OAEMCMCGPID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA6860)
#define OAEMCMCGPID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA6C40)
#define OAEMCMCGPID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA6C10)
#define OAEMCMCGPID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA6890)
#define OAEMCMCGPID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA6B80)
#define OAEMCMCGPID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA6BE0)

inline static constexpr unsigned int OAEMCMCGPID_TypeDefinitionIndex = 33680;

	class OAEMCMCGPID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OAEMCMCGPID")->GetStaticField(0xF810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OAEMCMCGPID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAEMCMCGPID*))((::PBYTE)hIl2Cpp + OAEMCMCGPID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAEMCMCGPID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OAEMCMCGPID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OAEMCMCGPID* Clone()
		{
			return ((::OAEMCMCGPID*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAEMCMCGPID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OAEMCMCGPID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAEMCMCGPID*))((::PBYTE)hIl2Cpp + OAEMCMCGPID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OAEMCMCGPID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OAEMCMCGPID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAEMCMCGPID*))((::PBYTE)hIl2Cpp + OAEMCMCGPID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OAEMCMCGPID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
