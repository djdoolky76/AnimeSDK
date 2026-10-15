#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJGOBCCMHOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJGOBCCMHOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE82690)
#define OJGOBCCMHOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE828F0)
#define OJGOBCCMHOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE82290)
#define OJGOBCCMHOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE82200)
#define OJGOBCCMHOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE821B0)
#define OJGOBCCMHOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE823C0)
#define OJGOBCCMHOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE822D0)
#define OJGOBCCMHOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE824B0)
#define OJGOBCCMHOH_HBCCHMLMMIL_OFFSET UNITYSDK_OFFSET(0x1DE822C0)
#define OJGOBCCMHOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE82170)
#define OJGOBCCMHOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE82750)
#define OJGOBCCMHOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE82700)
#define OJGOBCCMHOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE821A0)
#define OJGOBCCMHOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE825B0)
#define OJGOBCCMHOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE82610)

	class OJGOBCCMHOH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKAEPFJDFBM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OJGOBCCMHOH")->GetStaticField(0x1EE20);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IJJJDLPEMFG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OJGOBCCMHOH")->GetStaticField(0x1EE28);
		}

		// static const ::System::Object EKLJNBBOABD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJGOBCCMHOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJGOBCCMHOH*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OJGOBCCMHOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJGOBCCMHOH* Clone()
		{
			return ((::OJGOBCCMHOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBCCHMLMMIL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_HBCCHMLMMIL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJGOBCCMHOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJGOBCCMHOH*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJGOBCCMHOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJGOBCCMHOH*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
