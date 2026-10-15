#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHJJOIHCOML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHJJOIHCOML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E271FA0)
#define AHJJOIHCOML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E272040)
#define AHJJOIHCOML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E271C90)
#define AHJJOIHCOML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E271C60)
#define AHJJOIHCOML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E271C50)
#define AHJJOIHCOML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E271DA0)
#define AHJJOIHCOML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E271CD0)
#define AHJJOIHCOML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E271F00)
#define AHJJOIHCOML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E271C10)
#define AHJJOIHCOML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E271FF0)
#define AHJJOIHCOML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E271FC0)
#define AHJJOIHCOML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E271C40)
#define AHJJOIHCOML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E271F30)
#define AHJJOIHCOML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E271F90)

inline static constexpr unsigned int AHJJOIHCOML_TypeDefinitionIndex = 31546;

	class AHJJOIHCOML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AHJJOIHCOML")->GetStaticField(0x31E80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHJJOIHCOML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHJJOIHCOML*))((::PBYTE)hIl2Cpp + AHJJOIHCOML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHJJOIHCOML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AHJJOIHCOML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHJJOIHCOML* Clone()
		{
			return ((::AHJJOIHCOML*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHJJOIHCOML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHJJOIHCOML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHJJOIHCOML*))((::PBYTE)hIl2Cpp + AHJJOIHCOML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHJJOIHCOML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHJJOIHCOML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHJJOIHCOML*))((::PBYTE)hIl2Cpp + AHJJOIHCOML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHJJOIHCOML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
