#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLOLFGCKKJB;
class PFMAAAJFLOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLOLFGCKKJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E99EDA0)
#define LLOLFGCKKJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99F0A0)
#define LLOLFGCKKJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E99E920)
#define LLOLFGCKKJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E99E870)
#define LLOLFGCKKJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99E820)
#define LLOLFGCKKJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E99EB00)
#define LLOLFGCKKJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E99E980)
#define LLOLFGCKKJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E99EC20)
#define LLOLFGCKKJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E99E7B0)
#define LLOLFGCKKJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E99EEE0)
#define LLOLFGCKKJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E99EE40)
#define LLOLFGCKKJB_OJEIPCLJNAL_OFFSET UNITYSDK_OFFSET(0x1E99E970)
#define LLOLFGCKKJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E99E810)
#define LLOLFGCKKJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E99EC90)
#define LLOLFGCKKJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E99ECF0)

inline static constexpr unsigned int LLOLFGCKKJB_TypeDefinitionIndex = 28594;

	class LLOLFGCKKJB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PFMAAAJFLOA*>* NHNEOCKGGLH; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::PFMAAAJFLOA*>** StaticGet_PDICJLPFFMA()
		{
			return (::Google::Protobuf::FieldCodec_1<::PFMAAAJFLOA*>**)UnitySDK::FromName("", "LLOLFGCKKJB")->GetStaticField(0x4C450);
		}

		static ::Google::Protobuf::MessageParser_1<::LLOLFGCKKJB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLOLFGCKKJB*>**)UnitySDK::FromName("", "LLOLFGCKKJB")->GetStaticField(0x4C458);
		}

		// static const ::System::Object EEHIBNEJOIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLOLFGCKKJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLOLFGCKKJB*))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOLFGCKKJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLOLFGCKKJB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLOLFGCKKJB*>*(*)())((::PBYTE)hIl2Cpp + LLOLFGCKKJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLOLFGCKKJB* Clone()
		{
			return ((::LLOLFGCKKJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PFMAAAJFLOA*>* OJEIPCLJNAL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PFMAAAJFLOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_OJEIPCLJNAL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLOLFGCKKJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLOLFGCKKJB*))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLOLFGCKKJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLOLFGCKKJB*))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLOLFGCKKJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
