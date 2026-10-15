#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPNGMLENFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPNGMLENFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C3B30)
#define CKPNGMLENFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C3DF0)
#define CKPNGMLENFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C36B0)
#define CKPNGMLENFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C3620)
#define CKPNGMLENFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C35D0)
#define CKPNGMLENFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C3830)
#define CKPNGMLENFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C3710)
#define CKPNGMLENFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C3920)
#define CKPNGMLENFA_JDFFEJFPHBJ_OFFSET UNITYSDK_OFFSET(0x1E0C3700)
#define CKPNGMLENFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C3560)
#define CKPNGMLENFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C3C20)
#define CKPNGMLENFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C3BD0)
#define CKPNGMLENFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C35C0)
#define CKPNGMLENFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C3A20)
#define CKPNGMLENFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C3A80)

inline static constexpr unsigned int CKPNGMLENFA_TypeDefinitionIndex = 34816;

	class CKPNGMLENFA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CKPNGMLENFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKPNGMLENFA*>**)UnitySDK::FromName("", "CKPNGMLENFA")->GetStaticField(0x19CA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKDIKGNLFBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CKPNGMLENFA")->GetStaticField(0x19CA8);
		}

		// static const ::System::Object PDFFAKHMEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKPNGMLENFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPNGMLENFA*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPNGMLENFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKPNGMLENFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKPNGMLENFA*>*(*)())((::PBYTE)hIl2Cpp + CKPNGMLENFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPNGMLENFA* Clone()
		{
			return ((::CKPNGMLENFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDFFEJFPHBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_JDFFEJFPHBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKPNGMLENFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKPNGMLENFA*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKPNGMLENFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPNGMLENFA*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKPNGMLENFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
