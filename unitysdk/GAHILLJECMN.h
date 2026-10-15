#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHILLJECMN;
class KPLHHLEGGCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAHILLJECMN_AILACCLIFBD_OFFSET UNITYSDK_OFFSET(0x1E41C070)
#define GAHILLJECMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41C460)
#define GAHILLJECMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41C760)
#define GAHILLJECMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41C040)
#define GAHILLJECMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41BF90)
#define GAHILLJECMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41BF40)
#define GAHILLJECMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41C1C0)
#define GAHILLJECMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41C080)
#define GAHILLJECMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41C2E0)
#define GAHILLJECMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41BF00)
#define GAHILLJECMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41C5A0)
#define GAHILLJECMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41C500)
#define GAHILLJECMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41BF30)
#define GAHILLJECMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41C350)
#define GAHILLJECMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41C3B0)

	class GAHILLJECMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>* JCBODCAOPNP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAHILLJECMN")->GetStaticField(0xAC90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MHKCJBOBAEH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GAHILLJECMN")->GetStaticField(0xAC98);
		}

		// static const ::System::Object BFLHHJPMDGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAHILLJECMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHILLJECMN*))((::PBYTE)hIl2Cpp + GAHILLJECMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAHILLJECMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAHILLJECMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAHILLJECMN* Clone()
		{
			return ((::GAHILLJECMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>* AILACCLIFBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN_AILACCLIFBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAHILLJECMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAHILLJECMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAHILLJECMN*))((::PBYTE)hIl2Cpp + GAHILLJECMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAHILLJECMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAHILLJECMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHILLJECMN*))((::PBYTE)hIl2Cpp + GAHILLJECMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAHILLJECMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
