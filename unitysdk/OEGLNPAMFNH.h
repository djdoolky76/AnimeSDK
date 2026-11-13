#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDGEFKPIJJJ;
class OEGLNPAMFNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEGLNPAMFNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB5D500)
#define OEGLNPAMFNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB5D800)
#define OEGLNPAMFNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB5D080)
#define OEGLNPAMFNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB5CFD0)
#define OEGLNPAMFNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5CF80)
#define OEGLNPAMFNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB5D260)
#define OEGLNPAMFNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB5D0E0)
#define OEGLNPAMFNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB5D380)
#define OEGLNPAMFNH_JIDJENAPIPD_OFFSET UNITYSDK_OFFSET(0x1FB5D0D0)
#define OEGLNPAMFNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB5CF10)
#define OEGLNPAMFNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB5D640)
#define OEGLNPAMFNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB5D5A0)
#define OEGLNPAMFNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB5CF70)
#define OEGLNPAMFNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB5D3F0)
#define OEGLNPAMFNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB5D450)

inline static constexpr unsigned int OEGLNPAMFNH_TypeDefinitionIndex = 30196;

	class OEGLNPAMFNH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DDGEFKPIJJJ*>* LBJFDJMNDFD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OEGLNPAMFNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEGLNPAMFNH*>**)UnitySDK::FromName("", "OEGLNPAMFNH")->GetStaticField(0xF670);
		}

		static ::Google::Protobuf::FieldCodec_1<::DDGEFKPIJJJ*>** StaticGet_EBMPFDEOCME()
		{
			return (::Google::Protobuf::FieldCodec_1<::DDGEFKPIJJJ*>**)UnitySDK::FromName("", "OEGLNPAMFNH")->GetStaticField(0xF678);
		}

		// static const ::System::Object FOOPLJCKJCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEGLNPAMFNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEGLNPAMFNH*))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGLNPAMFNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEGLNPAMFNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEGLNPAMFNH*>*(*)())((::PBYTE)hIl2Cpp + OEGLNPAMFNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEGLNPAMFNH* Clone()
		{
			return ((::OEGLNPAMFNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DDGEFKPIJJJ*>* JIDJENAPIPD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DDGEFKPIJJJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_JIDJENAPIPD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEGLNPAMFNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEGLNPAMFNH*))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEGLNPAMFNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEGLNPAMFNH*))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEGLNPAMFNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
