#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEDAMBICKBB;
class KICPDGKGGHO;
class OBEBKODGODB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KICPDGKGGHO_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E8559F0)
#define KICPDGKGGHO_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E855A10)
#define KICPDGKGGHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E855F80)
#define KICPDGKGGHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8563F0)
#define KICPDGKGGHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E855980)
#define KICPDGKGGHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E855850)
#define KICPDGKGGHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E855800)
#define KICPDGKGGHO_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E855A00)
#define KICPDGKGGHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E855AA0)
#define KICPDGKGGHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E855A40)
#define KICPDGKGGHO_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E8559E0)
#define KICPDGKGGHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E855C90)
#define KICPDGKGGHO_IEKJDFJFDJK_OFFSET UNITYSDK_OFFSET(0x1E855A30)
#define KICPDGKGGHO_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E8559D0)
#define KICPDGKGGHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E855790)
#define KICPDGKGGHO_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E855A20)
#define KICPDGKGGHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8562D0)
#define KICPDGKGGHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8561A0)
#define KICPDGKGGHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8557F0)
#define KICPDGKGGHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E855D50)
#define KICPDGKGGHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E855DB0)

	class KICPDGKGGHO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IEDAMBICKBB*>* NBAHODMAOMA; // 0x10
		::OBEBKODGODB* HDAIPLJBGAB; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt64 NPFBAFODCBI; // 0x28
		::System::UInt32 FOBLPJCIGJE; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KICPDGKGGHO")->GetStaticField(0x177F0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BMLBEMPCDKN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KICPDGKGGHO")->GetStaticField(0x177F8);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object BNPOLNPHIJD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KICPDGKGGHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KICPDGKGGHO*))((::PBYTE)hIl2Cpp + KICPDGKGGHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KICPDGKGGHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KICPDGKGGHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KICPDGKGGHO* Clone()
		{
			return ((::KICPDGKGGHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_CLONE_OFFSET))(this);
		}

		::OBEBKODGODB* IOIFPHAMFDF()
		{
			return ((::OBEBKODGODB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::OBEBKODGODB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBEBKODGODB*))((::PBYTE)hIl2Cpp + KICPDGKGGHO_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::UInt64 ACOJNBBKMOE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KICPDGKGGHO_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KICPDGKGGHO_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IEDAMBICKBB*>* IEKJDFJFDJK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IEDAMBICKBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_IEKJDFJFDJK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KICPDGKGGHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KICPDGKGGHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KICPDGKGGHO*))((::PBYTE)hIl2Cpp + KICPDGKGGHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KICPDGKGGHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KICPDGKGGHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KICPDGKGGHO*))((::PBYTE)hIl2Cpp + KICPDGKGGHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KICPDGKGGHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
