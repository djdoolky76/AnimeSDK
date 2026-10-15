#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNGIAAHKP;
class GFGPOLPKOLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFGPOLPKOLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E46BCD0)
#define GFGPOLPKOLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46BFB0)
#define GFGPOLPKOLH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E46B8B0)
#define GFGPOLPKOLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E46B820)
#define GFGPOLPKOLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46B7E0)
#define GFGPOLPKOLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E46BA30)
#define GFGPOLPKOLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E46B8F0)
#define GFGPOLPKOLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E46BB50)
#define GFGPOLPKOLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E46B7A0)
#define GFGPOLPKOLH_KGFELPGKDOF_OFFSET UNITYSDK_OFFSET(0x1E46B8E0)
#define GFGPOLPKOLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E46BE10)
#define GFGPOLPKOLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E46BD70)
#define GFGPOLPKOLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E46B7D0)
#define GFGPOLPKOLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E46BBC0)
#define GFGPOLPKOLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E46BC20)

	class GFGPOLPKOLH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* BGJCJABGHJJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFGPOLPKOLH")->GetStaticField(0x13F80);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IKPJLNHBNNM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GFGPOLPKOLH")->GetStaticField(0x13F88);
		}

		// static const ::System::Object OKJIKKJOAJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFGPOLPKOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFGPOLPKOLH*))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFGPOLPKOLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFGPOLPKOLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFGPOLPKOLH* Clone()
		{
			return ((::GFGPOLPKOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* KGFELPGKDOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_KGFELPGKDOF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFGPOLPKOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFGPOLPKOLH*))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFGPOLPKOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFGPOLPKOLH*))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFGPOLPKOLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
