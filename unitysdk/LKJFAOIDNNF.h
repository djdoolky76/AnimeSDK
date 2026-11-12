#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKJFAOIDNNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKJFAOIDNNF_AENILPKCOAO_OFFSET UNITYSDK_OFFSET(0x1FCB2F80)
#define LKJFAOIDNNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCB32F0)
#define LKJFAOIDNNF_CBKAEJJLNNH_OFFSET UNITYSDK_OFFSET(0x1FCB2F90)
#define LKJFAOIDNNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCB3510)
#define LKJFAOIDNNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCB2F40)
#define LKJFAOIDNNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCB2F10)
#define LKJFAOIDNNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB2F00)
#define LKJFAOIDNNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCB3070)
#define LKJFAOIDNNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCB2FA0)
#define LKJFAOIDNNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCB31E0)
#define LKJFAOIDNNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCB2EC0)
#define LKJFAOIDNNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCB33B0)
#define LKJFAOIDNNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCB3380)
#define LKJFAOIDNNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCB2EF0)
#define LKJFAOIDNNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCB3210)
#define LKJFAOIDNNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCB3270)

inline static constexpr unsigned int LKJFAOIDNNF_TypeDefinitionIndex = 36014;

	class LKJFAOIDNNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CKEEENCFNLE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LKJFAOIDNNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LKJFAOIDNNF*>**)UnitySDK::FromName("", "LKJFAOIDNNF")->GetStaticField(0x3B600);
		}

		// static const ::System::Object GOGOMALLEOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKJFAOIDNNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKJFAOIDNNF*))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKJFAOIDNNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LKJFAOIDNNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LKJFAOIDNNF*>*(*)())((::PBYTE)hIl2Cpp + LKJFAOIDNNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKJFAOIDNNF* Clone()
		{
			return ((::LKJFAOIDNNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENILPKCOAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_AENILPKCOAO_OFFSET))(this);
		}

		::System::Void CBKAEJJLNNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_CBKAEJJLNNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKJFAOIDNNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKJFAOIDNNF*))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKJFAOIDNNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKJFAOIDNNF*))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKJFAOIDNNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
