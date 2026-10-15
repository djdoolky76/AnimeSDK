#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIAPKELAF;
class MOOKMKEKMKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOOKMKEKMKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB3080)
#define MOOKMKEKMKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB33C0)
#define MOOKMKEKMKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB2BB0)
#define MOOKMKEKMKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB2A80)
#define MOOKMKEKMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB29F0)
#define MOOKMKEKMKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB2C40)
#define MOOKMKEKMKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB2C10)
#define MOOKMKEKMKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB2DB0)
#define MOOKMKEKMKC_HCEOPABCIIL_OFFSET UNITYSDK_OFFSET(0x1EAB2BF0)
#define MOOKMKEKMKC_HDJNFBIILMN_OFFSET UNITYSDK_OFFSET(0x1EAB2C00)
#define MOOKMKEKMKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB29B0)
#define MOOKMKEKMKC_KLLLKJNKDIN_OFFSET UNITYSDK_OFFSET(0x1EAB2BE0)
#define MOOKMKEKMKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB3260)
#define MOOKMKEKMKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB3190)
#define MOOKMKEKMKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB29E0)
#define MOOKMKEKMKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB2F10)
#define MOOKMKEKMKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB2F70)

inline static constexpr unsigned int MOOKMKEKMKC_TypeDefinitionIndex = 27471;

	class MOOKMKEKMKC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HGCIAPKELAF*>* ONFBAAIIBOD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* BNENLOCPOJL; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OACGFCMMNFE; // 0x28
		static ::System::Object** StaticGet_AHBKIIOCBFM()
		{
			return (::System::Object**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x5B020);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JBJPKLMKJAG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x5B028);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x5B030);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JIPIPEHJCNL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x5B038);
		}

		// static const ::System::Object MBIJFPNKPOC; // 0x0
		// static const ::System::Object NMIFLBAMHPH; // 0x0
		// static const ::System::Object OLDPBEFNKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOOKMKEKMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOKMKEKMKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MOOKMKEKMKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOOKMKEKMKC* Clone()
		{
			return ((::MOOKMKEKMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KLLLKJNKDIN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_KLLLKJNKDIN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HGCIAPKELAF*>* HCEOPABCIIL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HGCIAPKELAF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_HCEOPABCIIL_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* HDJNFBIILMN()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_HDJNFBIILMN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOOKMKEKMKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOOKMKEKMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
