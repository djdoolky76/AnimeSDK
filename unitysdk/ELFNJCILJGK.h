#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELFNJCILJGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELFNJCILJGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2CEC40)
#define ELFNJCILJGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CECE0)
#define ELFNJCILJGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2CE930)
#define ELFNJCILJGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2CE900)
#define ELFNJCILJGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CE8F0)
#define ELFNJCILJGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2CEA40)
#define ELFNJCILJGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2CE970)
#define ELFNJCILJGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2CEBA0)
#define ELFNJCILJGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2CE8B0)
#define ELFNJCILJGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2CEC90)
#define ELFNJCILJGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2CEC60)
#define ELFNJCILJGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2CE8E0)
#define ELFNJCILJGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2CEBD0)
#define ELFNJCILJGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2CEC30)

inline static constexpr unsigned int ELFNJCILJGK_TypeDefinitionIndex = 30378;

	class ELFNJCILJGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ELFNJCILJGK")->GetStaticField(0x501A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELFNJCILJGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELFNJCILJGK*))((::PBYTE)hIl2Cpp + ELFNJCILJGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFNJCILJGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ELFNJCILJGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELFNJCILJGK* Clone()
		{
			return ((::ELFNJCILJGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELFNJCILJGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELFNJCILJGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELFNJCILJGK*))((::PBYTE)hIl2Cpp + ELFNJCILJGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELFNJCILJGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFNJCILJGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELFNJCILJGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELFNJCILJGK*))((::PBYTE)hIl2Cpp + ELFNJCILJGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELFNJCILJGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
