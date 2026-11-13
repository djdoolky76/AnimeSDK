#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILEPJCLBBJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILEPJCLBBJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206B2630)
#define ILEPJCLBBJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B26D0)
#define ILEPJCLBBJD_CLONE_OFFSET UNITYSDK_OFFSET(0x206B22D0)
#define ILEPJCLBBJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206B22A0)
#define ILEPJCLBBJD_CTOR_OFFSET UNITYSDK_OFFSET(0x206B2290)
#define ILEPJCLBBJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206B2430)
#define ILEPJCLBBJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x206B2340)
#define ILEPJCLBBJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206B2590)
#define ILEPJCLBBJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206B2220)
#define ILEPJCLBBJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206B2680)
#define ILEPJCLBBJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206B2650)
#define ILEPJCLBBJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206B2280)
#define ILEPJCLBBJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206B25C0)
#define ILEPJCLBBJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x206B2620)

inline static constexpr unsigned int ILEPJCLBBJD_TypeDefinitionIndex = 29223;

	class ILEPJCLBBJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ILEPJCLBBJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILEPJCLBBJD*>**)UnitySDK::FromName("", "ILEPJCLBBJD")->GetStaticField(0x4C540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILEPJCLBBJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILEPJCLBBJD*))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILEPJCLBBJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILEPJCLBBJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILEPJCLBBJD*>*(*)())((::PBYTE)hIl2Cpp + ILEPJCLBBJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILEPJCLBBJD* Clone()
		{
			return ((::ILEPJCLBBJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILEPJCLBBJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILEPJCLBBJD*))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILEPJCLBBJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILEPJCLBBJD*))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILEPJCLBBJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
