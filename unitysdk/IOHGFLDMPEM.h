#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOHGFLDMPEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOHGFLDMPEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A7E90)
#define IOHGFLDMPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A80B0)
#define IOHGFLDMPEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A7AE0)
#define IOHGFLDMPEM_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E6A7B20)
#define IOHGFLDMPEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A7AB0)
#define IOHGFLDMPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7AA0)
#define IOHGFLDMPEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A7C10)
#define IOHGFLDMPEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A7B40)
#define IOHGFLDMPEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A7D80)
#define IOHGFLDMPEM_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E6A7B30)
#define IOHGFLDMPEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A7A60)
#define IOHGFLDMPEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A7F50)
#define IOHGFLDMPEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A7F20)
#define IOHGFLDMPEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7A90)
#define IOHGFLDMPEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A7DB0)
#define IOHGFLDMPEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A7E10)

inline static constexpr unsigned int IOHGFLDMPEM_TypeDefinitionIndex = 30190;

	class IOHGFLDMPEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IOHGFLDMPEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOHGFLDMPEM*>**)UnitySDK::FromName("", "IOHGFLDMPEM")->GetStaticField(0x54B40);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOHGFLDMPEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOHGFLDMPEM*))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOHGFLDMPEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOHGFLDMPEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOHGFLDMPEM*>*(*)())((::PBYTE)hIl2Cpp + IOHGFLDMPEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOHGFLDMPEM* Clone()
		{
			return ((::IOHGFLDMPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOHGFLDMPEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOHGFLDMPEM*))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOHGFLDMPEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOHGFLDMPEM*))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOHGFLDMPEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
