#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMGCEMNNPBM;
class JBHLNAHOJOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMGCEMNNPBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D3020)
#define GMGCEMNNPBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3360)
#define GMGCEMNNPBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D2B40)
#define GMGCEMNNPBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D2A10)
#define GMGCEMNNPBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D2980)
#define GMGCEMNNPBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D2BE0)
#define GMGCEMNNPBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D2BB0)
#define GMGCEMNNPBM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4D2B80)
#define GMGCEMNNPBM_FKFCAKCECHL_OFFSET UNITYSDK_OFFSET(0x1E4D2BA0)
#define GMGCEMNNPBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D2D30)
#define GMGCEMNNPBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D2940)
#define GMGCEMNNPBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D3210)
#define GMGCEMNNPBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D3150)
#define GMGCEMNNPBM_MPHIMCMBJGC_OFFSET UNITYSDK_OFFSET(0x1E4D2B90)
#define GMGCEMNNPBM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4D2B70)
#define GMGCEMNNPBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D2970)
#define GMGCEMNNPBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D2E80)
#define GMGCEMNNPBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D2EE0)

	class GMGCEMNNPBM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPMHBGMIOKK; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>* JIHOHBEMIID; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_JJGEFLHOIMG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMGCEMNNPBM")->GetStaticField(0x21AA0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LCOCPCGLFKF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMGCEMNNPBM")->GetStaticField(0x21AA8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMGCEMNNPBM")->GetStaticField(0x21AB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HILCNCKAGFK; // 0x0
		// static const ::System::Object LFHDOINBFLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMGCEMNNPBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMGCEMNNPBM*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMGCEMNNPBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMGCEMNNPBM* Clone()
		{
			return ((::GMGCEMNNPBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>* MPHIMCMBJGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_MPHIMCMBJGC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKFCAKCECHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_FKFCAKCECHL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMGCEMNNPBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMGCEMNNPBM*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMGCEMNNPBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMGCEMNNPBM*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
