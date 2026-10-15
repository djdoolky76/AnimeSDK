#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJEDJFIEHPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJEDJFIEHPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDAC70)
#define BJEDJFIEHPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDAD10)
#define BJEDJFIEHPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDA960)
#define BJEDJFIEHPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDA930)
#define BJEDJFIEHPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDA920)
#define BJEDJFIEHPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDAA70)
#define BJEDJFIEHPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDA9A0)
#define BJEDJFIEHPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDABD0)
#define BJEDJFIEHPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDA8E0)
#define BJEDJFIEHPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDACC0)
#define BJEDJFIEHPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDAC90)
#define BJEDJFIEHPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDA910)
#define BJEDJFIEHPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDAC00)
#define BJEDJFIEHPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDAC60)

inline static constexpr unsigned int BJEDJFIEHPB_TypeDefinitionIndex = 31956;

	class BJEDJFIEHPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BJEDJFIEHPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJEDJFIEHPB*>**)UnitySDK::FromName("", "BJEDJFIEHPB")->GetStaticField(0x59460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJEDJFIEHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJEDJFIEHPB*))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJEDJFIEHPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJEDJFIEHPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJEDJFIEHPB*>*(*)())((::PBYTE)hIl2Cpp + BJEDJFIEHPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJEDJFIEHPB* Clone()
		{
			return ((::BJEDJFIEHPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJEDJFIEHPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJEDJFIEHPB*))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJEDJFIEHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJEDJFIEHPB*))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJEDJFIEHPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
