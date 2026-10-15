#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMKAACCBCCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMKAACCBCCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B6700)
#define EMKAACCBCCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B67A0)
#define EMKAACCBCCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B63F0)
#define EMKAACCBCCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B63C0)
#define EMKAACCBCCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B63B0)
#define EMKAACCBCCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B6500)
#define EMKAACCBCCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B6430)
#define EMKAACCBCCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B6660)
#define EMKAACCBCCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B6370)
#define EMKAACCBCCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B6750)
#define EMKAACCBCCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B6720)
#define EMKAACCBCCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B63A0)
#define EMKAACCBCCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B6690)
#define EMKAACCBCCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B66F0)

inline static constexpr unsigned int EMKAACCBCCB_TypeDefinitionIndex = 32336;

	class EMKAACCBCCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EMKAACCBCCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMKAACCBCCB*>**)UnitySDK::FromName("", "EMKAACCBCCB")->GetStaticField(0x43740);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMKAACCBCCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMKAACCBCCB*))((::PBYTE)hIl2Cpp + EMKAACCBCCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKAACCBCCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMKAACCBCCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMKAACCBCCB*>*(*)())((::PBYTE)hIl2Cpp + EMKAACCBCCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMKAACCBCCB* Clone()
		{
			return ((::EMKAACCBCCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMKAACCBCCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMKAACCBCCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMKAACCBCCB*))((::PBYTE)hIl2Cpp + EMKAACCBCCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMKAACCBCCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMKAACCBCCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMKAACCBCCB*))((::PBYTE)hIl2Cpp + EMKAACCBCCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMKAACCBCCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
