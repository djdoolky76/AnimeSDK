#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDMHNMPGNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNDMHNMPGNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B26D0)
#define LNDMHNMPGNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B2930)
#define LNDMHNMPGNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B22D0)
#define LNDMHNMPGNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B2240)
#define LNDMHNMPGNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B21F0)
#define LNDMHNMPGNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B2400)
#define LNDMHNMPGNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B2310)
#define LNDMHNMPGNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B24F0)
#define LNDMHNMPGNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B21B0)
#define LNDMHNMPGNP_MEKGDOLMEPE_OFFSET UNITYSDK_OFFSET(0x1E9B2300)
#define LNDMHNMPGNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B2790)
#define LNDMHNMPGNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B2740)
#define LNDMHNMPGNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B21E0)
#define LNDMHNMPGNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B25F0)
#define LNDMHNMPGNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B2650)

	class LNDMHNMPGNP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NJFLPHPNFHJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LNDMHNMPGNP")->GetStaticField(0x4FDF0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CILAHFEOPEI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LNDMHNMPGNP")->GetStaticField(0x4FDF8);
		}

		// static const ::System::Object BJIPBBFIBPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNDMHNMPGNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNDMHNMPGNP*))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNDMHNMPGNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LNDMHNMPGNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNDMHNMPGNP* Clone()
		{
			return ((::LNDMHNMPGNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MEKGDOLMEPE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_MEKGDOLMEPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNDMHNMPGNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNDMHNMPGNP*))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNDMHNMPGNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNDMHNMPGNP*))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNDMHNMPGNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
