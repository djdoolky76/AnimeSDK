#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIFDLLPAAKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIFDLLPAAKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96CA60)
#define LIFDLLPAAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96CB00)
#define LIFDLLPAAKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96C750)
#define LIFDLLPAAKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96C720)
#define LIFDLLPAAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96C710)
#define LIFDLLPAAKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96C860)
#define LIFDLLPAAKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96C790)
#define LIFDLLPAAKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96C9C0)
#define LIFDLLPAAKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96C6D0)
#define LIFDLLPAAKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96CAB0)
#define LIFDLLPAAKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96CA80)
#define LIFDLLPAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96C700)
#define LIFDLLPAAKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96C9F0)
#define LIFDLLPAAKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96CA50)

inline static constexpr unsigned int LIFDLLPAAKF_TypeDefinitionIndex = 31644;

	class LIFDLLPAAKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LIFDLLPAAKF")->GetStaticField(0x44F00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIFDLLPAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIFDLLPAAKF*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LIFDLLPAAKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIFDLLPAAKF* Clone()
		{
			return ((::LIFDLLPAAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIFDLLPAAKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIFDLLPAAKF*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIFDLLPAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIFDLLPAAKF*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
