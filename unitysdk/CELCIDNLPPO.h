#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CELCIDNLPPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CELCIDNLPPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E098EE0)
#define CELCIDNLPPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E098F80)
#define CELCIDNLPPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E098BD0)
#define CELCIDNLPPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E098BA0)
#define CELCIDNLPPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E098B90)
#define CELCIDNLPPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E098CE0)
#define CELCIDNLPPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E098C10)
#define CELCIDNLPPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E098E40)
#define CELCIDNLPPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E098B50)
#define CELCIDNLPPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E098F30)
#define CELCIDNLPPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E098F00)
#define CELCIDNLPPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E098B80)
#define CELCIDNLPPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E098E70)
#define CELCIDNLPPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E098ED0)

inline static constexpr unsigned int CELCIDNLPPO_TypeDefinitionIndex = 32388;

	class CELCIDNLPPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CELCIDNLPPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CELCIDNLPPO*>**)UnitySDK::FromName("", "CELCIDNLPPO")->GetStaticField(0x125D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CELCIDNLPPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELCIDNLPPO*))((::PBYTE)hIl2Cpp + CELCIDNLPPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CELCIDNLPPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CELCIDNLPPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CELCIDNLPPO*>*(*)())((::PBYTE)hIl2Cpp + CELCIDNLPPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CELCIDNLPPO* Clone()
		{
			return ((::CELCIDNLPPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CELCIDNLPPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CELCIDNLPPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CELCIDNLPPO*))((::PBYTE)hIl2Cpp + CELCIDNLPPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CELCIDNLPPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CELCIDNLPPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELCIDNLPPO*))((::PBYTE)hIl2Cpp + CELCIDNLPPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CELCIDNLPPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
