#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFHACDNMNAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFHACDNMNAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE19E10)
#define OFHACDNMNAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE19EB0)
#define OFHACDNMNAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE19B00)
#define OFHACDNMNAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE19AD0)
#define OFHACDNMNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE19AC0)
#define OFHACDNMNAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE19C10)
#define OFHACDNMNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE19B40)
#define OFHACDNMNAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE19D70)
#define OFHACDNMNAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE19A80)
#define OFHACDNMNAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE19E60)
#define OFHACDNMNAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE19E30)
#define OFHACDNMNAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE19AB0)
#define OFHACDNMNAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE19DA0)
#define OFHACDNMNAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE19E00)

inline static constexpr unsigned int OFHACDNMNAL_TypeDefinitionIndex = 28109;

	class OFHACDNMNAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>**)UnitySDK::FromName("", "OFHACDNMNAL")->GetStaticField(0x169F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFHACDNMNAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFHACDNMNAL*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHACDNMNAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>*(*)())((::PBYTE)hIl2Cpp + OFHACDNMNAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFHACDNMNAL* Clone()
		{
			return ((::OFHACDNMNAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFHACDNMNAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFHACDNMNAL*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFHACDNMNAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFHACDNMNAL*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
