#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCKGEKPBCGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCKGEKPBCGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E90A2C0)
#define BCKGEKPBCGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E90A360)
#define BCKGEKPBCGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E909FB0)
#define BCKGEKPBCGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E909F80)
#define BCKGEKPBCGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E909F70)
#define BCKGEKPBCGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E90A0C0)
#define BCKGEKPBCGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E909FF0)
#define BCKGEKPBCGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E90A220)
#define BCKGEKPBCGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E909F30)
#define BCKGEKPBCGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E90A310)
#define BCKGEKPBCGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E90A2E0)
#define BCKGEKPBCGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E909F60)
#define BCKGEKPBCGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E90A250)
#define BCKGEKPBCGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E90A2B0)

inline static constexpr unsigned int BCKGEKPBCGD_TypeDefinitionIndex = 29742;

	class BCKGEKPBCGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BCKGEKPBCGD")->GetStaticField(0x3BC90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCKGEKPBCGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCKGEKPBCGD*))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKGEKPBCGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BCKGEKPBCGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCKGEKPBCGD* Clone()
		{
			return ((::BCKGEKPBCGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCKGEKPBCGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCKGEKPBCGD*))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCKGEKPBCGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCKGEKPBCGD*))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCKGEKPBCGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
