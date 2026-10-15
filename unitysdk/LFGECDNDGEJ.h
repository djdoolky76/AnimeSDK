#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFGECDNDGEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFGECDNDGEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93C5B0)
#define LFGECDNDGEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93C650)
#define LFGECDNDGEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E93C2A0)
#define LFGECDNDGEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E93C270)
#define LFGECDNDGEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93C260)
#define LFGECDNDGEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E93C3B0)
#define LFGECDNDGEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E93C2E0)
#define LFGECDNDGEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E93C510)
#define LFGECDNDGEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E93C220)
#define LFGECDNDGEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93C600)
#define LFGECDNDGEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93C5D0)
#define LFGECDNDGEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E93C250)
#define LFGECDNDGEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93C540)
#define LFGECDNDGEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93C5A0)

inline static constexpr unsigned int LFGECDNDGEJ_TypeDefinitionIndex = 26908;

	class LFGECDNDGEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LFGECDNDGEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFGECDNDGEJ*>**)UnitySDK::FromName("", "LFGECDNDGEJ")->GetStaticField(0x3AA60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFGECDNDGEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFGECDNDGEJ*))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGECDNDGEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFGECDNDGEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFGECDNDGEJ*>*(*)())((::PBYTE)hIl2Cpp + LFGECDNDGEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFGECDNDGEJ* Clone()
		{
			return ((::LFGECDNDGEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFGECDNDGEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFGECDNDGEJ*))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFGECDNDGEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFGECDNDGEJ*))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFGECDNDGEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
