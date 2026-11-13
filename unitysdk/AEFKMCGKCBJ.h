#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEFKMCGKCBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEFKMCGKCBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200A73A0)
#define AEFKMCGKCBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x200A7440)
#define AEFKMCGKCBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x200A7040)
#define AEFKMCGKCBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200A7010)
#define AEFKMCGKCBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x200A7000)
#define AEFKMCGKCBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200A71A0)
#define AEFKMCGKCBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x200A70B0)
#define AEFKMCGKCBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200A7300)
#define AEFKMCGKCBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200A6F90)
#define AEFKMCGKCBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200A73F0)
#define AEFKMCGKCBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200A73C0)
#define AEFKMCGKCBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200A6FF0)
#define AEFKMCGKCBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200A7330)
#define AEFKMCGKCBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x200A7390)

inline static constexpr unsigned int AEFKMCGKCBJ_TypeDefinitionIndex = 30043;

	class AEFKMCGKCBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AEFKMCGKCBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEFKMCGKCBJ*>**)UnitySDK::FromName("", "AEFKMCGKCBJ")->GetStaticField(0x3BE20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEFKMCGKCBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEFKMCGKCBJ*))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEFKMCGKCBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEFKMCGKCBJ*>*(*)())((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEFKMCGKCBJ* Clone()
		{
			return ((::AEFKMCGKCBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEFKMCGKCBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEFKMCGKCBJ*))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEFKMCGKCBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEFKMCGKCBJ*))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEFKMCGKCBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
