#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCBIEJNJDIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCBIEJNJDIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E29B0)
#define LCBIEJNJDIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E2C10)
#define LCBIEJNJDIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E2540)
#define LCBIEJNJDIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E24B0)
#define LCBIEJNJDIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E2460)
#define LCBIEJNJDIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E26E0)
#define LCBIEJNJDIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E25F0)
#define LCBIEJNJDIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E27D0)
#define LCBIEJNJDIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E2420)
#define LCBIEJNJDIF_LCHLKIHBHBA_OFFSET UNITYSDK_OFFSET(0x1E8E25E0)
#define LCBIEJNJDIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E2A70)
#define LCBIEJNJDIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E2A20)
#define LCBIEJNJDIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E2450)
#define LCBIEJNJDIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E28D0)
#define LCBIEJNJDIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E2930)

	class LCBIEJNJDIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GKPOJKHDHFO; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_MOBCNJLLPBC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LCBIEJNJDIF")->GetStaticField(0x31060);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LCBIEJNJDIF")->GetStaticField(0x31068);
		}

		// static const ::System::Object BHNEOLKFNAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCBIEJNJDIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCBIEJNJDIF*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LCBIEJNJDIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCBIEJNJDIF* Clone()
		{
			return ((::LCBIEJNJDIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LCHLKIHBHBA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_LCHLKIHBHBA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCBIEJNJDIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCBIEJNJDIF*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCBIEJNJDIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCBIEJNJDIF*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
