#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFCBKJEFKPG;
class MCNFDKKKABH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCNFDKKKABH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9FBE10)
#define MCNFDKKKABH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FC1C0)
#define MCNFDKKKABH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9FB960)
#define MCNFDKKKABH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9FB830)
#define MCNFDKKKABH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FB7A0)
#define MCNFDKKKABH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9FBA30)
#define MCNFDKKKABH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9FB9D0)
#define MCNFDKKKABH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9FBB80)
#define MCNFDKKKABH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9FB730)
#define MCNFDKKKABH_LFELEFJBNGG_OFFSET UNITYSDK_OFFSET(0x1E9FB9C0)
#define MCNFDKKKABH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9FBFA0)
#define MCNFDKKKABH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9FBEF0)
#define MCNFDKKKABH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9FB790)
#define MCNFDKKKABH_PGBNBIKOJNH_OFFSET UNITYSDK_OFFSET(0x1E9FB9B0)
#define MCNFDKKKABH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9FBCD0)
#define MCNFDKKKABH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9FBD30)

	class MCNFDKKKABH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BAGDMOOGJEO; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AFCBKJEFKPG*>* HMPOFLPIHKJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KMABLAOGNBJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MCNFDKKKABH")->GetStaticField(0x488E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EGHGFDAGLOH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MCNFDKKKABH")->GetStaticField(0x488E8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MCNFDKKKABH")->GetStaticField(0x488F0);
		}

		// static const ::System::Object INADIGMOENN; // 0x0
		// static const ::System::Object IAOBHHFAMDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCNFDKKKABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCNFDKKKABH*))((::PBYTE)hIl2Cpp + MCNFDKKKABH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCNFDKKKABH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MCNFDKKKABH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCNFDKKKABH* Clone()
		{
			return ((::MCNFDKKKABH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AFCBKJEFKPG*>* PGBNBIKOJNH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AFCBKJEFKPG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_PGBNBIKOJNH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LFELEFJBNGG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_LFELEFJBNGG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCNFDKKKABH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCNFDKKKABH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCNFDKKKABH*))((::PBYTE)hIl2Cpp + MCNFDKKKABH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCNFDKKKABH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCNFDKKKABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCNFDKKKABH*))((::PBYTE)hIl2Cpp + MCNFDKKKABH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCNFDKKKABH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
