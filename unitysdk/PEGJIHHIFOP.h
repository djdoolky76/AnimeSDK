#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGJIHHIFOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEGJIHHIFOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF19CF0)
#define PEGJIHHIFOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF19FB0)
#define PEGJIHHIFOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF19870)
#define PEGJIHHIFOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF197E0)
#define PEGJIHHIFOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF19790)
#define PEGJIHHIFOP_EDJCCOIACJJ_OFFSET UNITYSDK_OFFSET(0x1DF198C0)
#define PEGJIHHIFOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF199F0)
#define PEGJIHHIFOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF198D0)
#define PEGJIHHIFOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF19AE0)
#define PEGJIHHIFOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF19720)
#define PEGJIHHIFOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF19DE0)
#define PEGJIHHIFOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF19D90)
#define PEGJIHHIFOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF19780)
#define PEGJIHHIFOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF19BE0)
#define PEGJIHHIFOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF19C40)

inline static constexpr unsigned int PEGJIHHIFOP_TypeDefinitionIndex = 25150;

	class PEGJIHHIFOP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGEMHGGDLAN; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HMMCAICDHDB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PEGJIHHIFOP")->GetStaticField(0x1BFC0);
		}

		static ::Google::Protobuf::MessageParser_1<::PEGJIHHIFOP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEGJIHHIFOP*>**)UnitySDK::FromName("", "PEGJIHHIFOP")->GetStaticField(0x1BFC8);
		}

		// static const ::System::Object ELKDOHGDGJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEGJIHHIFOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGJIHHIFOP*))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGJIHHIFOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEGJIHHIFOP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEGJIHHIFOP*>*(*)())((::PBYTE)hIl2Cpp + PEGJIHHIFOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEGJIHHIFOP* Clone()
		{
			return ((::PEGJIHHIFOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDJCCOIACJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_EDJCCOIACJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEGJIHHIFOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEGJIHHIFOP*))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEGJIHHIFOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGJIHHIFOP*))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEGJIHHIFOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
