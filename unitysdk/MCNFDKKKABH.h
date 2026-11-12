#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFCBKJEFKPG;
class MCNFDKKKABH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCNFDKKKABH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD45540)
#define MCNFDKKKABH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD45840)
#define MCNFDKKKABH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD450C0)
#define MCNFDKKKABH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD45010)
#define MCNFDKKKABH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD44FC0)
#define MCNFDKKKABH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD452A0)
#define MCNFDKKKABH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD45120)
#define MCNFDKKKABH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD453C0)
#define MCNFDKKKABH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD44F50)
#define MCNFDKKKABH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD45680)
#define MCNFDKKKABH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD455E0)
#define MCNFDKKKABH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD44FB0)
#define MCNFDKKKABH_PGBNBIKOJNH_OFFSET UNITYSDK_OFFSET(0x1FD45110)
#define MCNFDKKKABH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD45430)
#define MCNFDKKKABH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD45490)

inline static constexpr unsigned int MCNFDKKKABH_TypeDefinitionIndex = 29811;

	class MCNFDKKKABH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AFCBKJEFKPG*>* HMPOFLPIHKJ; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::AFCBKJEFKPG*>** StaticGet_EGHGFDAGLOH()
		{
			return (::Google::Protobuf::FieldCodec_1<::AFCBKJEFKPG*>**)UnitySDK::FromName("", "MCNFDKKKABH")->GetStaticField(0x4EE80);
		}

		static ::Google::Protobuf::MessageParser_1<::MCNFDKKKABH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCNFDKKKABH*>**)UnitySDK::FromName("", "MCNFDKKKABH")->GetStaticField(0x4EE88);
		}

		// static const ::System::Object INADIGMOENN; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::MCNFDKKKABH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCNFDKKKABH*>*(*)())((::PBYTE)hIl2Cpp + MCNFDKKKABH_JJGHOBBFNJD_OFFSET))();
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
