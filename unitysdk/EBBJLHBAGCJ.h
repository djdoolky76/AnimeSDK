#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBJLHBAGCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBBJLHBAGCJ_BIPGHNLHNGB_OFFSET UNITYSDK_OFFSET(0x1E203450)
#define EBBJLHBAGCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2038F0)
#define EBBJLHBAGCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E203C20)
#define EBBJLHBAGCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2033F0)
#define EBBJLHBAGCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E203360)
#define EBBJLHBAGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E203310)
#define EBBJLHBAGCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2035A0)
#define EBBJLHBAGCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E203470)
#define EBBJLHBAGCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E203690)
#define EBBJLHBAGCJ_GHJCDKFKAAH_OFFSET UNITYSDK_OFFSET(0x1E203460)
#define EBBJLHBAGCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2032A0)
#define EBBJLHBAGCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E203A50)
#define EBBJLHBAGCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E203A00)
#define EBBJLHBAGCJ_NHHKMMHGJKB_OFFSET UNITYSDK_OFFSET(0x1E203440)
#define EBBJLHBAGCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E203300)
#define EBBJLHBAGCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E203790)
#define EBBJLHBAGCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2037F0)

inline static constexpr unsigned int EBBJLHBAGCJ_TypeDefinitionIndex = 25584;

	class EBBJLHBAGCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PIIKCFBHAFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KLLBKAHOPDI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LKPEPFMGGJK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EBBJLHBAGCJ")->GetStaticField(0x3E630);
		}

		static ::Google::Protobuf::MessageParser_1<::EBBJLHBAGCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBBJLHBAGCJ*>**)UnitySDK::FromName("", "EBBJLHBAGCJ")->GetStaticField(0x3E638);
		}

		// static const ::System::Object IMNOLKKDBNP; // 0x0
		// static const ::System::Object JIBIEFJKBAN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBBJLHBAGCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBJLHBAGCJ*))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBBJLHBAGCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBBJLHBAGCJ*>*(*)())((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBBJLHBAGCJ* Clone()
		{
			return ((::EBBJLHBAGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 NHHKMMHGJKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_NHHKMMHGJKB_OFFSET))(this);
		}

		::System::Void BIPGHNLHNGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_BIPGHNLHNGB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GHJCDKFKAAH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_GHJCDKFKAAH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBBJLHBAGCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBBJLHBAGCJ*))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBBJLHBAGCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBJLHBAGCJ*))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
