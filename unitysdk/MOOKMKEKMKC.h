#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIAPKELAF;
class MOOKMKEKMKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOOKMKEKMKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF1BE00)
#define MOOKMKEKMKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF1C140)
#define MOOKMKEKMKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF1B930)
#define MOOKMKEKMKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF1B800)
#define MOOKMKEKMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1B770)
#define MOOKMKEKMKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF1B9C0)
#define MOOKMKEKMKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF1B990)
#define MOOKMKEKMKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF1BB30)
#define MOOKMKEKMKC_HCEOPABCIIL_OFFSET UNITYSDK_OFFSET(0x1FF1B980)
#define MOOKMKEKMKC_HDJNFBIILMN_OFFSET UNITYSDK_OFFSET(0x1FF1B970)
#define MOOKMKEKMKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF1B730)
#define MOOKMKEKMKC_KLLLKJNKDIN_OFFSET UNITYSDK_OFFSET(0x1FF1B960)
#define MOOKMKEKMKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF1BFE0)
#define MOOKMKEKMKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF1BF10)
#define MOOKMKEKMKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF1B760)
#define MOOKMKEKMKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF1BC90)
#define MOOKMKEKMKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF1BCF0)

inline static constexpr unsigned int MOOKMKEKMKC_TypeDefinitionIndex = 28002;

	class MOOKMKEKMKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OACGFCMMNFE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::HGCIAPKELAF*>* ONFBAAIIBOD; // 0x20
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* BNENLOCPOJL; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JBJPKLMKJAG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x54E50);
		}

		static ::Google::Protobuf::FieldCodec_1<::HGCIAPKELAF*>** StaticGet_JIPIPEHJCNL()
		{
			return (::Google::Protobuf::FieldCodec_1<::HGCIAPKELAF*>**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x54E58);
		}

		static ::Google::Protobuf::MessageParser_1<::MOOKMKEKMKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOOKMKEKMKC*>**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x54E60);
		}

		static ::System::Object** StaticGet_AHBKIIOCBFM()
		{
			return (::System::Object**)UnitySDK::FromName("", "MOOKMKEKMKC")->GetStaticField(0x54E68);
		}

		// static const ::System::Object MBIJFPNKPOC; // 0x0
		// static const ::System::Object OLDPBEFNKME; // 0x0
		// static const ::System::Object NMIFLBAMHPH; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::MOOKMKEKMKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOOKMKEKMKC*>*(*)())((::PBYTE)hIl2Cpp + MOOKMKEKMKC_JJGHOBBFNJD_OFFSET))();
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

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* HDJNFBIILMN()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_HDJNFBIILMN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HGCIAPKELAF*>* HCEOPABCIIL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HGCIAPKELAF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC_HCEOPABCIIL_OFFSET))(this);
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
