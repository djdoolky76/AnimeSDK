#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHKDJMMGIPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHKDJMMGIPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38E220)
#define FHKDJMMGIPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38E440)
#define FHKDJMMGIPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38DE10)
#define FHKDJMMGIPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38DDE0)
#define FHKDJMMGIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38DDD0)
#define FHKDJMMGIPA_ECHLAAMPDBP_OFFSET UNITYSDK_OFFSET(0x1E38DE90)
#define FHKDJMMGIPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38DFA0)
#define FHKDJMMGIPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38DEA0)
#define FHKDJMMGIPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38E110)
#define FHKDJMMGIPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38DD60)
#define FHKDJMMGIPA_MEEIIFIJIPA_OFFSET UNITYSDK_OFFSET(0x1E38DE80)
#define FHKDJMMGIPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38E2E0)
#define FHKDJMMGIPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38E2B0)
#define FHKDJMMGIPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38DDC0)
#define FHKDJMMGIPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38E140)
#define FHKDJMMGIPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38E1A0)

inline static constexpr unsigned int FHKDJMMGIPA_TypeDefinitionIndex = 25211;

	class FHKDJMMGIPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJELCNCPJAO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FHKDJMMGIPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHKDJMMGIPA*>**)UnitySDK::FromName("", "FHKDJMMGIPA")->GetStaticField(0x5F750);
		}

		// static const ::System::Object DHNFIAGAALK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHKDJMMGIPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHKDJMMGIPA*))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHKDJMMGIPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHKDJMMGIPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHKDJMMGIPA*>*(*)())((::PBYTE)hIl2Cpp + FHKDJMMGIPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHKDJMMGIPA* Clone()
		{
			return ((::FHKDJMMGIPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 MEEIIFIJIPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_MEEIIFIJIPA_OFFSET))(this);
		}

		::System::Void ECHLAAMPDBP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_ECHLAAMPDBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHKDJMMGIPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHKDJMMGIPA*))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHKDJMMGIPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHKDJMMGIPA*))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHKDJMMGIPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
