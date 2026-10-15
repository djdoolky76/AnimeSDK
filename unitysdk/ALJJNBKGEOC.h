#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALJJNBKGEOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALJJNBKGEOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E510CD0)
#define ALJJNBKGEOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E510F90)
#define ALJJNBKGEOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E510850)
#define ALJJNBKGEOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5107C0)
#define ALJJNBKGEOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E510770)
#define ALJJNBKGEOC_DONOBENAFBK_OFFSET UNITYSDK_OFFSET(0x1E5108A0)
#define ALJJNBKGEOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5109D0)
#define ALJJNBKGEOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5108B0)
#define ALJJNBKGEOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E510AC0)
#define ALJJNBKGEOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E510700)
#define ALJJNBKGEOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E510DC0)
#define ALJJNBKGEOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E510D70)
#define ALJJNBKGEOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E510760)
#define ALJJNBKGEOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E510BC0)
#define ALJJNBKGEOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E510C20)

inline static constexpr unsigned int ALJJNBKGEOC_TypeDefinitionIndex = 33354;

	class ALJJNBKGEOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JPAMMGJBKAB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ALJJNBKGEOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALJJNBKGEOC*>**)UnitySDK::FromName("", "ALJJNBKGEOC")->GetStaticField(0x39530);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MFBMEDPFOJN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ALJJNBKGEOC")->GetStaticField(0x39538);
		}

		// static const ::System::Object OAALDGPDDPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALJJNBKGEOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALJJNBKGEOC*))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALJJNBKGEOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALJJNBKGEOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALJJNBKGEOC*>*(*)())((::PBYTE)hIl2Cpp + ALJJNBKGEOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALJJNBKGEOC* Clone()
		{
			return ((::ALJJNBKGEOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DONOBENAFBK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_DONOBENAFBK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALJJNBKGEOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALJJNBKGEOC*))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALJJNBKGEOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALJJNBKGEOC*))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALJJNBKGEOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
