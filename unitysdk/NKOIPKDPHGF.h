#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKOIPKDPHGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKOIPKDPHGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F04EB90)
#define NKOIPKDPHGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F04EC30)
#define NKOIPKDPHGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F04E880)
#define NKOIPKDPHGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F04E850)
#define NKOIPKDPHGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F04E840)
#define NKOIPKDPHGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F04E990)
#define NKOIPKDPHGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F04E8C0)
#define NKOIPKDPHGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F04EAF0)
#define NKOIPKDPHGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F04E800)
#define NKOIPKDPHGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F04EBE0)
#define NKOIPKDPHGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F04EBB0)
#define NKOIPKDPHGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F04E830)
#define NKOIPKDPHGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F04EB20)
#define NKOIPKDPHGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F04EB80)

inline static constexpr unsigned int NKOIPKDPHGF_TypeDefinitionIndex = 33263;

	class NKOIPKDPHGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NKOIPKDPHGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKOIPKDPHGF*>**)UnitySDK::FromName("", "NKOIPKDPHGF")->GetStaticField(0x6DE90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKOIPKDPHGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOIPKDPHGF*))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOIPKDPHGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKOIPKDPHGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKOIPKDPHGF*>*(*)())((::PBYTE)hIl2Cpp + NKOIPKDPHGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKOIPKDPHGF* Clone()
		{
			return ((::NKOIPKDPHGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKOIPKDPHGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKOIPKDPHGF*))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKOIPKDPHGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOIPKDPHGF*))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKOIPKDPHGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
