#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDCCLPKPEKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDCCLPKPEKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB6900)
#define NDCCLPKPEKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB69A0)
#define NDCCLPKPEKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB65F0)
#define NDCCLPKPEKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB65C0)
#define NDCCLPKPEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB65B0)
#define NDCCLPKPEKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB6700)
#define NDCCLPKPEKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB6630)
#define NDCCLPKPEKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB6860)
#define NDCCLPKPEKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB6570)
#define NDCCLPKPEKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB6950)
#define NDCCLPKPEKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB6920)
#define NDCCLPKPEKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB65A0)
#define NDCCLPKPEKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB6890)
#define NDCCLPKPEKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB68F0)

inline static constexpr unsigned int NDCCLPKPEKJ_TypeDefinitionIndex = 34213;

	class NDCCLPKPEKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NDCCLPKPEKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDCCLPKPEKJ*>**)UnitySDK::FromName("", "NDCCLPKPEKJ")->GetStaticField(0x5F5D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDCCLPKPEKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDCCLPKPEKJ*))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDCCLPKPEKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDCCLPKPEKJ*>*(*)())((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDCCLPKPEKJ* Clone()
		{
			return ((::NDCCLPKPEKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDCCLPKPEKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDCCLPKPEKJ*))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDCCLPKPEKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDCCLPKPEKJ*))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
