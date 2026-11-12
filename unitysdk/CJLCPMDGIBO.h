#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLCPMDGIBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJLCPMDGIBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3B4A30)
#define CJLCPMDGIBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B4C90)
#define CJLCPMDGIBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3B4630)
#define CJLCPMDGIBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3B45A0)
#define CJLCPMDGIBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B4550)
#define CJLCPMDGIBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3B4760)
#define CJLCPMDGIBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3B4670)
#define CJLCPMDGIBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3B4850)
#define CJLCPMDGIBO_IFDMFIBJHDP_OFFSET UNITYSDK_OFFSET(0x1F3B4660)
#define CJLCPMDGIBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3B4510)
#define CJLCPMDGIBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3B4AF0)
#define CJLCPMDGIBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3B4AA0)
#define CJLCPMDGIBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3B4540)
#define CJLCPMDGIBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3B4950)
#define CJLCPMDGIBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3B49B0)

inline static constexpr unsigned int CJLCPMDGIBO_TypeDefinitionIndex = 25779;

	class CJLCPMDGIBO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PBGJKCINJOC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ALACBJCLNCE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CJLCPMDGIBO")->GetStaticField(0x131A0);
		}

		static ::Google::Protobuf::MessageParser_1<::CJLCPMDGIBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJLCPMDGIBO*>**)UnitySDK::FromName("", "CJLCPMDGIBO")->GetStaticField(0x131A8);
		}

		// static const ::System::Object FEAAKPJOFEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJLCPMDGIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJLCPMDGIBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJLCPMDGIBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJLCPMDGIBO*>*(*)())((::PBYTE)hIl2Cpp + CJLCPMDGIBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJLCPMDGIBO* Clone()
		{
			return ((::CJLCPMDGIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IFDMFIBJHDP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_IFDMFIBJHDP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJLCPMDGIBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJLCPMDGIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJLCPMDGIBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
