#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOMLCMBBPCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOMLCMBBPCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C5DE0)
#define GOMLCMBBPCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C5E80)
#define GOMLCMBBPCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C5AD0)
#define GOMLCMBBPCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C5AA0)
#define GOMLCMBBPCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C5A90)
#define GOMLCMBBPCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C5BE0)
#define GOMLCMBBPCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C5B10)
#define GOMLCMBBPCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C5D40)
#define GOMLCMBBPCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C5A50)
#define GOMLCMBBPCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C5E30)
#define GOMLCMBBPCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C5E00)
#define GOMLCMBBPCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C5A80)
#define GOMLCMBBPCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C5D70)
#define GOMLCMBBPCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C5DD0)

inline static constexpr unsigned int GOMLCMBBPCH_TypeDefinitionIndex = 26972;

	class GOMLCMBBPCH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GOMLCMBBPCH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOMLCMBBPCH*>**)UnitySDK::FromName("", "GOMLCMBBPCH")->GetStaticField(0x233B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOMLCMBBPCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOMLCMBBPCH*))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMLCMBBPCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GOMLCMBBPCH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOMLCMBBPCH*>*(*)())((::PBYTE)hIl2Cpp + GOMLCMBBPCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOMLCMBBPCH* Clone()
		{
			return ((::GOMLCMBBPCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOMLCMBBPCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOMLCMBBPCH*))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOMLCMBBPCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOMLCMBBPCH*))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOMLCMBBPCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
