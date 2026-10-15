#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCMCKOKEJNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCMCKOKEJNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07A050)
#define CCMCKOKEJNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07A310)
#define CCMCKOKEJNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E079BD0)
#define CCMCKOKEJNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E079B40)
#define CCMCKOKEJNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E079AF0)
#define CCMCKOKEJNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E079D50)
#define CCMCKOKEJNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E079C30)
#define CCMCKOKEJNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E079E40)
#define CCMCKOKEJNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E079A80)
#define CCMCKOKEJNI_MEFIIOBCDLF_OFFSET UNITYSDK_OFFSET(0x1E079C20)
#define CCMCKOKEJNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07A140)
#define CCMCKOKEJNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07A0F0)
#define CCMCKOKEJNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E079AE0)
#define CCMCKOKEJNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E079F40)
#define CCMCKOKEJNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E079FA0)

inline static constexpr unsigned int CCMCKOKEJNI_TypeDefinitionIndex = 31010;

	class CCMCKOKEJNI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFHGILEDGFL; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_NDCOOABFHKG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CCMCKOKEJNI")->GetStaticField(0xE390);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CCMCKOKEJNI")->GetStaticField(0xE398);
		}

		// static const ::System::Object LJIGBOOPPLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCMCKOKEJNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCMCKOKEJNI*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CCMCKOKEJNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCMCKOKEJNI* Clone()
		{
			return ((::CCMCKOKEJNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MEFIIOBCDLF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_MEFIIOBCDLF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCMCKOKEJNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCMCKOKEJNI*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCMCKOKEJNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCMCKOKEJNI*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
