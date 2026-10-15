#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKJFAOIDNNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKJFAOIDNNF_AENILPKCOAO_OFFSET UNITYSDK_OFFSET(0x1E990C50)
#define LKJFAOIDNNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E990FC0)
#define LKJFAOIDNNF_CBKAEJJLNNH_OFFSET UNITYSDK_OFFSET(0x1E990C60)
#define LKJFAOIDNNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9911E0)
#define LKJFAOIDNNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E990C10)
#define LKJFAOIDNNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E990BE0)
#define LKJFAOIDNNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E990BD0)
#define LKJFAOIDNNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E990D40)
#define LKJFAOIDNNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E990C70)
#define LKJFAOIDNNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E990EB0)
#define LKJFAOIDNNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E990B90)
#define LKJFAOIDNNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E991080)
#define LKJFAOIDNNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E991050)
#define LKJFAOIDNNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E990BC0)
#define LKJFAOIDNNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E990EE0)
#define LKJFAOIDNNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E990F40)

inline static constexpr unsigned int LKJFAOIDNNF_TypeDefinitionIndex = 35086;

	class LKJFAOIDNNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CKEEENCFNLE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LKJFAOIDNNF")->GetStaticField(0x4AA50);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LKJFAOIDNNF_JJGHOBBFNJD_OFFSET))();
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
