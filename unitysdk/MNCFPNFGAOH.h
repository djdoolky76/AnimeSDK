#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNCFPNFGAOH;
class OKJCHGLGBHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNCFPNFGAOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA91AC0)
#define MNCFPNFGAOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA91DC0)
#define MNCFPNFGAOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA916A0)
#define MNCFPNFGAOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA915F0)
#define MNCFPNFGAOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA915A0)
#define MNCFPNFGAOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA91820)
#define MNCFPNFGAOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA916E0)
#define MNCFPNFGAOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA91940)
#define MNCFPNFGAOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA91560)
#define MNCFPNFGAOH_KKBJCOEKODE_OFFSET UNITYSDK_OFFSET(0x1EA916D0)
#define MNCFPNFGAOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA91C00)
#define MNCFPNFGAOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA91B60)
#define MNCFPNFGAOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA91590)
#define MNCFPNFGAOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA919B0)
#define MNCFPNFGAOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA91A10)

	class MNCFPNFGAOH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OKJCHGLGBHP*>* ACIPLELKOBD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_HEPNBMLECIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MNCFPNFGAOH")->GetStaticField(0x597F0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MNCFPNFGAOH")->GetStaticField(0x597F8);
		}

		// static const ::System::Object EJHKDHEJHEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNCFPNFGAOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCFPNFGAOH*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MNCFPNFGAOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNCFPNFGAOH* Clone()
		{
			return ((::MNCFPNFGAOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKJCHGLGBHP*>* KKBJCOEKODE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKJCHGLGBHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_KKBJCOEKODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNCFPNFGAOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNCFPNFGAOH*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNCFPNFGAOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCFPNFGAOH*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNCFPNFGAOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
