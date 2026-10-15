#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGMPACONNFP;
class HIMJNABCJMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIMJNABCJMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59CCB0)
#define HIMJNABCJMM_CBIDMEHMIDA_OFFSET UNITYSDK_OFFSET(0x1E59C8C0)
#define HIMJNABCJMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59CF90)
#define HIMJNABCJMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59C890)
#define HIMJNABCJMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59C800)
#define HIMJNABCJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59C7C0)
#define HIMJNABCJMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59CA10)
#define HIMJNABCJMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59C8D0)
#define HIMJNABCJMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59CB30)
#define HIMJNABCJMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59C780)
#define HIMJNABCJMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59CDF0)
#define HIMJNABCJMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59CD50)
#define HIMJNABCJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59C7B0)
#define HIMJNABCJMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59CBA0)
#define HIMJNABCJMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59CC00)

inline static constexpr unsigned int HIMJNABCJMM_TypeDefinitionIndex = 33138;

	class HIMJNABCJMM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EGMPACONNFP*>* IOPJHGFAAMP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_NAPLHCGELCG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HIMJNABCJMM")->GetStaticField(0x3E6B0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIMJNABCJMM")->GetStaticField(0x3E6B8);
		}

		// static const ::System::Object HNDGJMEPPNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIMJNABCJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMJNABCJMM*))((::PBYTE)hIl2Cpp + HIMJNABCJMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJNABCJMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIMJNABCJMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIMJNABCJMM* Clone()
		{
			return ((::HIMJNABCJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EGMPACONNFP*>* CBIDMEHMIDA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EGMPACONNFP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM_CBIDMEHMIDA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIMJNABCJMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIMJNABCJMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIMJNABCJMM*))((::PBYTE)hIl2Cpp + HIMJNABCJMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIMJNABCJMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIMJNABCJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMJNABCJMM*))((::PBYTE)hIl2Cpp + HIMJNABCJMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIMJNABCJMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
