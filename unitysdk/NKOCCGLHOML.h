#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKOCCGLHOML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKOCCGLHOML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB5F120)
#define NKOCCGLHOML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5F1C0)
#define NKOCCGLHOML_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB5EDC0)
#define NKOCCGLHOML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB5ED90)
#define NKOCCGLHOML_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5ED80)
#define NKOCCGLHOML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB5EF20)
#define NKOCCGLHOML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB5EE30)
#define NKOCCGLHOML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB5F080)
#define NKOCCGLHOML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB5ED10)
#define NKOCCGLHOML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB5F170)
#define NKOCCGLHOML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB5F140)
#define NKOCCGLHOML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB5ED70)
#define NKOCCGLHOML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB5F0B0)
#define NKOCCGLHOML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB5F110)

inline static constexpr unsigned int NKOCCGLHOML_TypeDefinitionIndex = 27740;

	class NKOCCGLHOML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NKOCCGLHOML")->GetStaticField(0x66680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKOCCGLHOML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOCCGLHOML*))((::PBYTE)hIl2Cpp + NKOCCGLHOML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOCCGLHOML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NKOCCGLHOML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKOCCGLHOML* Clone()
		{
			return ((::NKOCCGLHOML*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKOCCGLHOML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKOCCGLHOML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKOCCGLHOML*))((::PBYTE)hIl2Cpp + NKOCCGLHOML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKOCCGLHOML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKOCCGLHOML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOCCGLHOML*))((::PBYTE)hIl2Cpp + NKOCCGLHOML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKOCCGLHOML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
