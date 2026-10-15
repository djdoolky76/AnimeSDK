#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDLPMPLGLPF;
class LGEDKNLBCAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDLPMPLGLPF_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E91A7F0)
#define BDLPMPLGLPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E91ABE0)
#define BDLPMPLGLPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E91AEE0)
#define BDLPMPLGLPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E91A7C0)
#define BDLPMPLGLPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E91A710)
#define BDLPMPLGLPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91A6C0)
#define BDLPMPLGLPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E91A940)
#define BDLPMPLGLPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E91A800)
#define BDLPMPLGLPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E91AA60)
#define BDLPMPLGLPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E91A680)
#define BDLPMPLGLPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E91AD20)
#define BDLPMPLGLPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E91AC80)
#define BDLPMPLGLPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E91A6B0)
#define BDLPMPLGLPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E91AAD0)
#define BDLPMPLGLPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E91AB30)

inline static constexpr unsigned int BDLPMPLGLPF_TypeDefinitionIndex = 27637;

	class BDLPMPLGLPF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LGEDKNLBCAN*>* BPJNCMFCKBJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::LGEDKNLBCAN*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::LGEDKNLBCAN*>**)UnitySDK::FromName("", "BDLPMPLGLPF")->GetStaticField(0x3E3E0);
		}

		static ::Google::Protobuf::MessageParser_1<::BDLPMPLGLPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDLPMPLGLPF*>**)UnitySDK::FromName("", "BDLPMPLGLPF")->GetStaticField(0x3E3E8);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDLPMPLGLPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDLPMPLGLPF*))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDLPMPLGLPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDLPMPLGLPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDLPMPLGLPF*>*(*)())((::PBYTE)hIl2Cpp + BDLPMPLGLPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDLPMPLGLPF* Clone()
		{
			return ((::BDLPMPLGLPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGEDKNLBCAN*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGEDKNLBCAN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDLPMPLGLPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDLPMPLGLPF*))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDLPMPLGLPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDLPMPLGLPF*))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDLPMPLGLPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
