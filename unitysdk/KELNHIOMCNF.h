#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KELNHIOMCNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KELNHIOMCNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB261E0)
#define KELNHIOMCNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB26280)
#define KELNHIOMCNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB25ED0)
#define KELNHIOMCNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB25EA0)
#define KELNHIOMCNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB25E90)
#define KELNHIOMCNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB25FE0)
#define KELNHIOMCNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB25F10)
#define KELNHIOMCNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB26140)
#define KELNHIOMCNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB25E50)
#define KELNHIOMCNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB26230)
#define KELNHIOMCNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB26200)
#define KELNHIOMCNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB25E80)
#define KELNHIOMCNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB26170)
#define KELNHIOMCNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB261D0)

inline static constexpr unsigned int KELNHIOMCNF_TypeDefinitionIndex = 31218;

	class KELNHIOMCNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KELNHIOMCNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KELNHIOMCNF*>**)UnitySDK::FromName("", "KELNHIOMCNF")->GetStaticField(0xAA00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KELNHIOMCNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KELNHIOMCNF*))((::PBYTE)hIl2Cpp + KELNHIOMCNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KELNHIOMCNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KELNHIOMCNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KELNHIOMCNF*>*(*)())((::PBYTE)hIl2Cpp + KELNHIOMCNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KELNHIOMCNF* Clone()
		{
			return ((::KELNHIOMCNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KELNHIOMCNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KELNHIOMCNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KELNHIOMCNF*))((::PBYTE)hIl2Cpp + KELNHIOMCNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KELNHIOMCNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KELNHIOMCNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KELNHIOMCNF*))((::PBYTE)hIl2Cpp + KELNHIOMCNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KELNHIOMCNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
