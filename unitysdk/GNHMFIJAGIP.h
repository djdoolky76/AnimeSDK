#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class GNHMFIJAGIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNHMFIJAGIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E0A10)
#define GNHMFIJAGIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0D20)
#define GNHMFIJAGIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E0620)
#define GNHMFIJAGIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E0590)
#define GNHMFIJAGIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0550)
#define GNHMFIJAGIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E07A0)
#define GNHMFIJAGIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E0660)
#define GNHMFIJAGIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E08C0)
#define GNHMFIJAGIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E0510)
#define GNHMFIJAGIP_KPIBHPOJFMB_OFFSET UNITYSDK_OFFSET(0x1E4E0650)
#define GNHMFIJAGIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E0B50)
#define GNHMFIJAGIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E0AB0)
#define GNHMFIJAGIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0540)
#define GNHMFIJAGIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E0930)
#define GNHMFIJAGIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E0990)

inline static constexpr unsigned int GNHMFIJAGIP_TypeDefinitionIndex = 31290;

	class GNHMFIJAGIP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FJPMJPEKLJL>* FPIPJOCMDOH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_OBAMOJMBJGO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GNHMFIJAGIP")->GetStaticField(0x23510);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNHMFIJAGIP")->GetStaticField(0x23518);
		}

		// static const ::System::Object NDFKNLMALKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNHMFIJAGIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNHMFIJAGIP*))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNHMFIJAGIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNHMFIJAGIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNHMFIJAGIP* Clone()
		{
			return ((::GNHMFIJAGIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FJPMJPEKLJL>* KPIBHPOJFMB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FJPMJPEKLJL>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_KPIBHPOJFMB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNHMFIJAGIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNHMFIJAGIP*))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNHMFIJAGIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNHMFIJAGIP*))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNHMFIJAGIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
