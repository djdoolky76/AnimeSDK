#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACCMEOICEOD;
class JKPOIHGIFFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACCMEOICEOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD80D0)
#define ACCMEOICEOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD83D0)
#define ACCMEOICEOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD7C50)
#define ACCMEOICEOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD7BA0)
#define ACCMEOICEOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7B50)
#define ACCMEOICEOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD7E30)
#define ACCMEOICEOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD7CB0)
#define ACCMEOICEOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD7F50)
#define ACCMEOICEOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD7AE0)
#define ACCMEOICEOD_JLGKLNCEGGJ_OFFSET UNITYSDK_OFFSET(0x1DDD7CA0)
#define ACCMEOICEOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD8210)
#define ACCMEOICEOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD8170)
#define ACCMEOICEOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7B40)
#define ACCMEOICEOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD7FC0)
#define ACCMEOICEOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD8020)

inline static constexpr unsigned int ACCMEOICEOD_TypeDefinitionIndex = 29233;

	class ACCMEOICEOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JKPOIHGIFFG*>* PAMOKJGPINJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ACCMEOICEOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ACCMEOICEOD*>**)UnitySDK::FromName("", "ACCMEOICEOD")->GetStaticField(0x2B050);
		}

		static ::Google::Protobuf::FieldCodec_1<::JKPOIHGIFFG*>** StaticGet_ACBDBBHKBID()
		{
			return (::Google::Protobuf::FieldCodec_1<::JKPOIHGIFFG*>**)UnitySDK::FromName("", "ACCMEOICEOD")->GetStaticField(0x2B058);
		}

		// static const ::System::Object NCOCNCGCIHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACCMEOICEOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACCMEOICEOD*))((::PBYTE)hIl2Cpp + ACCMEOICEOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCMEOICEOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ACCMEOICEOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ACCMEOICEOD*>*(*)())((::PBYTE)hIl2Cpp + ACCMEOICEOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACCMEOICEOD* Clone()
		{
			return ((::ACCMEOICEOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JKPOIHGIFFG*>* JLGKLNCEGGJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JKPOIHGIFFG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD_JLGKLNCEGGJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACCMEOICEOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACCMEOICEOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACCMEOICEOD*))((::PBYTE)hIl2Cpp + ACCMEOICEOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACCMEOICEOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACCMEOICEOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACCMEOICEOD*))((::PBYTE)hIl2Cpp + ACCMEOICEOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACCMEOICEOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
