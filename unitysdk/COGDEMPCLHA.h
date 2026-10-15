#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COGDEMPCLHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COGDEMPCLHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E133320)
#define COGDEMPCLHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1335E0)
#define COGDEMPCLHA_CKCIFOBGMKD_OFFSET UNITYSDK_OFFSET(0x1E132EF0)
#define COGDEMPCLHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E132EA0)
#define COGDEMPCLHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E132E10)
#define COGDEMPCLHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E132DC0)
#define COGDEMPCLHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E133020)
#define COGDEMPCLHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E132F00)
#define COGDEMPCLHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E133110)
#define COGDEMPCLHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E132D50)
#define COGDEMPCLHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E133410)
#define COGDEMPCLHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1333C0)
#define COGDEMPCLHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E132DB0)
#define COGDEMPCLHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E133210)
#define COGDEMPCLHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E133270)

inline static constexpr unsigned int COGDEMPCLHA_TypeDefinitionIndex = 29486;

	class COGDEMPCLHA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJIOBHPOEIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "COGDEMPCLHA")->GetStaticField(0x21360);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GOKCHGKCBMD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "COGDEMPCLHA")->GetStaticField(0x21368);
		}

		// static const ::System::Object CFNLKMMLIIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COGDEMPCLHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGDEMPCLHA*))((::PBYTE)hIl2Cpp + COGDEMPCLHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COGDEMPCLHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + COGDEMPCLHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COGDEMPCLHA* Clone()
		{
			return ((::COGDEMPCLHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CKCIFOBGMKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA_CKCIFOBGMKD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COGDEMPCLHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COGDEMPCLHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COGDEMPCLHA*))((::PBYTE)hIl2Cpp + COGDEMPCLHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COGDEMPCLHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDEMPCLHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COGDEMPCLHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGDEMPCLHA*))((::PBYTE)hIl2Cpp + COGDEMPCLHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COGDEMPCLHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
