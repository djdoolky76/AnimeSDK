#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OALBLNCGKCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OALBLNCGKCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA9890)
#define OALBLNCGKCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA9B90)
#define OALBLNCGKCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA9400)
#define OALBLNCGKCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA9370)
#define OALBLNCGKCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA9320)
#define OALBLNCGKCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA9560)
#define OALBLNCGKCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA9460)
#define OALBLNCGKCO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EBA9450)
#define OALBLNCGKCO_FKFCAKCECHL_OFFSET UNITYSDK_OFFSET(0x1EBA9430)
#define OALBLNCGKCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA9650)
#define OALBLNCGKCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA92E0)
#define OALBLNCGKCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA99D0)
#define OALBLNCGKCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA9980)
#define OALBLNCGKCO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EBA9440)
#define OALBLNCGKCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA9310)
#define OALBLNCGKCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA9750)
#define OALBLNCGKCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA97B0)

	class OALBLNCGKCO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPMHBGMIOKK; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_JJGEFLHOIMG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OALBLNCGKCO")->GetStaticField(0xFC60);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OALBLNCGKCO")->GetStaticField(0xFC68);
		}

		// static const ::System::Object LFHDOINBFLB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OALBLNCGKCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OALBLNCGKCO*))((::PBYTE)hIl2Cpp + OALBLNCGKCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OALBLNCGKCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OALBLNCGKCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OALBLNCGKCO* Clone()
		{
			return ((::OALBLNCGKCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKFCAKCECHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_FKFCAKCECHL_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OALBLNCGKCO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OALBLNCGKCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OALBLNCGKCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OALBLNCGKCO*))((::PBYTE)hIl2Cpp + OALBLNCGKCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OALBLNCGKCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OALBLNCGKCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OALBLNCGKCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OALBLNCGKCO*))((::PBYTE)hIl2Cpp + OALBLNCGKCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OALBLNCGKCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
