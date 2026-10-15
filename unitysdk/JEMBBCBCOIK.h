#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEMBBCBCOIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEMBBCBCOIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71FAA0)
#define JEMBBCBCOIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71FB40)
#define JEMBBCBCOIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71F790)
#define JEMBBCBCOIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71F760)
#define JEMBBCBCOIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71F750)
#define JEMBBCBCOIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71F8A0)
#define JEMBBCBCOIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71F7D0)
#define JEMBBCBCOIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71FA00)
#define JEMBBCBCOIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71F710)
#define JEMBBCBCOIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71FAF0)
#define JEMBBCBCOIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71FAC0)
#define JEMBBCBCOIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71F740)
#define JEMBBCBCOIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71FA30)
#define JEMBBCBCOIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71FA90)

inline static constexpr unsigned int JEMBBCBCOIK_TypeDefinitionIndex = 27933;

	class JEMBBCBCOIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JEMBBCBCOIK")->GetStaticField(0x5F2F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEMBBCBCOIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEMBBCBCOIK*))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMBBCBCOIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JEMBBCBCOIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEMBBCBCOIK* Clone()
		{
			return ((::JEMBBCBCOIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEMBBCBCOIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEMBBCBCOIK*))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEMBBCBCOIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEMBBCBCOIK*))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEMBBCBCOIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
