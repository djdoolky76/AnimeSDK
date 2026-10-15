#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCPHKBAPEGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCPHKBAPEGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDED370)
#define OCPHKBAPEGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDED590)
#define OCPHKBAPEGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDECF60)
#define OCPHKBAPEGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDECF30)
#define OCPHKBAPEGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDECF20)
#define OCPHKBAPEGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDED0F0)
#define OCPHKBAPEGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDECFF0)
#define OCPHKBAPEGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDED260)
#define OCPHKBAPEGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDECEB0)
#define OCPHKBAPEGF_KGAHDFKJAJD_OFFSET UNITYSDK_OFFSET(0x1DDECFE0)
#define OCPHKBAPEGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDED430)
#define OCPHKBAPEGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDED400)
#define OCPHKBAPEGF_OLJNLJNCFFO_OFFSET UNITYSDK_OFFSET(0x1DDECFD0)
#define OCPHKBAPEGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDECF10)
#define OCPHKBAPEGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDED290)
#define OCPHKBAPEGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDED2F0)

inline static constexpr unsigned int OCPHKBAPEGF_TypeDefinitionIndex = 28877;

	class OCPHKBAPEGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PODEGEHGIJH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OCPHKBAPEGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCPHKBAPEGF*>**)UnitySDK::FromName("", "OCPHKBAPEGF")->GetStaticField(0x11D60);
		}

		// static const ::System::Object GONHNKMOJCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCPHKBAPEGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPHKBAPEGF*))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPHKBAPEGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCPHKBAPEGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCPHKBAPEGF*>*(*)())((::PBYTE)hIl2Cpp + OCPHKBAPEGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCPHKBAPEGF* Clone()
		{
			return ((::OCPHKBAPEGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OLJNLJNCFFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_OLJNLJNCFFO_OFFSET))(this);
		}

		::System::Void KGAHDFKJAJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_KGAHDFKJAJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCPHKBAPEGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCPHKBAPEGF*))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCPHKBAPEGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPHKBAPEGF*))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCPHKBAPEGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
