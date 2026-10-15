#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEBAGFJEEIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEBAGFJEEIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18EFC0)
#define DEBAGFJEEIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18F060)
#define DEBAGFJEEIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E18ECB0)
#define DEBAGFJEEIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E18EC80)
#define DEBAGFJEEIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18EC70)
#define DEBAGFJEEIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E18EDC0)
#define DEBAGFJEEIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E18ECF0)
#define DEBAGFJEEIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E18EF20)
#define DEBAGFJEEIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E18EC30)
#define DEBAGFJEEIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18F010)
#define DEBAGFJEEIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18EFE0)
#define DEBAGFJEEIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E18EC60)
#define DEBAGFJEEIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18EF50)
#define DEBAGFJEEIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18EFB0)

inline static constexpr unsigned int DEBAGFJEEIA_TypeDefinitionIndex = 30182;

	class DEBAGFJEEIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DEBAGFJEEIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEBAGFJEEIA*>**)UnitySDK::FromName("", "DEBAGFJEEIA")->GetStaticField(0x30350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEBAGFJEEIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBAGFJEEIA*))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBAGFJEEIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEBAGFJEEIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEBAGFJEEIA*>*(*)())((::PBYTE)hIl2Cpp + DEBAGFJEEIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEBAGFJEEIA* Clone()
		{
			return ((::DEBAGFJEEIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEBAGFJEEIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEBAGFJEEIA*))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEBAGFJEEIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBAGFJEEIA*))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEBAGFJEEIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
