#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDHJFGCEJF;
class JKPIHPAGABC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKPIHPAGABC_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1FE6A320)
#define JKPIHPAGABC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE6A710)
#define JKPIHPAGABC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE6AA10)
#define JKPIHPAGABC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE6A2F0)
#define JKPIHPAGABC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE6A240)
#define JKPIHPAGABC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE6A1F0)
#define JKPIHPAGABC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE6A470)
#define JKPIHPAGABC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE6A330)
#define JKPIHPAGABC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE6A590)
#define JKPIHPAGABC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE6A1B0)
#define JKPIHPAGABC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE6A850)
#define JKPIHPAGABC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE6A7B0)
#define JKPIHPAGABC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE6A1E0)
#define JKPIHPAGABC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE6A600)
#define JKPIHPAGABC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE6A660)

inline static constexpr unsigned int JKPIHPAGABC_TypeDefinitionIndex = 30798;

	class JKPIHPAGABC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HGDHJFGCEJF*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::HGDHJFGCEJF*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::HGDHJFGCEJF*>**)UnitySDK::FromName("", "JKPIHPAGABC")->GetStaticField(0x62390);
		}

		static ::Google::Protobuf::MessageParser_1<::JKPIHPAGABC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKPIHPAGABC*>**)UnitySDK::FromName("", "JKPIHPAGABC")->GetStaticField(0x62398);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKPIHPAGABC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKPIHPAGABC*))((::PBYTE)hIl2Cpp + JKPIHPAGABC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKPIHPAGABC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKPIHPAGABC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKPIHPAGABC*>*(*)())((::PBYTE)hIl2Cpp + JKPIHPAGABC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKPIHPAGABC* Clone()
		{
			return ((::JKPIHPAGABC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HGDHJFGCEJF*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HGDHJFGCEJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKPIHPAGABC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKPIHPAGABC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKPIHPAGABC*))((::PBYTE)hIl2Cpp + JKPIHPAGABC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKPIHPAGABC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKPIHPAGABC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKPIHPAGABC*))((::PBYTE)hIl2Cpp + JKPIHPAGABC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKPIHPAGABC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
