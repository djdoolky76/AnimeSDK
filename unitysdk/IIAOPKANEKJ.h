#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIAOPKANEKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIAOPKANEKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E684850)
#define IIAOPKANEKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6848F0)
#define IIAOPKANEKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E684540)
#define IIAOPKANEKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E684510)
#define IIAOPKANEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E684500)
#define IIAOPKANEKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E684650)
#define IIAOPKANEKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E684580)
#define IIAOPKANEKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6847B0)
#define IIAOPKANEKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6844C0)
#define IIAOPKANEKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6848A0)
#define IIAOPKANEKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E684870)
#define IIAOPKANEKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6844F0)
#define IIAOPKANEKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6847E0)
#define IIAOPKANEKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E684840)

inline static constexpr unsigned int IIAOPKANEKJ_TypeDefinitionIndex = 28519;

	class IIAOPKANEKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IIAOPKANEKJ")->GetStaticField(0x50040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIAOPKANEKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAOPKANEKJ*))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIAOPKANEKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IIAOPKANEKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIAOPKANEKJ* Clone()
		{
			return ((::IIAOPKANEKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIAOPKANEKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIAOPKANEKJ*))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIAOPKANEKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAOPKANEKJ*))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIAOPKANEKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
