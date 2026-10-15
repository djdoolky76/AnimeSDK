#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHIIFCIPMB;
class PJPAOLMBKEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJHIIFCIPMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B7CE0)
#define EJHIIFCIPMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B7FE0)
#define EJHIIFCIPMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B7860)
#define EJHIIFCIPMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B77B0)
#define EJHIIFCIPMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B7760)
#define EJHIIFCIPMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B7A40)
#define EJHIIFCIPMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B78C0)
#define EJHIIFCIPMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B7B60)
#define EJHIIFCIPMB_HALCMDKGLAA_OFFSET UNITYSDK_OFFSET(0x1E2B78B0)
#define EJHIIFCIPMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B76F0)
#define EJHIIFCIPMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B7E20)
#define EJHIIFCIPMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B7D80)
#define EJHIIFCIPMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B7750)
#define EJHIIFCIPMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B7BD0)
#define EJHIIFCIPMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B7C30)

inline static constexpr unsigned int EJHIIFCIPMB_TypeDefinitionIndex = 28582;

	class EJHIIFCIPMB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PJPAOLMBKEC*>* DDDPNDNDLGK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EJHIIFCIPMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJHIIFCIPMB*>**)UnitySDK::FromName("", "EJHIIFCIPMB")->GetStaticField(0x4B8A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::PJPAOLMBKEC*>** StaticGet_GMPDMOBJNLE()
		{
			return (::Google::Protobuf::FieldCodec_1<::PJPAOLMBKEC*>**)UnitySDK::FromName("", "EJHIIFCIPMB")->GetStaticField(0x4B8A8);
		}

		// static const ::System::Object DMECCMINBOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJHIIFCIPMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHIIFCIPMB*))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHIIFCIPMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJHIIFCIPMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJHIIFCIPMB*>*(*)())((::PBYTE)hIl2Cpp + EJHIIFCIPMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJHIIFCIPMB* Clone()
		{
			return ((::EJHIIFCIPMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PJPAOLMBKEC*>* HALCMDKGLAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PJPAOLMBKEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_HALCMDKGLAA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJHIIFCIPMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJHIIFCIPMB*))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJHIIFCIPMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHIIFCIPMB*))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJHIIFCIPMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
