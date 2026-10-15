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

#define KELNHIOMCNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E80FB30)
#define KELNHIOMCNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80FBD0)
#define KELNHIOMCNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80F820)
#define KELNHIOMCNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80F7F0)
#define KELNHIOMCNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80F7E0)
#define KELNHIOMCNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E80F930)
#define KELNHIOMCNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80F860)
#define KELNHIOMCNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E80FA90)
#define KELNHIOMCNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80F7A0)
#define KELNHIOMCNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E80FB80)
#define KELNHIOMCNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E80FB50)
#define KELNHIOMCNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80F7D0)
#define KELNHIOMCNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E80FAC0)
#define KELNHIOMCNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E80FB20)

inline static constexpr unsigned int KELNHIOMCNF_TypeDefinitionIndex = 30312;

	class KELNHIOMCNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KELNHIOMCNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KELNHIOMCNF*>**)UnitySDK::FromName("", "KELNHIOMCNF")->GetStaticField(0x12CD0);
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
