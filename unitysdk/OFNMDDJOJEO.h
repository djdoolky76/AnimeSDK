#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFNMDDJOJEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFNMDDJOJEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1ECB0)
#define OFNMDDJOJEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1ED50)
#define OFNMDDJOJEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1E9A0)
#define OFNMDDJOJEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1E970)
#define OFNMDDJOJEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E960)
#define OFNMDDJOJEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1EAB0)
#define OFNMDDJOJEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1E9E0)
#define OFNMDDJOJEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1EC10)
#define OFNMDDJOJEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE1E920)
#define OFNMDDJOJEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1ED00)
#define OFNMDDJOJEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1ECD0)
#define OFNMDDJOJEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E950)
#define OFNMDDJOJEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1EC40)
#define OFNMDDJOJEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1ECA0)

inline static constexpr unsigned int OFNMDDJOJEO_TypeDefinitionIndex = 31605;

	class OFNMDDJOJEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OFNMDDJOJEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFNMDDJOJEO*>**)UnitySDK::FromName("", "OFNMDDJOJEO")->GetStaticField(0x171C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFNMDDJOJEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFNMDDJOJEO*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFNMDDJOJEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFNMDDJOJEO*>*(*)())((::PBYTE)hIl2Cpp + OFNMDDJOJEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFNMDDJOJEO* Clone()
		{
			return ((::OFNMDDJOJEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFNMDDJOJEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFNMDDJOJEO*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFNMDDJOJEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFNMDDJOJEO*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFNMDDJOJEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
